<?php
/**
 * @file
 * opencivic_blog.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function opencivic_blog_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_oc_blog_keywords'
  $field_bases['field_oc_blog_keywords'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_oc_blog_keywords',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => NULL,
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
