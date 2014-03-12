<?php
/**
 * @file
 * Entity Fields Builder module.
 *
 * This module takes schema class definitions from schema.org and
 * uses them to define Drupal content types and other entities.
 */

/**
 * Configuration settings for the module.
 */
function efb_admin_settings() {
  require_once DRUPAL_ROOT . '/modules/field_ui/field_ui.admin.inc';
  // Build the sortable table header.
  $fields_options = array(
    'Default' => array(
      'type' => 'text',
    ),
    'URL' => array(
      'type' => 'link_field',
    ),
    'Text' => array(
      'type' => 'text_long',
    ),
    'Number' => array(
      'type' => 'number_decimal',
    ),
    'Integer' => array(
      'type' => 'number_integer',
    ),
    'Date' => array(
      'type' => 'date',
    ),
    'Boolean' => array(
      'type' => 'list_boolean',
    ),
    'Schema classes' => array(
      'type' => 'entityreference',
    ),
  );
  $options = array();
  $field_type_options = field_ui_field_type_options();
  $form['mappings'] = array(
    '#type' => 'item',
    '#title' => t('Property to field mappings'),
    '#description' => t('Specify which Drupal field type should be created for each schema property type listed below'),
  );

  foreach ($fields_options as $name => $properties) {
    $form['types'][strtolower($name)] = array(
      '#markup' => $name,
    );
    $form['selects']['efb_select_' . strtolower($name)] = array(
      '#type' => 'select',
      '#title' => t('Field type'),
      '#title_display' => 'invisible',
      '#options' => $field_type_options,
      '#empty_option' => t('- Select a field type -'),
      '#default_value' => variable_get('efb_select_' . strtolower($name), $properties['type']),
      '#attributes' => array('class' => array('field-type-select')),
    );
  }
  $form['efb_use_existing_fields'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('efb_use_existing_fields', 1),
    '#title' => t('Use existing fields'),
    '#description' => t('When creating new fields based on schema templates, do you want to use existing field instances from your website if they have a machine name that matches the name of a property in your schema?'),
  );
  $form['efb_create_content_types'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('efb_create_content_types', 0),
    '#title' => t('Create referenced content types'),
    '#description' => t("Automatically create new Drupal content types when creating entity references to schema classes that don't yet have one."),
  );
  $form['efb_create_vocabularies'] = array(
    '#type' => 'checkbox',
    '#default_value' => variable_get('efb_create_vocabularies', 0),
    '#title' => t('Create referenced vocabularies'),
    '#description' => t("Automatically create new Drupal vocabularies when creating term references to schema classes that don't yet have one."),
  );

  $form['#theme'] = 'efb_admin_settings';
  return system_settings_form($form);
}

/**
 * Returns HTML for the administer configuration page.
 *
 * @param Array $variables
 *   An associative array containing:
 *   - form: A render element representing the form.
 *
 * @ingroup themeable
 */
function theme_efb_admin_settings($variables) {
  $form = $variables['form'];
  $output = drupal_render($form['mappings']);
  $header = array(
    'name' => t('Schema property type'),
    'type' => t('Drupal field type'),
  );

  $rows = array();
  foreach (element_children($form['types']) as $key) {
    $rows[] = array(
      drupal_render($form['types'][$key]),
      drupal_render($form['selects']['efb_select_' . $key]),
    );
  }
  $output .= theme('table', array('header' => $header, 'rows' => $rows));
  $output .= drupal_render_children($form);
  return $output;
}
