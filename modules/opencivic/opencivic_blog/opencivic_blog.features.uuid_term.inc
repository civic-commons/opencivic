<?php
/**
 * @file
 * opencivic_blog.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opencivic_blog_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'transportation',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '36f3f46c-51bb-4ccc-9d90-393693d22484',
    'vocabulary_machine_name' => 'tags',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  $terms[] = array(
    'name' => 'foo',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'd6624bcf-3e03-4579-968f-0e9ce728687f',
    'vocabulary_machine_name' => 'tags',
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  return $terms;
}
