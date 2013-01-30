<?php
/**
 * @file
 * appcat_misc_deltas.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_misc_deltas_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
