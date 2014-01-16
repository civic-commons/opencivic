<?php
/**
 * @file
 * opencivic_event.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opencivic_event_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Workshop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '00bfc981-7e49-4948-9552-30e3d99bdca3',
    'vocabulary_machine_name' => 'event_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Conference',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'ac08ace2-f9d0-4acd-8ea2-869a6e6af847',
    'vocabulary_machine_name' => 'event_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'Meeting',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'fcdf6524-076c-4146-a7f7-9a48df2ceae1',
    'vocabulary_machine_name' => 'event_type',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  return $terms;
}
