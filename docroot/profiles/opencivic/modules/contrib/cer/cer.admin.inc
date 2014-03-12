<?php
/**
 * @file
 * Admin functionality, separated for performance purposes.
 */

/**
 * The settings form.
 */
function cer_settings_form() {
  $form['intro'] = array('#markup' => t('Check which entity references should listen to each other. When checking a check box a reference on entity type A to entity B will automatically update the entity reference field on entity B adding an entry which points to entity A.'));

  $result = db_query("SELECT field_name, data FROM {field_config} WHERE type = :type AND deleted = 0", array(':type' => 'entityreference'));
  foreach ($result as $row) {
    $data = unserialize($row->data);
    if(empty($data['settings']['handler_settings']['target_bundles'])){
      	$references[$row->field_name][] = $data['settings']['target_type'];
    }
    if(isset($data['settings']['handler_settings']['target_bundles'])){
      foreach ($data['settings']['handler_settings']['target_bundles'] as $reference) {
        if ($reference != '0') {
          $references[$row->field_name][] = $reference;
        }
      }
    }
  }

  $result = db_query("SELECT fci.field_name, fci.entity_type, fci.bundle FROM {field_config_instance} fci INNER JOIN {field_config} fc ON fc.field_name = fci.field_name WHERE fc.type = :type", array(':type' => 'entityreference'));

  foreach ($result as $row) {

    if (!empty($references[$row->field_name])) {
      foreach ($references[$row->field_name] as $reference) {
          $fields_to_compare[] = array('field_type' => $row->field_name, 'bundle' => $row->bundle, 'reference' => $reference, 'entity' => $row->entity_type);
      }
    }
  }

  if (!empty($fields_to_compare)) {
    $corr_entityrefs = array();
    foreach ($fields_to_compare as $field) {
      foreach ($fields_to_compare as $second_field) {
        if ($field['bundle'] == $second_field['reference'] && $second_field['bundle'] == $field['reference']) {
          if (!array_key_exists($field['entity'] . ' ' . $field['bundle'] . ' ' . $field['field_type'] . ' ' .
                         $second_field['entity'] . ' ' . $second_field['bundle'] . ' ' . $second_field['field_type'], $corr_entityrefs)
           && !array_key_exists($second_field['entity'] . ' ' . $second_field['bundle'] . ' ' . $second_field['field_type'] . ' ' . $field['entity'] . ' ' . $field['bundle'] . ' ' . $field['field_type'], $corr_entityrefs)) {
            $corr_entityrefs[$field['entity'] . ' ' . $field['bundle'] . ' ' . $field['field_type'] . ' ' .
                      $second_field['entity'] . ' ' . $second_field['bundle'] . ' ' . $second_field['field_type']] = array('entity_1' => $field['entity'], 'bundle_1' => $field['bundle'], 'field_1' => $field['field_type'], 'entity_2' => $second_field['entity'], 'bundle_2' => $second_field['bundle'], 'field_2' => $second_field['field_type']);
          }
        }
      }
    }

    if (!empty($corr_entityrefs)) {
      $count = 0;

      foreach ($corr_entityrefs as $key => $corr_entityref) {
        $formatted_label = cer_format_label($key);
        $formatted_key = str_replace(' ', '*', $key);

        $mapping[] = $formatted_key;
        $form['values'][$count] = array(
          '#type' => 'fieldset',
        );
        $form['values'][$count]['enabled_' . $count] = array(
          '#type' => 'checkbox',
          '#default_value' => cer_preset_enabled($formatted_key),
          '#title' => $formatted_label,
        );
        $count++;
      }

      //We are using a hidden field to submit the configuration because on some systems the checkbox name length is limited
      //, using the key would cause the length to be too long see issue #558612
      $form['mapping'] = array(
        '#type' => 'hidden',
        '#value' => serialize($mapping),
      );
      $form['submit'] = array('#type' => 'submit', '#value' => t('Save'));
    }
  }
  else {
    $form['text'] = array('#markup' => '<div>' . t('There are no entity types which have a corresponding entity reference') . '</div>');
  }


  return $form;
}

/**
 * Submit function for settings form.
 */
function cer_settings_form_submit($form, $form_values) {
  ctools_include('export');
  $query_values = array();

  $mapping = unserialize($form_values['values']['mapping']);

  foreach ($form_values['values'] as $key => $value) {
    $keys = explode('_', $key);
    if ($keys[0] == 'enabled') {
      $query_values[$mapping[$keys[1]]] = $value;
    }
  }

  // load all existing presets
  $presets = ctools_export_crud_load_all('cer');

  foreach ($query_values as $key => $value) {
    // get preset object (create new one if it doesn't exist already).
    $preset = empty($presets[$key]) ? ctools_export_crud_new('cer') : $presets[$key];
    // set and save value

    if (empty($preset->entity_types_content_fields)) {
      $preset->entity_types_content_fields = $key;
    }
    $preset->enabled = $value;
    ctools_export_crud_save('cer', $preset);
    // remove from list of presets, so we know which ones are still used
    if (isset($presets[$key])) unset($presets[$key]);
  }

  // delete old presets
  foreach ($presets as $preset) {
    //ctools_export_crud_delete($preset);
  }

  drupal_set_message(t('The configuration has been saved'));
}

/**
 * The update form.
 * Allows updating of current entitys.
 */
function cer_update_form() {
  $form = array();

  $form['intro'] = array(
    '#value' => t('This will update all the existing entitys for the selected content types so that their entity reference fields are in sync.') . '<br />' . t('This process may take a long time depending on the number of entitys you are updating.') . '<br />' . t('When the process is finished you will see a count of the number of entitys that were updated.')
  );

  $options = entity_get_info();
  foreach ($options as $type => $class) {
    $options[$type] = $class['label'];
  }

  $form['type'] = array(
    '#type' => 'select',
    '#title' => t('Entity types'),
    '#options' => $options,
    '#description' => t('Select the entity type that you want to update.'),
  );


  $form['limit'] = array(
    '#type' => 'select',
    '#title' => t('Number of entities to process at once'),
    '#options' => array(
      10 => t('10'),
      20 => t('20'),
      30 => t('30'),
      50 => t('50'),
      75 => t('75'),
      100 => t('100'),
      125 => t('125'),
      150 => t('150'),
      200 => t('200'),
      250 => t('250'),
      300 => t('300'),
      350 => t('350'),
      400 => t('400'),
      450 => t('450'),
      500 => t('500'),
    ),
    '#default_value' => 50,
    '#description' => t('This process is done in batches. This is the number of entitys processed in each batch. If necessary, reduce the number of entitys to prevent timeouts and memory errors while processing.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'submit',
  );

  return $form;
}

/**
 * The update form.
 * Allows updating of current entitys.
 */
function cer_update_form_validate($form, &$form_state) {
  $type = $form_state['values']['type'];
  if (empty($type)) {
    form_set_error('type', t('You must select an entity type.'));
  }
}

/**
 * The update form.
 * Allows updating of current entitys.
 */
function cer_update_form_submit($form, &$form_state) {
  $type = $form_state['values']['type'];
  cer_batch_index_remaining($type, $form_state['values']['limit']);
}
