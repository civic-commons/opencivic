<?php
/**
 * @file
 * Contains admin callbacks for the Field tools module.
 */

/**
 * Page callback for the field overview list.
 */
function field_tools_field_overview() {
  $output = '';

  $entity_info = entity_get_info();
  $field_types = field_info_field_types();
  $fields = field_info_fields();

  $rows = array();
  foreach ($fields as $field_name => $field) {
    $row = array();
    // Column: field name.
    $row[] = l($field_name, 'admin/reports/fields/field/' . $field_name);
    // Column: field type.
    $row[] = $field_types[$field['type']]['label'];
    // Column: field instances.
    $row[] = field_tools_field_instances_list($field);

    // Column : operations.
    $items_ops = array();
    $items_ops[] = l('edit instances', "admin/reports/fields/field/$field_name/edit");
    $items_ops[] = l('delete instances', "admin/reports/fields/field/$field_name/delete");
    $row[] = theme('item_list', array(
      'items' => $items_ops,
    ));

    $rows[] = $row;
  }

  $header = array(
    t('Field name'),
    t('Type'),
    t('Instances'),
    t('Operations'),
  );

  $output .= theme('table', array(
    'rows' => $rows,
    'header' => $header,
  ));

  drupal_add_css(drupal_get_path('module', 'field_tools') . '/field_tools.css');

  return $output;
}

/**
 * Form to edit all instances of a field.
 */
function field_tools_field_edit_form($form, &$form_state, $field) {
  // Take the first instance in the list as the one to populate the form with.
  $entity_type = array_shift(array_keys($field['bundles']));
  $bundle = $field['bundles'][$entity_type][0];

  $form['warning'] = array(
    '#markup' => t('WARNING: Editing these values will change ALL INSTANCES of this field:')
      . '<br />'
      . field_tools_field_instances_list($field),
  );

  $instance = field_info_instance($entity_type, $field['field_name'], $bundle);

  module_load_include('inc', 'field_ui', 'field_ui.admin');

  // Remainder cribbed from field_ui_field_edit_form().
  $form['#field'] = $field;
  $form['#instance'] = $instance;

  if (!empty($field['locked'])) {
    $form['locked'] = array(
      '#markup' => t('The field %field is locked and cannot be edited.', array('%field' => $instance['label'])),
    );
    return $form;
  }

  $field_type = field_info_field_types($field['type']);
  $widget_type = field_info_widget_types($instance['widget']['type']);
  $bundles = field_info_bundles();

  // Create a form structure for the instance values.
  $form['instance'] = array(
    '#tree' => TRUE,
    '#type' => 'fieldset',
    '#title' => t('%type settings', array('%type' => $bundles[$entity_type][$bundle]['label'])),
    '#description' => t('These settings will be applied the ALL INSTANCES OF THE %field field.', array(
      '%field' => $instance['label'],
      '%type' => $bundles[$entity_type][$bundle]['label'],
    )),
    // Ensure field_ui_field_edit_instance_pre_render() gets called in addition
    // to, not instead of, the #pre_render function(s) needed by all fieldsets.
    '#pre_render' => array_merge(array('field_ui_field_edit_instance_pre_render'), element_info_property('fieldset', '#pre_render', array())),
  );

  // Build the non-configurable instance values.
  $form['instance']['field_name'] = array(
    '#type' => 'value',
    '#value' => $instance['field_name'],
  );
  $form['instance']['entity_type'] = array(
    '#type' => 'value',
    '#value' => $entity_type,
  );
  $form['instance']['bundle'] = array(
    '#type' => 'value',
    '#value' => $bundle,
  );
  $form['instance']['widget']['weight'] = array(
    '#type' => 'value',
    '#value' => !empty($instance['widget']['weight']) ? $instance['widget']['weight'] : 0,
  );

  // Build the configurable instance values.
  $form['instance']['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Label'),
    '#default_value' => !empty($instance['label']) ? $instance['label'] : $field['field_name'],
    '#required' => TRUE,
    '#weight' => -20,
  );
  $form['instance']['required'] = array(
    '#type' => 'checkbox',
    '#title' => t('Required field'),
    '#default_value' => !empty($instance['required']),
    '#weight' => -10,
  );

  $form['instance']['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Help text'),
    '#default_value' => !empty($instance['description']) ? $instance['description'] : '',
    '#rows' => 5,
    '#description' => t('Instructions to present to the user below this field on the editing form.<br />Allowed HTML tags: @tags', array('@tags' => _field_filter_xss_display_allowed_tags())),
    '#weight' => -5,
  );

  // Build the widget component of the instance.
  $form['instance']['widget']['type'] = array(
    '#type' => 'value',
    '#value' => $instance['widget']['type'],
  );
  $form['instance']['widget']['module'] = array(
    '#type' => 'value',
    '#value' => $widget_type['module'],
  );
  $form['instance']['widget']['active'] = array(
    '#type' => 'value',
    '#value' => !empty($field['instance']['widget']['active']) ? 1 : 0,
  );

  // Add additional field instance settings from the field module.
  $additions = module_invoke($field['module'], 'field_instance_settings_form', $field, $instance);
  if (is_array($additions)) {
    $form['instance']['settings'] = $additions;
  }

  // Add additional widget settings from the widget module.
  $additions = module_invoke($widget_type['module'], 'field_widget_settings_form', $field, $instance);
  if (is_array($additions)) {
    $form['instance']['widget']['settings'] = $additions;
    $form['instance']['widget']['active']['#value'] = 1;
  }

  // Add handling for default value if not provided by any other module.
  if (field_behaviors_widget('default value', $instance) == FIELD_BEHAVIOR_DEFAULT && empty($instance['default_value_function'])) {
    $form['instance']['default_value_widget'] = field_ui_default_value_widget($field, $instance, $form, $form_state);
  }

  // End crib.

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array('#type' => 'submit', '#value' => t('Save settings'));

  return $form;
}

