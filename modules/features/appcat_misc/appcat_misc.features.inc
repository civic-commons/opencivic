<?php
/**
 * @file
 * appcat_misc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_misc_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
