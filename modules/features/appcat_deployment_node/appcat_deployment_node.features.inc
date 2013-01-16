<?php
/**
 * @file
 * appcat_deployment_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_deployment_node_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function appcat_deployment_node_node_info() {
  $items = array(
    'deployment' => array(
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