/**
 *
 *
 * @see field_ui_field_edit_form_validate()
 */
function field_tools_field_edit_form_validate($form, &$form_state) {
  field_ui_field_edit_form_validate($form, $form_state);
}

/**
 *
 *
 * @see field_ui_field_edit_form_submit()
 */
function field_tools_field_edit_form_submit($form, &$form_state) {
  $instance = $form_state['values']['instance'];
  $field = $form['#field'];

  // Handle the default value.
  if (isset($form['instance']['default_value_widget'])) {
    $element = $form['instance']['default_value_widget'];

    // Extract field values.
    $items = array();
    field_default_extract_form_values(NULL, NULL, $field, $instance, LANGUAGE_NONE, $items, $element, $form_state);
    field_default_submit(NULL, NULL, $field, $instance, LANGUAGE_NONE, $items, $element, $form_state);

    $instance['default_value'] = $items ? $items : NULL;
  }

  foreach ($field['bundles'] as $entity_type => $bundles) {
    foreach ($bundles as $bundle) {
      // Fake the entity type and bundle into the instance data to save.
      $instance['entity_type'] = $entity_type;
      $instance['bundle'] = $bundle;

      $instance_source = field_read_instance($entity_type, $field['field_name'], $bundle);
      $instance = array_merge($instance_source, $instance);
      field_update_instance($instance);
      drupal_set_message(t('Saved %label instance on entity %entity, bundle %bundle', array(
        '%label' => $instance['label'],
        // TODO: labels.
        '%entity' => $entity_type,
        '%bundle' => $bundle,
      )));
    }
  }
}

/**
 * Form for deleting multiple instances of a field.
 */
