<?php
/**
 * @file
 * opencivic_application.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opencivic_application_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Games',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => '3ef61d92-9025-59e4-71e8-14a426324365',
    'vocabulary_machine_name' => 'application_category',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_icon' => array(),
    'field_small_icon' => array(),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Games',
          'format' => NULL,
          'safe_value' => 'Games',
        ),
      ),
    ),
    'translations' => array(
      'original' => NULL,
      'data' => array(),
    ),
  );
  return $terms;
}
