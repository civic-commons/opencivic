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
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
}
