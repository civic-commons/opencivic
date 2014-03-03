<?php
/**
 * @file
 * opencivic_organization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_organization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
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
function opencivic_organization_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_organization_node_info() {
  $items = array(
    'oc_organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('An <b>organization</b> can be a company, government agency, nongovernmental organization or team of people working together to create, support or use software applications.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
