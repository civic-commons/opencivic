<?php
/**
 * @file
 * File containing code for the public API page.
 *
 * TODO: It would make sense to utilize
 * render arrays for this and just make a huge
 * renderable array.
 */
 
/**
 * Main callback for API documentation page.
 */
function ocapi_documentation_page() {
  // Let's get the API data.  We will assume that we only
  // want services resources that are in the format:
  // "oc_api_"
  $prefix = 'oc_api_';
  
  // Let's put this all behind a cache, so check first
  $api = cache_get('ocapi_doc_page');
  if (!$api) {
  
    module_load_include('resource_build.inc', 'services');
    // Call _services_build_resources() directly instead of
    // services_get_resources to bypass caching.
    $resources = _services_build_resources();
    // Go through available endpoints.
    $endpoints = services_endpoint_load_all();
    foreach ($endpoints as $ep_id => $ep) {
      // Check prefix first
      if (strpos($ep_id, $prefix) !== 0) {
        continue;
      }
      
      // Start the data
      $api[$ep_id] = $ep;
      
      // Go through resources and add details
      $config_types = array('actions', 'relationships', 'operations');
      foreach ($ep->resources as $entity => $config) {
        // Views service doesn't return an endpoint consistently, which causes
        // a fatal error below unless we excludes.
        if ($entity != 'views') {
          foreach ($config as $config_type => $config_set) {
            if (is_array($config_set) && in_array($config_type, $config_types)) {
              foreach ($config_set as $k => $v) {
                $api[$ep_id]->resources[$entity][$config_type][$k] += 
                  $resources[$entity][$config_type][$k];
              }
            }
          }
        }
      }
    }
    // Allow for alter
    drupal_alter('ocapi', $api);
    
    // Set the cache
    cache_set('ocapi_doc_page', $api);
  }
  else {
    $api = $api->data;
  }
  
  // Include some CSS and JS
  drupal_add_css(drupal_get_path('module', 'ocapi') . '/ocapi.css');
  drupal_add_js(drupal_get_path('module', 'ocapi') . '/js/jquery.tableofcontents.js');
  drupal_add_js(drupal_get_path('module', 'ocapi') . '/js/ocapi.page.js');
  
  // Create output
  return ocapi_display_documentation($api);
}

/**
 * Implements hook_ocapi_alter().
 */
function ocapi_ocapi_alter(&$apis) {
  foreach ($apis as $api_id => $api) {
    // Add title and description
    $apis[$api_id]->title = t('Version 01');
    $apis[$api_id]->description = '<p>' . t('The first version of the Marketplace API is focused on providing basic mechanisms for data input and output.  It may be a bit rough around the edges.') . '</p>';
    $apis[$api_id]->base_url = url($api->path, array('absolute' => TRUE));
    
    // Add formatter meta data
    ocapi_documentation_page_formatters(
      $apis[$api_id]->server_settings['formatters'], 
      $apis[$api_id]->base_url . '/node'
    );
    
    // Add parser meta data
    ocapi_documentation_page_parsers(
      $apis[$api_id]->server_settings['parsers']
    );
    
    // Add resource meta data
    ocapi_documentation_page_resources($apis[$api_id]->resources, $apis[$api_id]->base_url);
    
    // Add data model information.
    ocapi_documentation_page_data_model($apis[$api_id]);
    
    // Views data if its enabled
    if (isset($api->resources['views']) && !empty($api->resources['views'])) {
      ocapi_documentation_page_views($apis[$api_id]);
    }
  }
}

/**
 * Main display operation for documentation
 */
