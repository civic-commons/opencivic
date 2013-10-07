<?php
/**
 * @file
 * opencivic_story.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opencivic_story_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'transportation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '36f3f46c-51bb-4ccc-9d90-393693d22484',
    'vocabulary_machine_name' => 'tags',
  );
  $terms[] = array(
    'name' => 'foo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6624bcf-3e03-4579-968f-0e9ce728687f',
    'vocabulary_machine_name' => 'tags',
  );
  return $terms;
}
