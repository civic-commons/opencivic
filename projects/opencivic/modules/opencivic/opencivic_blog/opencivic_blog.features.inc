<?php
/**
 * @file
 * opencivic_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function opencivic_blog_node_info() {
  $items = array(
    'oc_blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('A blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function opencivic_blog_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: blog
  $schemaorg['node']['blog'] = array(
    'rdftype' => array(
      0 => 'schema:BlogPosting',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:text',
        1 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_image' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
    ),
    'field_oc_blog_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
    ),
    'title_field' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}

/**
 * Implements hook_views_api().
 */
function opencivic_blog_views_api() {
  return array(
    'api' => '3.0',
  );
}
