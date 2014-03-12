<?php
/**
 * @file
 * Contains admin callbacks for the Field tools taxonomy module.
 */

/**
 * Form builder for the vocabulary apply form.
 *
 * @param $vocabulary
 *  A vocabulary entity object.
 */
function field_tools_taxonomy_apply_form($form, &$form_state, $vocabulary) {
  $form['#vocabulary'] = $vocabulary;
  //dsm($vocabulary);

  $field_name = 'taxonomy_' . $vocabulary->machine_name;
  $field = field_info_field($field_name);
  $field_exists = isset($field);
  //dsm($field);

  $field_type = field_info_field_types('taxonomy_term_reference');
  //dsm($field_type, 'ft');

  // Field settings fieldset.
  $form['settings'] = array(
    '#type' => 'fieldset',
  );
  $form['settings']['multiple'] = array('#type' => 'checkbox',
    '#title' => t('Multiple select'),
    '#description' => t('Allows reference fields to hold more than one term from this vocabulary.'),
  );
  // Lock this if the field exists.
  if ($field_exists) {
    $form['settings']['multiple'] += array(
      '#disabled' => TRUE,
      '#default_value' => ($field['cardinality'] == 1 ? FALSE : TRUE),
    );
    $form['settings']['multiple']['#description'] .= ' ' . t('This setting may not be changed here because this field already has instances.');
  }

  $form['settings']['required'] = array('#type' => 'checkbox',
    '#title' => t('Required'),
    '#description' => t('At least one term in this vocabulary must be selected when submitting data with this field.'),
  );

  module_load_include('inc', 'field_ui', 'field_ui.admin');
  $widget_options = field_ui_widget_type_options('taxonomy_term_reference');
  $form['settings']['widget_type'] = array(
    '#type' => 'select',
    '#title' => t('Widget type'),
    '#required' => TRUE,
    '#options' => $widget_options,
    '#default_value' => $field_type['default_widget'],
    '#description' => t('The type of form element you would like to present to the user when creating this field in the types below.'),
  );

  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {
      $options[$entity_type . ':' . $bundle_type] = $entity_info['label'] . ': ' . $bundle_info['label'];
    }
  }
  //dsm($options);
  $default_bundles = array();
  if ($field_exists) {
    foreach ($field['bundles'] as $entity_type => $bundles) {
      foreach ($bundles as $bundle_type) {
        $default_bundles[] = $entity_type . ':' . $bundle_type;
      }
    }
  }
  $form['bundles'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply this vocabulary's term reference field."),
  );
  // Very neat but undocumented trick: see http://drupal.org/node/1349432
  foreach ($default_bundles as $option_key) {
    $form['bundles'][$option_key] = array(
      '#disabled' => TRUE,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => $field_exists ? t('Add field instances') : t('Create field and instances'),
  );

  return $form;
}

/**
 * Submit handler for the taxonomy apply form.
 */
function field_tools_taxonomy_apply_form_submit($form, &$form_state) {
  //dsm($form_state['values']);
  $vocabulary = $form['#vocabulary'];
  $field_name = 'taxonomy_' . $vocabulary->machine_name;
  $field = field_info_field($field_name);
  $field_exists = isset($field);

  if (!$field_exists) {
    $field = array(
      'field_name' => $field_name,
      'type' => 'taxonomy_term_reference',
      'cardinality' => ($form_state['values']['multiple'] ? FIELD_CARDINALITY_UNLIMITED : 1),
      'settings' => array(
        'allowed_values' => array(
          array(
            'vocabulary' => $vocabulary->machine_name,
            'parent' => 0,
          ),
        ),
      ),
    );
    //dsm($field);
    field_create_field($field);
    drupal_set_message(t('Term reference field %field has been created.', array(
      '%field' => $field_name,
    )));
  }

  foreach (array_filter($form_state['values']['bundles']) as $option_key) {
    list($entity_type, $bundle_type) = explode(':', $option_key);

    if (isset($field['bundles'][$entity_type]) && in_array($bundle_type, $field['bundles'][$entity_type])) {
      // Skip existing instances.
      continue;
    }

    $instance = array(
      'field_name' => $field_name,
      'entity_type' => $entity_type,
      'label' => $vocabulary->name,
      'bundle' => $bundle_type,
      'description' => $vocabulary->description,
      'required' => $form_state['values']['required'],
      'widget' => array(
        'type' => $form_state['values']['widget_type'],
      ),
      'display' => array(
        'default' => array(
          'type' => 'taxonomy_term_reference_link',
        ),
      ),
    );
    //dsm($instance);
    field_create_instance($instance);
  }
}
