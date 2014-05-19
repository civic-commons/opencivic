<?php
/**
 * @file
 * opencivic_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_problem_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opencivic_problem_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_problem_node_info() {
  $items = array(
    'problem' => array(
      'name' => t('Problem statement'),
      'base' => 'node_content',
      'description' => t('A <strong>problem statement</strong> describes a real-world problem that has inspired or is hoped to inspire a project or application.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