function ocapi_display_documentation($apis) {
  $output = '';
  
  // Check for Syntaxhighlighter module
  $class = '';
  if (module_exists('syntaxhighlighter')) {
    $class = 'brush:plain';
  }
  
  // Vertical tabs stuff
  drupal_add_library('system', 'vertical-tabs');
//  drupal_add_js('misc/vertical-tabs.js');
//  drupal_add_css('misc/vertical-tabs.css');
  
  // jQuery UI tabs for second level tabs
  drupal_add_library('system', 'ui.tabs');
  
  // Put a top level example link
  if ($example = variable_get('ocapi_doc_page_examples_path', 'api/examples')) {
    $output .= '
      <p>' . t('This page is focused on providing a complete technical overview of the API.  For a set of examples, please go to the <a href="@url">example page</a>.', array(
        '@url' => url($example),
      )) . '</p>
    ';
  }
  
  // There could be multiple (versions) apis.
  foreach ($apis as $api_id => $api) {
    // Top level title
    $output .= '
      <h2 class="api-title">' . $api->title . '</h2>
      <div class="api-description">
        ' . $api->description . '
      </div>
    ';
    
    // Start vertical tabs
    $output .= '
      <div class="vertical-tabs-panes">
    ';
      
    // URLs

    $output .= ocapi_display_documentation_top_level(
      t('URLs'),
      t('This API is a <a href="@url">RESTful API</a>. It was built using the <a href="@services">Services module</a> for Drupal.
        URLs for API requests will be formed (most often) like the following:', 
        array(
          '@url' => 'http://en.wikipedia.org/wiki/Representational_state_transfer',
          '@services' => 'http://drupal.org/project/services',
        )
      ),
      'url',
      array(
        1 => array(
          'title' => t('URL formation'),
          'class' => $class,
          'data' => $api->base_url . '/[[method]].[[format]]?[[key]]=[[value]]',
        ),
        2 => array(
          'title' => t('URL example (retrieve the first page of node listings in JSON format)'),
          'class' => $class,
          'data' => $api->base_url . '/node.json?page=0',
        ),
        3 => array(
          'title' => t('URL example (retrieve the first page of node listings in XML format'),
          'class' => $class,
          'data' => $api->base_url . '/node.xml?page=0',
        ),
        4 => array(
          'title' => t('URL example (retrieve the node with node id=2 as a serialized PHP object)'),
          'class' => $class,
          'data' => $api->base_url . '/node/2.php',
        ),
      )
    );

    $output .= ocapi_display_documentation_top_level(
      t('Authentication'),
      '<div class="api-description-auth">
        <p>' . t('You will need to authenticate in some way if you want to create, update or delete data in the system.') . '</p>
        <h4>' . t('Session/Cookie Based') . '</h4>
        <p>' . t('Session based authentication is a method in which you post your username and password to an endpoint, and you will be given a <strong>session name</strong> and <strong>session ID</strong> that can be used for requests that require specific authenticated access (such as creating an Organization).  Please see the User Actions below for more in-depth look at the methods.') . '</p>
        <strong>' . t('CURL example') . '</strong>
        <p>' . t('Use the following command to get back the session data.  We use the verbose flag just so that you can see what is going on.') . '</p>
        <code><pre>
          curl -v --data \'{"username":"[[your_username]]","password":"[[your_password]]"}\' --header "Content-Type:application/json" ' . $api->base_url . '/user/login
        </pre></code>
        <p>' . t('You should receive an object back that is similar to the following:') . '</p>
        <code><pre>
          sessid: XXXXXXXXXXXXXXX
          session_name: YYYYYYYYYYYYY
          user: |
        </pre></code>
        <p>' . t('These can then be used in a call to create a node within the cookie.') . '</p>
        <code><pre>
          curl -v --data \'{"title":"New Article","type":"article"}\' --header "Content-Type:application/json" --header "Cookie: [[session_name]]=[[Session_id]]" ' . $api->base_url . '/node
        </pre></code>
      </div>',
      'authentication'
    );
    
    // Formatters.  Assuming rest servers.
    // Note that the Server settings need to be saved
    // for these options to be in the endpoint
    // object.
    $output .= ocapi_display_documentation_top_level(
      t('Response Formatters'),
      t(
        'The API defines the following <a href="@formatters">response formatters</a> that can be used to specify the data format for any data sent back in response to your request.',
        array(
          '@formatters' => 'http://drupal.org/node/1699450',
        )
      ),
      'response-formatters',
      array(),
      array(
        'formatters' => ocapi_display_documentation_formatters($api->server_settings['formatters']),
      )
    );
    
    // Parsers. Assuming Rest server.
    $output .= ocapi_display_documentation_top_level(
      t('Request Parsers'),
      t(
        '<a href="@parsers">Request parsers</a> specify how requests are sent to the API. Each request parser has a characterizing <a href="@media">internet media type</a> (also known as a MIME type or content-type). Most of the media types recognized by the API are subtypes of the "application" media type, indicating that the request is being submitted to an application program (your Drupal website) for processing to generate the result. The following request parsers are available:',
        array(
          '@parsers' => 'http://drupal.org/node/1699450',
          '@media' => 'http://en.wikipedia.org/wiki/Internet_media_type',
        )
      ),
      'input-parsers',
      array(),
      array(
        'parsers' => ocapi_display_documentation_parsers($api->server_settings['parsers']),
      )
    );

    // Data Model top level.
    $output .= ocapi_display_documentation_top_level(
      t('Data Model Concepts'),
      t('The data objects returned by the API were build using <a href="@drupal">Drupal</a> (version 7), so understanding some Drupal concepts can help you use the data. The links below can help you get started:
         <ul><li><a href="@drupal_api">Working with the Drupal API</a></li>
         <li><a href="@content">Content types and fields</a></li>
         <li><a href="@node">Node object reference</a></li>
         <li><a href="@entity">An introduction to entities</a></li>
         <li><a href="@field">Fields</a></li></ul>
         ',
        array(
          '@drupal_api' => 'http://drupal.org/developing/api',
          '@content' => 'http://drupal.org/documentation/modules/field-ui',
          '@node' => 'http://drupal.org/node/49768',
          '@entity_url' => 'http://drupal.org/node/1261744',
          '@field_url' => 'http://drupal.org/node/443536',
        )
      ),
      'data-model-concepts'
    );

    // Go through each data model type
    foreach ($api->data_model as $mid => $model) {
      $output .= ocapi_display_documentation_top_level(
        t('Data Model: %type', array('%type' => $model['name'])),
        filter_xss($model['description']),
        'data-model-' . $mid,
        array(),
        array(
          'bundles' => ocapi_display_documentation_bundles($model),
        )
      );
    }
    
    // Views searching API
    if (isset($api->views_searching) && is_array($api->views_searching)
       && count($api->views_searching) > 0) {
      $output .= ocapi_display_documentation_top_level(
        t('Searching'),
        t('Utilizing the Views methods as described below, you can find specific content.  Please see the <a href="#views">Views</a> section to get a general description of using the Searching API.'),
        'views-searching',
        array(),
        array(
          'views' => ocapi_display_documentation_views($api->views_searching),
        )
      );
    }
    
    // Resource/Methods
    $output .= ocapi_display_documentation_top_level(
      t('Resources'),
      t('Resource, or methods, are the specific RESTful API calls for manipulating data.'),
      'resources'
    );
    
    // Make each resource a top level item
    foreach ($api->resources as $r => $resource) {
      $output .= ocapi_display_documentation_top_level(
        t('Resource: %type', array('%type' =>  $resource['name'] )),
        $resource['description'],
        'resources-' . $r,
        array(),
        array(
          'resource_items' => ocapi_display_documentation_resources($resource, $r),
        )
      );
    }

    // Stop vertical tabs
    $output .= '
      </div>
    ';
  }
  
  return $output;
}

