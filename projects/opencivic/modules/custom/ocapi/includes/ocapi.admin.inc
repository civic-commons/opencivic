<?php
/**
 * @file
 * Admin settings for OpenCivic API.
 */

/**
 * Page callback for admin settings.
 */
function ocapi_admin_settings($form, &$form_state) {
  $form = array();
  
  // Get node types
  $node_types = node_type_get_types();
  $options = array();
  $defaults = array('application', 'interaction', 'organization');
  foreach ($node_types as $type_id => $node_type) {
    $options[$type_id] = $node_type->name;
  }
  
  // Create form
  $form['ocapi_doc_page_title'] = array(
    '#type' => 'textfield',
    '#title' => t('API Documentation Page Title'),
    '#default_value' => variable_get('ocapi_doc_page_title', t('OpenCivic API')),
    '#description' => t('The title of the page of the documentation.'),
  );
  $form['ocapi_doc_page_path'] = array(
    '#type' => 'textfield',
    '#title' => t('API Documentation Path'),
    '#default_value' => variable_get('ocapi_doc_page_path', 'api'),
    '#description' => t('The path to the API documentation.  This should be a Drupal path, which means to trailing or leading slashes, something like <em>developers</em> or <em>example/api</em>.  If you change this you will have to <strong>Clear the menu cache</strong>.'),
  );
  $form['ocapi_doc_page_examples_path'] = array(
    '#type' => 'textfield',
    '#title' => t('API Examples Path'),
    '#default_value' => variable_get('ocapi_doc_page_examples_path', 'api/examples'),
    '#description' => t('The path to an Examples page.  This will be linked to from the API documentation page if configured.'),
  );
  $form['ocapi_doc_page_data_model_content_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('API Documentation Page Content Types'),
    '#options' => $options,
    '#default_value' => variable_get('ocapi_doc_page_data_model_content_types', $defaults),
    '#description' => t('Determine which content types will show up on the API page.  This does not affect the API access, just what the user sees in the documentation section.  Leaving all of them blank will default to showing all content types.'),
  );
  
  // Create form
  $form['ocapi_doc_page_views_tag'] = array(
    '#type' => 'textfield',
    '#title' => t('API Documentation Page Views Tag'),
    '#default_value' => variable_get('ocapi_doc_page_views_tag', 'api'),
    '#description' => t('Setting a tag here will limit the documentation to show only Views with those tags.  Leaving blank will show documentation for all Views.  Again, this will not actually limit the access of any data.'),
  );
  
  return system_settings_form($form);
}