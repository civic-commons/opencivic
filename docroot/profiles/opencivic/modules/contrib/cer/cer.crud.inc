<?php
/**
 * @file
 * Include file providing corresponding node reference insert, update, and
 * delete handling.
 */

/**
 * Add any corresponding references on node insertion.
 *
 * $keys = array(
 *  'home_entity_type' => $key[0],
 *  'home_bundle' => $key[1],
 *  'home_field' => $key[2],
 *  'away_entity_type' => $key[3],
 *  'away_bundle' => $key[4],
 *  'away_field' => $key[5],
 * );
 */
function cer_insert($home_entity, $keys) {
  $types = array(
    'home' => $keys['home_entity_type'],
    'away' => $keys['away_entity_type'],
  );

  $ids = _cer_entity_ids($types);

  // Determine the nodereference values after the insert.
  if (isset($home_entity->$keys['home_field']) && is_array($home_entity->$keys['home_field'])) {
    foreach ($home_entity->$keys['home_field'] as $fields) {
      foreach ($fields as $reference) {
        if (!empty($reference['target_id'])) {
          // Load the referenced entity if it is of the specified away type.
          // TODO: Do this with EntityFieldQuery
          // See http://api.drupal.org/api/drupal/modules--node--node.module/function/node_load_multiple/7
          if ($referenced_entity = entity_load($keys['away_entity_type'], array($reference['target_id']), NULL, FALSE)) {
            // Entity Load loads an array of ojects keyed by their ID.
            $referenced_entity = $referenced_entity[$reference['target_id']];
            $referenced_entity->bundle_type = _cer_entity_get_bundle($referenced_entity, $keys['away_entity_type']);
            if ($referenced_entity->bundle_type == $keys['away_bundle']) {

              // Add the new reference.
              // If there are no other references, we need to make sure this
              // is delta 0
              if (array_key_exists(LANGUAGE_NONE, $referenced_entity->{$keys['away_field']}) == FALSE || $referenced_entity->{$keys['away_field']}[LANGUAGE_NONE][0]['target_id'] == NULL) {
                $referenced_entity->{$keys['away_field']}[LANGUAGE_NONE][0]['target_id'] = $home_entity->$ids['home'];

              }
              else {
                // Add the new reference.
                // Check for doubles, could happen when nodes of same type are
                // referenced.
                $exists = FALSE;
                foreach ($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE] as $key => $value) {
                  if ($value['target_id'] == $home_entity->$ids['home']) {
                    $exists = TRUE;
                    break;
                  }
                }

                if (!$exists) {
                  $referenced_entity->{$keys['away_field']}[LANGUAGE_NONE][] = array('target_id' => $home_entity->$ids['home']);
                }
              }
              _cer_update($keys['away_entity_type'], $referenced_entity);
            }
          }
        }
      }
    }
  }
}

/**
 * Change corresponding references on node updating.
 *
 * Corresponding changes are made for any references removed or added.
 */
/**
 *
 * $keys = array(
 *  'home_entity_type' => $key[0],
 *  'home_bundle' => $key[1],
 *  'home_field' => $key[2],
 *  'away_entity_type' => $key[3],
 *  'away_bundle' => $key[4],
 *  'away_field' => $key[5],
 * );
 */