/**
 * Sub theme function for top level section
 */
function ocapi_display_documentation_top_level($title, $description, $class, $examples = array(), $children = array()) {
  $examples_output = '';
  if ($examples) {
    $examples_output .= '
      <div class="' . $class . '-examples">
        ' . ocapi_display_documentation_examples($examples) . '
      </div>
    ';
  }
  
  // Children
  $children_output = '';
  if ($children) {
    $children_output .= '<div class="' . $class . '-children children-tabs">';
    foreach ($children as $c => $child) {
      $children_output .= $child;
    }
    $children_output .= '</div>';
  }
  
  $output = '
    <fieldset>
      <legend>' . $title . '</legend>
      <div class="' . $class . '-container">
        <h3 id="id-' . $class . '">' . $title . '</h3>
        <div class="' . $class . '-description">
          <p>' . $description . '</p>
        </div>
        ' . $children_output . '
        ' . $examples_output . '
      </div>
    </fieldset>
  ';
      
  return $output;
}

/**
 * Render examples
 */
function ocapi_display_documentation_examples($examples = array()) {
  $output = '<strong>' . t('Examples') . '</strong>';
  $output .= '<ul>';
  foreach ($examples as $e => $example) {
    $output .= '
      <li>' . $example['title'] . ':
      <code><pre class="brush:plain">
        ' . $example['data'] . '
      </pre></code>
      </li>
    ';
  }
  $output .= '</ul>';
  
  return $output;
}

/**
 * Formatters output
 */
function ocapi_display_documentation_formatters($formatters = array()) {
  $output = '<dl>';
  foreach ($formatters as $f => $enabled) {
    $output .= '
      <dt>' . check_plain($f) . '</dt>
      <dd><p>' . $enabled['description'] . '</p>
        ' . t('Example URL') . ': 
        <code><pre class="brush:plain">
          ' . $enabled['example_url'] . '
        </pre></code>
      </dd>';
  }
  $output .= '</dl>';
  
  return $output;
}

/**
 * Parsers output
 */
function ocapi_display_documentation_parsers($parsers = array()) {
  $output = '<dl>';
  foreach ($parsers as $p => $enabled) {
    $output .= '
      <dt>' . check_plain($p) . '</dt>
      <dd><p>' . $enabled['description'] . '</p>
        ' . t('Example data') . ': 
        <code><pre class="brush:plain">
          ' . $enabled['example_data'] . '
        </pre></code>
      </dd>';
  }
  $output .= '</dl>';
  
  return $output;
}

/**
 * Data model
 */
function ocapi_display_documentation_bundles($bundles = array()) {
  $output = '';
    
  // Model types, aka entity bundles
  foreach ($bundles as $b => $bundle) {
    if (!in_array($b, array('name', 'description'))) {
      $output .= '<div class="children-tab" id="children-tab-data-bundle-' . $b . '">';
      $output .= '
        <h4>' . check_plain($bundle['name']) . '</h4>
        <p>' . filter_xss($bundle['description']) . '</p>
      ';
          
      // Custom fields
      if (!empty($bundle['fields'])) {
        $output .= '<strong>' . t('Custom Fields') . '</strong>';
        $rows = array();
        $headers = array(t('id'), t('Label'), t('Description'), t('Type'));
        foreach ($bundle['fields'] as $f) {
          $rows[] = array(
            $f['id'], 
            filter_xss($f['label']), 
            filter_xss($f['description']),
            $f['type'],
          );
        }
        $output .= theme('table', array(
          'header' => $headers,
          'rows' => $rows,
        ));
      }
      
      $output .= '</div>';
    }
  }
  
  return $output;
}

/**
 * Views sub items
 */
