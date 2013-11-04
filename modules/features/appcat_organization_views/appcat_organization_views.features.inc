<?php
/**
 * @file
 * appcat_organization_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_organization_views_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
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
function appcat_organization_views_views_api() {
  return array("api" => "3.0");
}
