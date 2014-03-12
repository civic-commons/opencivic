<?php

/**
 * @file
 * Syntax highlighter module admin form
 *
 * Define the admin form
 */

/**
 * An admin form to specify which language to support for highlighting
 */
function syntaxhighlighter_settings_form() {
// delete the variable to force a re-scan of library location just in case
  variable_del('syntaxhighlighter_lib_location');
  $path = _syntaxhighlighter_get_lib_location();
  if (!$path) {
    drupal_set_message(t('The syntaxhighlighter javascript library is not found. Consult <a href="!readme">README.txt</a> for help on how to install it, then <a href="!reload">reload</a> this page.',
                         array('!readme' => '/' . drupal_get_path('module', 'syntaxhighlighter') . '/README.txt',
                               '!reload' => 'admin/config/content/syntaxhighlighter')),
                         'error');
    return array();
  }

  $autoloader_available = file_exists($path . '/scripts/shAutoloader.js');

  $files = file_scan_directory($path . '/scripts', '/shBrush.*\.js/');
  foreach ($files as $file) {
    $lang_options[$file->filename] = substr($file->name, 7);
  }
  ksort($lang_options);
  $form['syntaxhighlighter_enabled_languages'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled languages'),
    '#options' => $lang_options,
    '#default_value' => variable_get('syntaxhighlighter_enabled_languages', array('shBrushPhp.js')),
    '#description' => t('Only the selected languages will be enabled and its corresponding required Javascript brush files loaded.') . ($autoloader_available ? ' ' . t('If you enable "Use autoloader" below, then the brushes are dynamically loaded on demand.') : ''),
    '#multicolumn' => array('width' => 3),
    '#checkall' => TRUE,
  );

  if ($autoloader_available) {
    $form['syntaxhighlighter_use_autoloader'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use autoloader'),
      '#default_value' => variable_get('syntaxhighlighter_use_autoloader', FALSE),
      '#attached' => array(
        'js' => array(
          array(
            'type' => 'file',
            'data' => drupal_get_path('module', 'syntaxhighlighter') . '/check_all_languages.js',
          ),
        ),
      ),
    );
  }
  else {
    variable_set('syntaxhighlighter_use_autoloader', FALSE);
    $form['syntaxhighlighter_use_autoloader'] = array(
      '#type' => 'checkbox',
      '#title' => t('Use autoloader'),
      '#default_value' => FALSE,
      '#attributes' => array('disabled' => 'disabled'),
      '#description' => t('Autoloader is not available, update to the latest version of the Syntaxhighlighter javascript library to get this functionality.'),
    );
  }

  $files = file_scan_directory($path . '/styles', '/shTheme.*\.css/', array('nomask' => '/(\.\.?|CVS|shThemeDefault.css)$/'));
  foreach ($files as $file) {
    $theme_options[$file->filename] = substr($file->name, 7);
  }
  ksort($theme_options);
  $theme_options = array_merge(array('shThemeDefault.css' => 'Default'), $theme_options);
  $form['syntaxhighlighter_theme'] = array(
    '#type' => 'radios',
    '#title' => t('Theme'),
    '#description' => t('Choose a syntax highlight theme.'),
    '#options' => $theme_options,
    '#default_value' => variable_get('syntaxhighlighter_theme', 'shThemeDefault.css'),
    '#multicolumn' => array('width' => 2),
  );

  $form['syntaxhighlighter_tagname'] = array(
    '#type' => 'textfield',
    '#title' => t('Tag name'),
    '#required' => TRUE,
    '#description' => t('Use different tag to markup code.'),
    '#default_value' => variable_get('syntaxhighlighter_tagname', 'pre'),
    '#size' => 10,
  );
  $form['syntaxhighlighter_legacy_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Legacy mode'),
    '#description' => t('Enable pre-2.0 style markup support.'),
    '#options' => array(t('Disabled'), t('Enabled')),
    '#default_value' => variable_get('syntaxhighlighter_legacy_mode', 0),
  );

  $form['inject_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Syntaxhighlighter js/css code inject settings'),
  );
  $has_php_access = user_access(SYNTAXHIGHLIGHTER_PHP_PERMISSION);
  if ((!$has_php_access || !function_exists('php_eval')) && variable_get('syntaxhighlighter_inject', SYNTAXHIGHLIGHTER_INJECT_EXCEPT_LISTED) == SYNTAXHIGHLIGHTER_INJECT_PHP) {
    $form['syntaxhighlighter_inject'] = array(
      '#type' => 'value',
      '#value' => SYNTAXHIGHLIGHTER_INJECT_PHP,
    );
    $form['syntaxhighlighter_pages'] = array(
      '#type' => 'value',
      '#value' => variable_get('syntaxhighlighter_pages', "admin\nadmin/*\nuser\nuser/*\nimce\nimce/*\n"),
    );
    if (!$has_php_access) {
      $permission = syntaxhighlighter_permission();
      $messages[] = t('You do not have the "%permission" permission to change these settings.', array('%permission' => $permission[SYNTAXHIGHLIGHTER_PHP_PERMISSION]['title']));
    }
    if (!function_exists('php_eval')) {
        $messages[] = t('The "%module_name" module is disabled, re-enable the module to change these settings. Because the "%module_name" module is disabled, syntax highlighting is effectively disabled on every page.', array('%module_name' => t('PHP filter')));
    }
    $items = array(
      'items' => $messages,
      'type' => 'ul',
      'attributes' => array('class' => array('messages', 'warning')),
    );
    $form['inject_settings']['messages'] = array(
      '#type' => 'markup',
      '#markup' => theme('item_list', $items),
    );
  }
  else {
    $options = array(SYNTAXHIGHLIGHTER_INJECT_EXCEPT_LISTED => t('Inject on all pages except those listed'),
                     SYNTAXHIGHLIGHTER_INJECT_IF_LISTED => t('Inject on only the listed pages'));
    $description = t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>'));

    $title = t('Pages');
    if ($has_php_access && function_exists('php_eval')) {
      $options[SYNTAXHIGHLIGHTER_INJECT_PHP] = t('Inject if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only)');
      $description .= ' ' . t('If the PHP-mode is chosen, enter PHP code between %php. Note that executing incorrect PHP-code can break your Drupal site.', array('%php' => '<?php ?>'));
      $title = t('Pages or PHP code');
    }
    else {
    // show some friendly info message if PHP is not available because...
    if (!$has_php_access && !function_exists('php_eval')) {
        $permission = syntaxhighlighter_permission();
        $php_info_message = t('You need to have the "%permission" permission and enable the "%module_name" module to use PHP code here.',
                              array('%permission' => $permission[SYNTAXHIGHLIGHTER_PHP_PERMISSION]['title'], '%module_name' => t('PHP filter')));
    }
    elseif (!$has_php_access) {
        $permission = syntaxhighlighter_permission();
        $php_info_message = t('You need to have the "%permission" permission to use PHP code here.',
                              array('%permission' => $permission[SYNTAXHIGHLIGHTER_PHP_PERMISSION]['title']));
    }
    elseif (!function_exists('php_eval')) {
        $php_info_message = t('Enable the "%module_name" module to use PHP code here.', array('%module_name' => t('PHP filter')));
    }
    }

    $form['inject_settings']['syntaxhighlighter_inject'] = array(
      '#type' => 'radios',
      '#title' => t('Inject js/css code on specific pages'),
      '#options' => $options,
      '#default_value' => variable_get('syntaxhighlighter_inject', SYNTAXHIGHLIGHTER_INJECT_EXCEPT_LISTED),
    );
    if (isset($php_info_message)) {
    $form['inject_settings']['syntaxhighlighter_inject']['#description'] = $php_info_message;
    }
    $form['inject_settings']['syntaxhighlighter_pages'] = array(
      '#type' => 'textarea',
      '#title' => '<span class="element-invisible">' . $title . '</span>',
      '#default_value' => variable_get('syntaxhighlighter_pages', "admin\nadmin/*\nuser\nuser/*\nimce\nimce/*\n"),
      '#description' => $description,
    );
  }
  
  $form['syntaxhighlighter_default_expressions'] = array(
    '#type' => 'textarea',
    '#title' => t('Default expressions'),
    '#default_value' => variable_get('syntaxhighlighter_default_expressions', ''),
    '#description' => t('Enter syntaxhihglighter default settings javascript expressions, e.g. !example. To turn off clipboardSwf, use !swfoff. See the <a href="!link">syntaxhighlighter js lib doc page</a> for details. Note: these default settings affect the entire site unless they are overridden locally.',
                         array('!example' => '<code>SyntaxHighlighter.defaults[\'auto-links\'] = true;SyntaxHighlighter.defaults[\'gutter\'] = false;</code>',
                               '!swfoff' => '<code>SyntaxHighlighter.config.clipboardSwf = undefined;</code>',
                               '!link' => 'http://alexgorbatchev.com/SyntaxHighlighter/',
                         )),
  );

  $form = system_settings_form($form);
  $form['#submit'][] = '_syntaxhighlighter_setup_autoloader_script';
  return $form;
}
