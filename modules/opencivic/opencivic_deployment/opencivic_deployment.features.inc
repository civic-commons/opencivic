<?php
/**
 * @file
 * opencivic_deployment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_deployment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opencivic_deployment_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_deployment_node_info() {
  $items = array(
    'oc_deployment' => array(
      'name' => t('Deployment'),
      'base' => 'node_content',
      'description' => t('A <b>deployment</b> is an instance of an application being installed or used to solve a problem or perform a service for a specific organization or location.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