function field_tools_field_delete_form($form, &$form_state, $field) {
  drupal_set_title(t('Delete instances from field %fieldname', array(
    '%fieldname' => $field['field_name'],
  )), PASS_THROUGH);

  $form['info'] = array(
    '#markup' => $field['field_name'],
  );

  $entity_info = entity_get_info();

  $options = array();
  foreach ($field['bundles'] as $entity_type => $bundles) {
    foreach ($bundles as $bundle) {
      $options["$entity_type:$bundle"] = $entity_info[$entity_type]['label'] . ': ' . $entity_info[$entity_type]['bundles'][$bundle]['label'];
    }
  }

  $form['instances'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Instances to delete'),
    '#description' => t("WARNING: deleting an instance will delete ALL THE DATA in that instance."),
    '#options' => $options,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Delete field instances'),
  );

  // @todo: use confirm_form()!
  return $form;
}

/**
 * Submit handler for deleting multiple instances.
 */
function field_tools_field_delete_form_submit($form, &$form_state) {
  $field = $form_state['build_info']['args'][0];
  foreach (array_filter($form_state['values']['instances']) as $instance_key) {
    list($entity_type, $bundle_name) = explode(':', $instance_key);
    $instance = field_info_instance($entity_type, $field['field_name'], $bundle_name);
    field_delete_instance($instance);
    drupal_set_message(t('Deleted instance of %fieldname from %entity bundle %bundle', array(
      '%fieldname' => $field['field_name'],
      '%entity' => $entity_type,
      '%bundle' => $bundle_name,
    )));
  }
}

/**
 * Form builder for the cloning multiple fields from a bundle.
 *
 * @param $entity_type
 *  The machine name of the entity.
 * @param $bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_from_form($form, &$form_state, $entity_type, $bundle_name) {
  // Get the bundle name if the bundle name is really a bundle object.
  $bundle_name = field_extract_bundle($entity_type, $bundle_name);

  $field_instances = field_info_instances($entity_type, $bundle_name);
  //dsm($field_instances);

  $options_fields = array();
  foreach ($field_instances as $field_name => $field) {
    $options_fields[$field_name] = $field['label'];
  }

  $form['fields'] = array(
    '#title' => t('Fields to clone'),
    '#type' => 'checkboxes',
    '#options' => $options_fields,
    '#description' => t("Select fields to clone onto one or more bundles."),
  );

  $form['bundles'] = array(
    '#title' => t('Bundle(s) to clone onto'),
    '#type' => 'checkboxes',
    '#options' => field_tools_options_entity_bundle($entity_type, $bundle_name),
    //'#default_value' => $default_bundles,
    '#description' => t("Select bundles on which to apply the selected fields."),
  );
  // Disable the checkbox for the current bundle.
  $form['bundles']["$entity_type:$bundle_name"] = array(
    '#disabled' => TRUE,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the mass clone form.
 */
function field_tools_bundle_fields_clone_from_form_submit($form, &$form_state) {
  // Get details from the original form builder parameters.
  list($source_entity_type, $source_bundle_name) = $form_state['build_info']['args'];
  // Get the bundle name if the bundle name is really a bundle object.
  $source_bundle_name = field_extract_bundle($source_entity_type, $source_bundle_name);

  // Get names of fields to clone.
  $field_names = array_filter($form_state['values']['fields']);

  foreach ($field_names as $field_name) {
    $field = field_info_field($field_name);
    $instance = field_info_instance($source_entity_type, $field_name, $source_bundle_name);

    $new_instances = array();
    foreach (array_filter($form_state['values']['bundles']) as $option_key) {
      list($entity_type, $bundle_type) = explode(':', $option_key);
      $new_instances[$entity_type][] = $bundle_type;
    }
    if (!empty($new_instances)) {
      _field_tools_add_instance_to_bundles($instance, $new_instances);
    }
  }
}

/**
 * Form builder for the field clone page.
 *
 * @param $instance
 *  A FieldAPI field instance definition array.
 */