function ocapi_display_documentation_views($views) {
  $output = '';
  
  // Go through Views
  foreach ($views as $v => $view) {
    if (!in_array($v, array('name', 'description'))) {
      $output .= '<div class="children-tab" id="children-tab-views-' . $v . '">';
      $title = !empty($view['name']) ? $view['name'] : t('-no title-');
      $output .= '
        <h4>' . $title . '</h4>
        <p>' . $view['description'] . '</p>
        <ul>
          <li><strong>' . t('Identifier') . '</strong>: ' . $view['id'] . '</li>
          <li><strong>' . t('Base table') . '</strong>: ' . $view['base_table'] . '</li>
        </ul>
      ';
      
      // Displays
      foreach ($view['displays'] as $d => $display) {
        $output .= '
          <h5>' . $display['name'] . '</h5>
          <p>' . $display['description'] . '</p>
        ';
        
        // Examples
        if (isset($display['examples'])) {
          $output .= ocapi_display_documentation_examples($display['examples']);
        }
        
        // Filters
        if (isset($display['filters'])) {
          $output .= '
            <strong>' . t('Filters') . '</strong>
          ';
        
          $rows = array();
          $headers = array(t('Name'), t('Identifier'), t('Required'));
          foreach ($display['filters'] as $filter) {
            $rows[] = array(
              $filter['name'], 
              $filter['id'], 
              (empty($filter['required'])) ? t('no') : t('yes'),
            );
          }
          $output .= theme('table', array(
            'header' => $headers,
            'rows' => $rows,
          ));
        }
      }
      $output .= '</div>';
    }
  }
  
  return $output;
}

/**
 * Resource items
 */
function ocapi_display_documentation_resources($resource, $resource_id) {
  $output = '';

  // Resource object types
  foreach ($resource as $t => $type) {
    if (!in_array($t, array('name', 'description'))) {
      $output .= '<div class="children-tab" id="children-tab-resources-' . $resource_id . '-' . $t . '">';
      $output .= '
        <h4>' . $type['name'] . '</h4>
        <p>' . $type['description'] . '</p>
      ';
      
      // Methods
      foreach ($type as $a => $action) {
        if (!in_array($a, array('name', 'description'))) {

          $output .= '
            <h5>' . $action['name'] . '</h5>
            <p>' . $action['description'] . '</p>
            <p><strong>' . t('Method') . '</strong>: ' . $action['method'] . '</p>
          ';
          
          // Arguments
          if (!empty($action['args'])) {
            $output .= '<strong>' . t('Arguments') . '</strong>';
            $rows = array();
            $headers = array(t('Key'), t('Type'), t('Description'), t('Required'), t('Source'));
            foreach ($action['args'] as $arg) {
              $rows[] = array(
                $arg['name'], 
                $arg['type'], 
                (isset($arg['description'])) ? $arg['description'] : '', 
                (!empty($arg['optional'])) ? t('no') : t('yes'),
                (isset($arg['source']) && is_array($arg['source'])) ? implode(', ', array_flip($arg['source'])) : 
                  t('post body'),
              );
            }
            $output .= theme('table', array(
              'header' => $headers,
              'rows' => $rows,
            ));
          }
          
          // Examples
          if (!empty($action['examples'])) {
            $output .= ocapi_display_documentation_examples($action['examples']);
          }
        }
      }
      
      $output .= '</div>';
    }
  }
  
  return $output;   
}

/**
 * Add meta data to formatters.
 */
function ocapi_documentation_page_formatters(&$formatters, $base_url) {
  $formatters_meta = array(
    'bencode' => array(
      'description' => t('<a href="@url">Bencode</a> is used by BitTorrent.', array ('@url' => 'http://en.wikipedia.org/wiki/Bencode')),
      'example_url' => $base_url . '.bencode',
    ),
    'json' => array(
      'description' => t('<a href="@url">JSON</a> is a popular format used to describe Javascript objects.', array ('@url' => 'http://en.wikipedia.org/wiki/Json')),
      'example_url' => $base_url . '.json',
    ),
    'php' => array(
      'description' => t('Output data as a <a href="@url">serialized PHP</a> object.', array ('@url' => 'http://php.net/manual/en/function.serialize.php')),
      'example_url' => $base_url . '.php',
    ),
    'rss' => array(
      'description' => t('<a href="@url">RSS</a> is a popular format for syndicating content like blogs.   (seems to be some errors with this format)', array ('@url' => 'http://en.wikipedia.org/wiki/Rss')),
      'example_url' => $base_url . '.rss',
    ),
    'xml' => array(
      'description' => t('<a href="@url">XML</a> is a markup language similar to HTML.', array ('@url' => 'http://en.wikipedia.org/wiki/Xml')),
      'example_url' => $base_url . '.xml',
    ),
    'yaml' => array(
      'description' => t('<a href="@url">YAML</a> is a markup language meant for simplicity.  (seems to be always empty)', array ('@url' => 'http://en.wikipedia.org/wiki/Yaml')),
      'example_url' => $base_url . '.yaml',
    ),
    'jsonp' => array(
      'description' => t('<a href="@url">JSONP</a> is similar to JSON but is meant to get around Javascript cross-domain limitations.  This format takes an extra argument in the query string, <code>callback</code>, which is a Javascript callback function on your client-side code.  <strong>You must add the <code>Accept: application/javascript</code> HTTP header</strong> (not application/json).', array ('@url' => 'http://en.wikipedia.org/wiki/JSONP')),
      'example_url' => $base_url . '.jsonp?callback=ExampleCallback',
    ),
  );
  
  // Merge
  foreach ($formatters as $f => $format) {
    if (!is_array($formatters[$f])) {
      $formatters[$f] = array('enabled' => $formatters[$f]);
    }
    $formatters[$f] += $formatters_meta[$f];
  }
  unset($formatters['rss']);
}