function cer_update($home_entity, $keys, $process_unchanged = FALSE) {
  $types = array(
    'home' => $keys['home_entity_type'],
    'away' => $keys['away_entity_type'],
  );

  $ids = _cer_entity_ids($types);

  // Since home_entity is just being saved, $old_entity and $home_entity are different!
  if ($process_unchanged == FALSE){
    $old_entity = $home_entity->original;
  }
  else{
    $old_entity = $home_entity;
  }
  //$old_entity = $old_entity[$home_entity->$ids['home']];
  $old = $new = array();

  // Determine the entityreference values before the update.
  if (isset($old_entity->$keys['home_field']) && is_array($old_entity->$keys['home_field'])) {
    foreach ($old_entity->$keys['home_field'] as $lang => $fields) {
      foreach ($fields as $reference) {
        if (!empty($reference['target_id'])) {
          $old[] = $reference['target_id'];
        }
      }
    }
  }

  // Determine the entityreference values after the update.
  if (isset($home_entity->$keys['home_field']) && is_array($home_entity->$keys['home_field'])) {
    foreach ($home_entity->$keys['home_field'] as $lang => $fields) {
      foreach ($fields as $reference) {
        if (!empty($reference['target_id'])) {
          $new[] = $reference['target_id'];
        }
      }
    }
  }

  if (($old == $new) && $process_unchanged == FALSE){
    return;
  }

  // Handle removed references.
  if (!empty($old) ) {
    foreach ($old as $data) {
      if ($removed = array_diff($old, $new)) {
        foreach ($removed as $id) {
          // Load the referenced node if it is of the specified away type.
          if ($referenced_entity = entity_load($keys['away_entity_type'], array($id), NULL, FALSE)) {
            $referenced_entity = $referenced_entity[$id];
            $referenced_entity->bundle_type = _cer_entity_get_bundle($referenced_entity, $keys['away_entity_type']);
            if ($referenced_entity->bundle_type == $keys['away_bundle']) {
              if (isset($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE]) && is_array($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE])) {
                // Iterate through the away node's references.
                foreach ($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE] as $key => $value){
                  // Remove references to the deleted node.
                  if ($value['target_id'] && $value['target_id'] == $home_entity->$ids['home']) {
                    unset($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE][$key]);
                    _cer_update($keys['away_entity_type'], $referenced_entity);
                    break;
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  // Handle added references.
  // No array diff a reference overload could of happend or a mass update.
  if ($added = $new) {
    foreach ($added as $id) {
      // Load the referenced entity if it is of the specified away type.
      if ($referenced_entity = entity_load($keys['away_entity_type'], array($id), NULL, FALSE)) {
        $referenced_entity = $referenced_entity[$id];
        $referenced_entity->bundle_type = _cer_entity_get_bundle($referenced_entity, $keys['away_entity_type']);
        if ($referenced_entity->bundle_type == $keys['away_bundle']) {
          // Detect whether the reference already exists.
          $exists = FALSE;
          if (isset($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE]) && !empty($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE])) {
            foreach ($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE] as $data) {
              if ($data['target_id'] == $home_entity->$ids['home']) {
                $exists = TRUE;
                break;
              }
            }
          }

          // Empty places are removed.
          // Yes this means the deltas change on the away node when a
          // reference is made on the home node.
          $values = array();
          if (isset($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE])) {
            foreach ($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE] as $value) {
              if (!empty($value['target_id'])) {
                $values[] = $value;
              }
            }
          }
          $referenced_entity->{$keys['away_field']}[LANGUAGE_NONE] = $values;
          // Add the new reference. Don't create a duplicate.
          if (!$exists) {
            // Get the allowed values.
            $unlimited = FALSE;
            $field = field_info_field($keys['away_field']);
            if ($field) {
              if ($field['cardinality'] == -1) {
                $unlimited = TRUE;
                $allowed_references = 0;
              }
              else {
                $allowed_references = $field['cardinality'];
              }
              // Check for reference overloading.
              $references = count($referenced_entity->{$keys['away_field']}[LANGUAGE_NONE]) + 1;
              if (($allowed_references >= $references) || $unlimited) {
                $referenced_entity->{$keys['away_field']}[LANGUAGE_NONE][] = array('target_id' => $home_entity->$ids['home']);
                _cer_update($keys['away_entity_type'], $referenced_entity);
              }
              else {
                $t_reference = format_plural($references, '1 reference', '@count references');
                $t_allowed = format_plural($allowed_references, '1 reference is', '@count references are');
                drupal_set_message(
                  t('Reference overloading: @title would of had @t_reference and only @t_allowed permitted. Before adding a reference, you would need to <a href="@url">edit</a> @title to remove an existing reference and resave this node to have make it correspond. Or you could allow this reference instance to have more references, go to the field settings for this instance.',
                    array(
                      '@title' => $referenced_entity->title,
                      '@url' => url('node/' . $referenced_entity->$ids['away'] . '/edit'),
                      '@t_reference' => $t_reference,
                      '@t_allowed' => $t_allowed,
                    )
                  ),
                  'error'
                );
              }
            }
          }
        }
      }
    }
  }
}

/**
 * Remove corresponding references on node deletion.
 **/
/**
 *
 * $keys = array(
 *  'home_entity_type' => $key[0],
 *  'home_bundle' => $key[1],
 *  'home_field' => $key[2],
 *  'away_entity_type' => $key[3],
 *  'away_bundle' => $key[4],
 *  'away_field' => $key[5],
 * );
 */
function cer_delete($home_entity, $keys, $process_unchanged = FALSE) {
  $types = array(
    'home' => $keys['home_entity_type'],
    'away' => $keys['away_entity_type'],
  );

  $ids = _cer_entity_ids($types);

  // Iterate through the field's references.
  foreach ($home_entity->$keys['home_field'] as $lang => $langdata) {
    foreach ($langdata as $reference) {
      if (!empty($reference['target_id'])) {
        // Load the referenced node if it is of the specified away type.
        if ($referenced_entity = entity_load($keys['away_entity_type'], array($reference['target_id']), NULL, FALSE)) {
          $referenced_entity = $referenced_entity[$reference['target_id']];
          $referenced_entity->bundle_type = _cer_entity_get_bundle($referenced_entity, $keys['away_entity_type']);
          if ($referenced_entity->bundle_type == $keys['away_bundle']) {
            // Iterate through the away entity's references.
            foreach ($referenced_entity->{$keys['away_field']}[$lang] as $key => $value) {
              // Remove references to the deleted node.
              if ($value['target_id'] && $value['target_id'] == $home_entity->$ids['home']) {
                unset($referenced_entity->{$keys['away_field']}[$lang][$key]);
                _cer_update($keys['away_entity_type'], $referenced_entity);
                break;
              }
            }
          }
        }
      }
    }
  }
}

/**
 * Update field data.
 *
 * @param $node the referenced node to be updated.
 */
function _cer_update($entity_type, $entity) {
  field_attach_presave($entity_type, $entity);
  field_attach_update($entity_type, $entity);
}