function field_tools_field_clone_form($form, &$form_state, $instance) {
  //dsm($instance);
  $form['#instance'] = $instance;

  $field_name = $instance['field_name'];

  // TODO: is there a way to turn most of what follows into a form element?
  $field = field_info_field($field_name);
  $field_exists = isset($field);
  $field_type = field_info_field_types('taxonomy_term_reference');

  // Field settings fieldset.
  // @todo restore this when we add a field apply-type UI.
  /*
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
  $widget_options = field_ui_widget_type_options($field['type']);
  $form['settings']['widget_type'] = array(
    '#type' => 'select',
    '#title' => t('Widget type'),
    '#required' => TRUE,
    '#options' => $widget_options,
    '#default_value' => $field_type['default_widget'],
    '#description' => t('The type of form element you would like to present to the user when creating this field in the types below.'),
  );
  */

  $options = field_tools_options_entity_bundle($instance['entity_type'], $instance['bundle'], FALSE);

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
    '#description' => t("Select bundles on which to apply this field."),
  );
  // Very neat but undocumented trick: see http://drupal.org/node/1349432
  foreach ($default_bundles as $option_key) {
    $form['bundles'][$option_key] = array(
      '#disabled' => TRUE,
    );
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Add field instances'),
  );

  return $form;
}

/**
 * Submit handler for the field clone form.
 */
function field_tools_field_clone_form_submit($form, &$form_state) {
  $instance = $form['#instance'];
  $field_name = $instance['field_name'];
  $field = field_info_field($field_name);

  $new_instances = array();
  foreach (array_filter($form_state['values']['bundles']) as $option_key) {
    list($entity_type, $bundle_type) = explode(':', $option_key);
    $new_instances[$entity_type][] = $bundle_type;
  }
  if (!empty($new_instances)) {
    _field_tools_add_instance_to_bundles($instance, $new_instances);
  }
}

/**
 * Helper to get FormAPI options for entity bundles.
 *
 * @param string $current_entity_type
 *   The current entity type that these options will be used with.
 * @param string $current_bundle
 *   The current bundle name that these options will be used with.
 * @param boolean $filter
 *  Whether to filter out the current bundle.
 *
 * @return
 *  An array for FormAPI '#options' properties, with:
 *    - keys of the form ENTITY:BUNDLE, using machine names.
 *    - values of the form ENTITY: BUNDLE, using labels.
 */
function field_tools_options_entity_bundle($current_entity_type, $current_bundle, $filter = TRUE) {
  $options = array();
  foreach (entity_get_info() as $entity_type => $entity_info) {
    foreach ($entity_info['bundles'] as $bundle_type => $bundle_info) {
      // Don't show the current bundle in the options, unless not filtering.
      if (!$filter || !($current_entity_type == $entity_type && $bundle_type == $current_bundle)) {
        $options[$entity_type . ':' . $bundle_type] = $entity_info['label'] . ': ' . $bundle_info['label'];
      }
    }
  }
  return $options;
}

/**
 * Form builder for the cloning multiple fields to a bundle.
 *
 * @param $current_entity_type
 *  The machine name of the entity.
 * @param $current_bundle_name
 *  The machine name of the bundle, or a bundle object if the particular
 *  entity type has a menu loader for bundles.
 */
