<?php
/**
 * @file
 * ochack_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ochack_problem_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ochack_problem_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ochack_problem_node_info() {
  $items = array(
    'problem' => array(
      'name' => t('Problem statement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