/**
 * Add meta data to parsers.
 */
function ocapi_documentation_page_parsers(&$parsers) {
  $parsers_meta = array(
    'application/json' => array(
      'description' => t('<a href="@url">JSON</a> is a popular format used to describe Javascript objects.', array ('@url' => 'http://en.wikipedia.org/wiki/Bencode')),
      'example_data' => '
{
  key1: "value1", 
  key2: "value2"
}
      ',
    ),
    'application/vnd.php.serialized' => array(
      'description' => t('Input data as a <a href="@url">serialized PHP</a> object.', array ('@url' => 'http://php.net/manual/en/function.serialize.php')),
      'example_data' => 'a:2:{s:4:"key1";s:6:"value1";s:4:"key2";s:6:"value2";}',
    ),
    'application/x-yaml' => array(
      'description' => t('<a href="@url">YAML</a> is a markup language meant for simplicity.', array ('@url' => 'http://en.wikipedia.org/wiki/Yaml')),
      'example_data' => '
key1: value1
key2: value2
      ',
    ),
    'multipart/form-data' => array(
      'description' => t('<a href="@url">form-data</a> is an HTTP specification for sending data.', array ('@url' => 'http://www.w3.org/TR/html4/interact/forms.html#h-17.13.4.2')),
      'example_data' => '
Content-Type: multipart/form-data; boundary=AaB03x

--AaB03x
Content-Disposition: form-data; name="submit-name"

Larry
--AaB03x
Content-Disposition: form-data; name="files"; filename="file1.txt"
Content-Type: text/plain

... contents of file1.txt ...
--AaB03x--
      ',
    ),
    'application/x-www-form-urlencoded' => array(
      'description' => t('<a href="@url">x-www-form-urlencoded</a> is an HTTP specification for sending data with simple URL encoding.', array ('@url' => 'http://www.w3.org/TR/html4/interact/forms.html#h-17.13.4.1')),
      'example_data' => 'key1=value1&key2=value2',
    ),
    'application/xml' => array(
      'description' => t('<a href="@url">application/xml</a> is an HTTP specification for sending data with simple URL encoding.', array ('@url' => 'http://www.w3.org/TR/html4/interact/forms.html#h-17.13.4.1')),
      'example_data' => 'key1=value1&key2=value2',
    ),
    'text/xml' => array(
      'description' => t('<a href="@url">text/xml</a> is an HTTP specification for sending data with simple URL encoding.', array ('@url' => 'http://www.w3.org/TR/html4/interact/forms.html#h-17.13.4.1')),
      'example_data' => 'key1=value1&key2=value2',
    ),
  );
  
  // Merge
  foreach ($parsers as $p => $parser) {
    if (!is_array($parsers[$p])) {
      $parsers[$p] = array('enabled' => $parsers[$p]);
    }
    $parsers[$p] = array_merge($parsers[$p], $parsers_meta[$p]);
  }
}

/**
 * Add meta data to resources.
 */