function field_tools_bundle_fields_clone_to_form($form, &$form_state, $current_entity_type, $current_bundle_name) {
  $current_bundle_name = field_extract_bundle($current_entity_type, $current_bundle_name);
  $all_instances = field_info_instances();

  $entity_types = entity_get_info();
  $form['entity_type'] = array(
    '#value' => $current_entity_type,
    '#type'  => 'value',
  );
  $form['bundle'] = array(
    '#value' => $current_bundle_name,
    '#type'  => 'value',
  );
  foreach ($entity_types as $entity_key => $entity_type) {
    if ($entity_type['fieldable'] == TRUE) {
      if (!empty($entity_type['bundles'])) {
        // This entity_type has bundles.
        $form['fields'][$entity_key] = array(
          '#type' => 'fieldset',
          '#title' => $entity_type['label'],
          '#description' => '',
          '#tree' => TRUE,
          '#collapsible' => TRUE,
          '#collapsed' => TRUE,
        );
        foreach ($entity_type['bundles'] as $bundle_name => $bundle) {
          if ($current_entity_type == $entity_key && $bundle_name == $current_bundle_name) {
            continue;
          }
          if (empty($all_instances[$entity_key][$bundle_name])) {
            // No fields on this bundle.
            continue;
          }
          $form['fields'][$entity_key][$bundle_name . '_set'] = array(
            '#type' => 'fieldset',
            '#title' => $bundle['label'],
            '#description' => '',
            '#collapsible' => TRUE,
            '#collapsed' => TRUE,
          );
          $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name] = array(
            '#type' => 'checkboxes',
            '#title' => $bundle['label'],
            '#description' => '',
            '#options' => array(),
          );

          foreach ($all_instances[$entity_key][$bundle_name] as $field_name => $field_info) {
            // Make sure this field doesn't already exist on the current bundle.
            $on_current_bundle = is_array($all_instances[$current_entity_type][$current_bundle_name]) && array_key_exists($field_name, $all_instances[$current_entity_type][$current_bundle_name]);
            if (!$on_current_bundle && _field_tools_entity_can_attach_field($current_entity_type, field_info_field($field_name))) {
              $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'][$field_name] = $field_info['label'] . " ({$field_name})";
            }
          }
          if (empty($form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#options'])) {
            // @todo should we not show a bundle if no fields can be attached??
            $form['fields'][$entity_key][$bundle_name . '_set'][$bundle_name]['#description'] = t('Contains no fields that can be attached to this bundle.');
          }
        }
        // Set #parents to skip sets in form values.
        foreach (element_children($form['fields'][$entity_key]) as $key) {
          if (strrpos($key, '_set') === drupal_strlen($key) - drupal_strlen('_set')) {
            foreach (element_children($form['fields'][$entity_key][$key]) as $sub_key ) {
              $form['fields'][$entity_key][$key][$sub_key]['#parents'] = array('fields', $entity_key, $sub_key);
            }
          }
        }
        $bundle_names = element_children($form['fields'][$entity_key]);
        if (empty($bundle_names)) {
          // Don't show entities that have no bundle with fields.
          unset($form['fields'][$entity_key]);
        }
      }
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Add field instances',
  );
  return $form;
}

/**
 * Validation for cloning multiple fields into one bundle.
 *
 * Make sure no field was selected more than once.
 */
function field_tools_bundle_fields_clone_to_form_validate($form, &$form_state) {
  $selected_fields = array();
  $fields = $form_state['values']['fields'];
  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      $matching_fields = array_intersect_key($selected_fields, $bundle_fields);
      if (!empty($matching_fields)) {
        $match_key = array_shift($matching_fields);
        form_error($form['fields'][$entity_type][$bundle_name . '_set'], t("You have selected the field %field more that once.", array(
          '%field' => $match_key,
        )));
        return;
      }
      $selected_fields += $bundle_fields;
    }
  }
}

/**
 * Submit handler for the mass clone to bundle form.
 */
function field_tools_bundle_fields_clone_to_form_submit($form, &$form_state) {
  $fields = $form_state['values']['fields'];
  $current_entity_type = $form_state['values']['entity_type'];
  $current_bundle_name = $form_state['values']['bundle'];

  foreach ($fields as $entity_type => $bundles) {
    foreach ($bundles as $bundle_name => $bundle_fields) {
      $bundle_fields = array_filter($bundle_fields);
      foreach ($bundle_fields as $field_name) {
        $field_info = field_info_instance($entity_type, $field_name, $bundle_name);
        _field_tools_add_instance_to_bundles($field_info, array($current_entity_type => array($current_bundle_name)));
      }
    }
  }
}

