<?php
/**
 * @file
 * occomm_events.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function occomm_events_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Workshop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '00bfc981-7e49-4948-9552-30e3d99bdca3',
    'vocabulary_machine_name' => 'event_type',
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'ac08ace2-f9d0-4acd-8ea2-869a6e6af847',
    'vocabulary_machine_name' => 'event_type',
  );
  $terms[] = array(
    'name' => 'Meeting',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'fcdf6524-076c-4146-a7f7-9a48df2ceae1',
    'vocabulary_machine_name' => 'event_type',
  );
  return $terms;
}