function ocapi_documentation_page_resources(&$resources, $url) {
  $method_map = array(
    'retrieve' => 'GET',
    'update' => 'PUT',
    'delete' => 'DELETE',
    'index' => 'GET',
    'create' => 'POST',
    'actions' => 'POST',
    'targeted actions' => 'POST',
    'relationships' => 'GET',
  );
  
  $resources_meta = array(
    // Nodes
    'node' => array(
      'name' => t('Nodes'),
      'description' => t('Nodes are the basic content objects in the system.'),
      'operations' => array(
        'name' => t('Node Operations'),
        'description' => t('Basic operations for the Node objects.'),
        'create' => array(
          'name' => t('Create Node'),
          'description' => t('Use this method to create a specific node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"title":"node title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/node',
            ),
          ),
          'method' => $method_map['create'],
        ),
        'retrieve' => array(
          'name' => t('Retrieve Nodes'),
          'description' => t('Use this endpoint to retrieve a specific node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/node/[[nid]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
        'update' => array(
          'name' => t('Update Node'),
          'description' => t('Use this method to update a specific node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X PUT --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/node/[[nid]]',
            ),
          ),
          'method' => $method_map['update'],
        ),
        'delete' => array(
          'name' => t('Delete Node'),
          'description' => t('Use this method to delete a specific comment.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X DELETE --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/node/[[nid]]',
            ),
          ),
          'method' => $method_map['delete'],
        ),
        'index' => array(
          'name' => t('Search Nodes'),
          'description' => t('Use this method to search nodes.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/node.json',
            ),
            'curl_parmaters' => array(
              'title' => t('CURL (with parameters)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/node.json?parameters%5Bcid%5D=[[cid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'relationships' => array(
        'name' => t('Node Relationships'),
        'description' => t('Retrieve objects that are related to nodes.'),
        'files' => array(
          'name' => t('Files Attached to Node'),
          'description' => t('Use this method to get files that are associated with a node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET --data \'{"nid":"1234"}\' ' . $url . '/node.json',
            ),
          ),
          'method' => $method_map['index'],
        ),
        'comments' => array(
          'name' => t('New Comments Attached to Node'),
          'description' => t('Use this method to get new comments associated with a node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/node/[[nid]].json?count=3',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'targeted_actions' => array(
        'name' => t('Targeted Actions'),
        'description' => t('Other actions that can target a spectific node.'),
        'attach_file' => array(
          'name' => t('Attach file'),
          'description' => t('Upload and attach file(s) to a node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"nid":"1234"}\' --header "Content-Type:multipart/form-data" ' . $url . '/node/123/attach_file.json',
            ),
          ),
          'method' => $method_map['targeted actions'],
        ),
      ),
    ),
    // Comments
    'comment' => array(
      'name' => t('Comments'),
      'description' => t('Comments are user supplied data that are attached to content, like nodes.'),
      'operations' => array(
        'name' => t('Comment Operations'),
        'description' => t('Basic operations for the Comment objects.'),
        'create' => array(
          'name' => t('Create Comments'),
          'description' => t('Use this method to create a specific comment.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"title":"comment title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/comment',
            ),
          ),
          'method' => $method_map['create'],
        ),
        'retrieve' => array(
          'name' => t('Retrieve Comments'),
          'description' => t('Use this method to retrieve a specific comment.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v  ' . $url . '/comment/[[cid]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
        'update' => array(
          'name' => t('Update Comment'),
          'description' => t('Use this method to update a specific comment.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X PUT --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/comment/[[cid]]',
            ),
          ),
          'method' => $method_map['update'],
        ),
        'delete' => array(
          'name' => t('Delete Comment'),
          'description' => t('Use this method to delete a specific comment.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X DELETE --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/comment/[[cid]]',
            ),
          ),
          'method' => $method_map['delete'],
        ),
        'index' => array(
          'name' => t('Search Comment'),
          'description' => t('Use this method to search comments.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/comment.json',
            ),
            'curl_parmaters' => array(
              'title' => t('CURL (with parameters)'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/comment.json?parameters%5Bcid%5D=[[cid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'actions' => array(
        'name' => t('Comment Actions'),
        'description' => t('Actions for the Comment objects.'),
        'countAll' => array(
          'name' => t('Count Comments per Node'),
          'description' => t('Returns the number of comments are on a single node.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl  -X GET -v --data \'{"nid":"1234"}\' ' . $url . '/comment/countAll',
            ),
          ),
          'method' => $method_map['index'],
        ),
        'countNew' => array(
          'name' => t('Count New Comments per Node'),
          'description' => t('Returns the number of new comments are on a single node, given a timestamp.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl  -X GET -v --data \'{"nid":"1234", "since":"123456789"}\' ' . $url . '/comment/countNew',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
    ),
    'taxonomy_vocabulary' => array(
      'name' => t('Taxonomies'),
      'description' => t('Taxonomies are ways of grouping objects, like nodes. A taxonomy vocabulary is a collection of taxonomy terms.'),
      'operations' => array(
        'name' => t('Term Operations'),
        'description' => t('Basic operations for Taxonomy Vocabulary objects.'),
        'create' => array(
          'name' => t('Create Vocabulary'),
          'description' => t('Use this method to create a Taxonomy Vocabulary.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_vocabulary',
            ),
          ),
          'method' => $method_map['create'],
        ),
        'retrieve' => array(
          'name' => t('Retrieve Vocabulary'),
          'description' => t('Use this endpoint to retrieve a single Vocabulary.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_vocabulary/[[vid]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
        'update' => array(
          'name' => t('Update Vocabulary'),
          'description' => t('Use this method to update a specific Vocabulary.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X PUT --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_vocabulary/[[vid]]',
            ),
          ),
          'method' => $method_map['update'],
        ),
        'delete' => array(
          'name' => t('Delete Vocabulary'),
          'description' => t('Use this method to delete a specific Vocabulary.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X DELETE --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_vocabulary/[[vid]]',
            ),
          ),
          'method' => $method_map['delete'],
        ),
        'index' => array(
          'name' => t('Search Vocabularies'),
          'description' => t('Use this method to search Vocabularies.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_vocabulary.json',
            ),
            'curl_parameters' => array(
              'title' => t('CURL with parameters'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_vocabulary.json?parameters%5Bvid%5D=[[vid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'actions' => array(
        'name' => t('Term Actions'),
        'description' => t('Actions for Vocabulary objects.'),
        'getTree' => array(
          'name' => t('Get Tree'),
          'description' => t('Use this method to get all terms for a specific Vocabulary.'),
          'examples' => array(
            'curl_select' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_vocabulary/getTree.json?vid=[[vid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
    ),
    'taxonomy_term' => array(
      'name' => t('Taxonomy Terms'),
      'description' => t('Taxonomies are ways of grouping objects, like nodes, and the terms are the specific category terms.'),
      'operations' => array(
        'name' => t('Term Operations'),
        'description' => t('Basic operations for Taxonomy Term objects.'),
        'create' => array(
          'name' => t('Create Term'),
          'description' => t('Use this method to create a specific Taxonomy Term.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_term',
            ),
          ),
          'method' => $method_map['create'],
        ),
        'retrieve' => array(
          'name' => t('Retrieve Term'),
          'description' => t('Use this endpoint to retrieve a specific Term.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_term/[[tid]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
        'update' => array(
          'name' => t('Update Term'),
          'description' => t('Use this method to update a specific term.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X PUT --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_term/[[tid]]',
            ),
          ),
          'method' => $method_map['update'],
        ),
        'delete' => array(
          'name' => t('Delete Term'),
          'description' => t('Use this method to delete a specific term.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL (Session auth)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X DELETE --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/taxonomy_term/[[tid]]',
            ),
          ),
          'method' => $method_map['delete'],
        ),
        'index' => array(
          'name' => t('Search Terms'),
          'description' => t('Use this method to search Terms.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_term.json',
            ),
            'curl_parameters' => array(
              'title' => t('CURL with parameters'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_term.json?parameters%5Bvid%5D=[[vid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'actions' => array(
        'name' => t('Term Actions'),
        'description' => t('Actions for the Term objects.'),
        'selectNodes' => array(
          'name' => t('Nodes with Term'),
          'description' => t('Use this method to get all nodes with specific Term.'),
          'examples' => array(
            'curl_select' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/taxonomy_term/selectNodes.json?tid=[[tid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
    ),
    'views' => array(
      'name' => t('Views'),
      'description' => t('Views are queries of data as defined in configuration.'),
      'operations' => array(
        'name' => t('Views Operations'),
        'description' => t('Basic operations on Views.'),
        'retrieve' => array(
          'name' => t('Search Views'),
          'description' => t('Use this method to search Views.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v --data ' . $url . '/views/[[view-name]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
      ),
    ),
    'user' => array(
      'name' => t('User'),
      'description' => t('User methods.'),
      'operations' => array(
        'name' => t('User Operations'),
        'description' => t('Basic operations for User objects.'),
        'create' => array(
          'name' => t('Create User'),
          'description' => t('Use this method to create a specific user.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X POST --data \'{"title":"user title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/user',
            ),
          ),
          'method' => $method_map['create'],
        ),
        'retrieve' => array(
          'name' => t('Retrieve User'),
          'description' => t('Use this endpoint to retrieve a specific user.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/user/[[uid]].json',
            ),
          ),
          'method' => $method_map['retrieve'],
        ),
        'update' => array(
          'name' => t('Update User'),
          'description' => t('Use this method to update a specific user.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X PUT --data \'{"title":"new title"}\' --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/user/[[uid]]',
            ),
          ),
          'method' => $method_map['update'],
        ),
        'delete' => array(
          'name' => t('Delete User'),
          'description' => t('Use this method to delete a specific user.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X DELETE --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/user/[[uid]]',
            ),
          ),
          'method' => $method_map['delete'],
        ),
        'index' => array(
          'name' => t('Search Users'),
          'description' => t('Use this method to search users.'),
          'examples' => array(
            'curl_retrieve' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/user.json',
            ),
            'curl_parmaters' => array(
              'title' => t('CURL (with parameters)'),
              'class' => 'brush:plain',
              'data' => 'curl -v -X GET ' . $url . '/user.json?parameters%5Bcid%5D=[[cid]]',
            ),
          ),
          'method' => $method_map['index'],
        ),
      ),
      'actions' => array(
        'name' => t('User Actions'),
        'description' => t('User actions like logging in and logging out.'),
        'login' => array(
          'name' => t('User Login'),
          'description' => t('Use this method to login into the site with a username and password.  you will recieve a session name and session ID that can then be used within a cookie to make requests that require authentication.'),
          'examples' => array(
            'curl_login' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v --data \'{"username":"[[your_username]]","password":"[[your_password]]"}\' --header "Content-Type:application/json" ' . $url .'/user/login ',
            ),
          ),
          'method' => $method_map['actions'],
        ),
        'logout' => array(
          'name' => t('User Logout'),
          'description' => t('Logout a user, given the session.'),
          'examples' => array(
            'curl_login' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v --header "Cookie: [[session_name]]=[[session_id]]" ' . $url . '/user/logout',
            ),
          ),
          'method' => $method_map['actions'],
        ),
        'register' => array(
          'name' => t('Register User'),
          'description' => t('Register a new user account.'),
          'examples' => array(
            'curl_login' => array(
              'title' => t('CURL'),
              'class' => 'brush:plain',
              'data' => 'curl -v ' . $url . '/user/register',
            ),
          ),
          'method' => $method_map['actions'],
        ),
      ),
    ),
  );
  
  // Merge
  $resources = ocapi_merge_arrays($resources_meta, $resources);
}

/**
 * Add metadata to data model.
 */
function ocapi_documentation_page_data_model(&$api) {
  $api->data_model = isset($api->data_model) ? $api->data_model : array();
  
  // Nodes
  $node_types = node_type_get_types();
  $api->data_model['appcat'] = array(
    'name' => t('Apps Catalog'),
    'description' => t('The Application Catalog component of OpenCivic defines the <b>Application</b>, <b>Organization</b> and <b>Deployment</b> content types.'),
  );
  $api->data_model['occomm'] = array(
    'name' => t('Community'),
    'description' => t('The Community component of OpenCivic defines the <b>Blog</b> and <b>Event</b> content types.'),
  );
  $api->data_model['ochack'] = array(
    'name' => t('Hackathon'),
    'description' => t('The Hackathon component of OpenCivic defines the <b>Problem</b> and <b>Project</b> content types.'),
  );
  $api->data_model['ocmisc'] = array(
    'name' => t('Miscellaneous'),
    'description' => t('The Miscellaneous component of OpenCivic defines the <b>Article</b>, <b>Basic Page</b> and <b>Sponsor</b> content types.'),
  );
  
  // Check node type configuration
  $enabled = variable_get('ocapi_doc_page_data_model_content_types', array('application', 'organization', 'deployment', 'blog', 'event', 'problem', 'project', 'article', 'page', 'sponsor'));
  $component_map = array(
    'appcat' => array('application', 'organization', 'deployment'),
    'occomm' => array('blog', 'event'),
    'ochack' => array('problem', 'project'),
    'ocmisc' => array('article', 'page', 'sponsor'),
  );
  
  // Add node type data to $api object
  foreach ($component_map as $component => $types) {
    foreach ($types as $type_id) {
      $node_type = $node_types[$type_id];
      // Check configuration
      if (!in_array($type_id, $enabled)) {
        continue;
      }

      $api->data_model[$component][$type_id] = array(
        'id' => $type_id,
        'name' => $node_type->name,
        'description' => $node_type->description,
      );

      // Add field data to $api object
      $fields = field_info_instances('node', $type_id);
      foreach ($fields as $fid => $field) {
        $field_details = field_info_field($fid);
        $api->data_model[$component][$type_id]['fields'][$fid] = array(
          'id' => $field['field_name'],
          'label' => $field['label'],
          'description' => $field['description'],
          'type' => $field_details['type'],
        );
      }
    }
  }
}


/**
 * Add metadata to views model.
 */
function ocapi_documentation_page_views(&$api) {
  $api->views_searching = isset($api->views_searching) ? $api->views_searching : array();
  $tag = variable_get('ocapi_doc_page_views_tag', 'api');
  
  $views = views_get_all_views();
  foreach ($views as $view) {
    // Check tag
    if (!empty($tag) && $view->tag != $tag) {
      continue;
    }

    $data = array();
    $data['id'] = $view->name;
    $data['name'] = $view->human_name;
    $data['description'] = $view->description;
    $data['base_table'] = $view->base_table;
  
    // Get displays
    $data['displays'] = array();
    $default_filters = array();
    foreach ($view->display as $d => $display) {
      $data['displays'][$d] = array(
        'id' => $display->id,
        'name' => ($d == 'default') ? t('Default') : $display->display_title,
        'description' => isset($display->display_options['display_description']) ?
          $display->display_options['display_description'] : '',
      );
      
      // Filters
      if (isset($display->display_options['filters'])) {
        $data['displays'][$d]['filters'] = array();
        foreach ($display->display_options['filters'] as $f => $filter) {
          if (isset($filter['exposed']) && $filter['exposed']) {
            $data['displays'][$d]['filters'][$f] = array(
              'name' => $filter['expose']['label'],
              'id' => $filter['expose']['identifier'],
              'required' => isset($filter['expose']['required']) ? 
                $filter['expose']['required'] : 0,
            );
          }
        }
      }
      
      // Merge with defaults
      if ($d != 'default') {
        $data['displays'][$d]['filters'] = isset($data['displays'][$d]['filters']) ?
          $data['displays'][$d]['filters'] : array();
        $data['displays'][$d]['filters'] = array_merge($data['displays'][$d]['filters'], $default_filters);
      }
      else {
        $default_filters = $data['displays'][$d]['filters'];
      }
      
      // An example
      $data['displays'][$d]['examples'] = array(
        'search_filters' => array(
          'title' => t('Search with filters'),
          'data' => ($d == 'default') ?
            $api->base_url . '/views/' . $data['id'] . '.json&filters[:id1]=:value1&filters[:id2]=:value2' :
            $api->base_url . '/views/' . $data['id'] . '.json?display_id=' . $d . '&filters[:id1]=:value1&filters[:id2]=:value2',
          'class' => 'brush:plain',
        ),
      );
      
      // Don't display default for now, unless theres a better way
      // to handle it
      if ($d == 'default') {
        unset($data['displays'][$d]);
      }
    }

    // Attach data
    $api->views_searching[$view->name] = $data;
  }
}

/**
 * Recursive array merge
 */
function ocapi_merge_arrays($arr1, $arr2) {
  if (is_array($arr1) && is_array($arr2)) {
    foreach ($arr2 as $k => $v) {
      if (isset($arr1[$k]) && is_array($v) && is_array($arr1[$k])) {
        $arr1[$k] = ocapi_merge_arrays($arr1[$k], $v);
      }
      else {
        $arr1[$k] = $v;
      }
    }
  }
  return $arr1;
}