/**
 * Helper function to clone a single field instance into multiple bundles.
 *
 * @param array $instance
 *   The field instance to be added to the bundles.
 * @param array $new_instances
 *   An array describing entity bundles on which to create field instances.
 *   Each key is an entity type machine name, each value is an array of bundle
 *   machine names of that entity.
 */
function _field_tools_add_instance_to_bundles($instance, $new_instances) {
  $original_display = $instance['display'];
  $field_info = field_info_field($instance['field_name']);
  $entity_types = entity_get_info();
  foreach ($new_instances as $entity_type => $bundles) {
    $bundles = array_filter($bundles);
    if (!empty($bundles)) {
      if (!_field_tools_entity_can_attach_field($entity_type, $field_info)) {
        drupal_set_message(t('Field %field_label cannot be attached to entity type %entity_type', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
        )));
        continue;
      }

      $instance = array_diff_key($instance, array_flip(array('id', 'field_id', 'bundle', 'entity_type', 'deleted')));
      // Only bring back displays that have matching "view mode" in this entity type.
      $instance['display'] = array_intersect_key($original_display, $entity_types[$entity_type]['view modes']);
      if (empty($instance['display'])) {
        //@todo should there be logic to handle to no matching 'view modes'
      }
      $instance['entity_type'] = $entity_type;
      foreach ($bundles as $bundle) {
        if (_field_tools_field_already_attached($entity_type, $bundle, $field_info)) {
          drupal_set_message(t('Field %field_label is already attached to %entity_type - %bundle', array(
            '%field_label' => $instance['label'],
            '%entity_type' => $entity_types[$entity_type]['label'],
            '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
          )));
          continue;
        }
        $instance['bundle'] = $bundle;
        field_create_instance($instance);
        drupal_set_message(t('Attached field %field_label to %entity_type - %bundle', array(
          '%field_label' => $instance['label'],
          '%entity_type' => $entity_types[$entity_type]['label'],
          '%bundle' => $entity_types[$entity_type]['bundles'][$bundle]['label'],
        )));
      }
    }
  }
}

/**
 * Page callback to list all instances of a field with links to edit them.
 */
function field_tools_field_page($field_name) {
  $field = field_info_field($field_name);
  if (!$field) {
    return t('No field found.');
  }
  //dsm($field);
  $field_instance_list = field_tools_info_instances($field_name);
  $bundles = field_info_bundles();

  $items = array();
  foreach ($field_instance_list as $entity_type => $bundle_list) {
    foreach ($bundle_list as $bundle) {
      $admin_path = _field_ui_bundle_admin_path($entity_type, $bundle);

      $items[] = l($bundles[$entity_type][$bundle]['label'], $admin_path . '/fields/' . $field_name);
    }
  }


  return theme('item_list', array('items' => $items));
}

/**
 * Helper to format a nested list of field instances, grouped by entity type.
 *
 * @todo: make this a theme function?
 *
 * @param $field
 *  A field definition array.
 *
 * @return
 *  A nested list of entities and bundles that this field has instances on.
 */
function field_tools_field_instances_list($field) {
  $entity_info = entity_get_info();
  $items_entities = array();
  foreach ($field['bundles'] as $entity_type => $field_bundle_names) {
    $items_bundles = array();
    foreach ($field_bundle_names as $bundle) {
      // @todo: sort these.
      $admin_path = _field_ui_bundle_admin_path($entity_type, $bundle);
      $label = $entity_info[$entity_type]['bundles'][$bundle]['label'];
      $items_bundles[] = $admin_path ? l($label, $admin_path . '/fields/' . $field['field_name']) : $label;
    }

    $items_entities[] = $entity_info[$entity_type]['label'] . theme('item_list', array(
      'items' => $items_bundles,
    ));
  }
  return theme('item_list', array(
    'items' => $items_entities,
  ));
}
