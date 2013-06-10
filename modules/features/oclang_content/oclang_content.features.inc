<?php
/**
 * @file
 * oclang_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function oclang_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_tmgmt_translator().
 */
function oclang_content_default_tmgmt_translator() {
  $items = array();
  $items['microsoft'] = entity_import('tmgmt_translator', '{
    "name" : "microsoft",
    "label" : "Microsoft translator (auto created)",
    "description" : "Microsoft Translator service.",
    "weight" : "-30",
    "plugin" : "microsoft",
    "settings" : {
      "clientid" : "europe_commons",
      "clientsecret" : "pzu2x8i2xFnJ+0tPlHUeC66KCOG9D4R0WN2XD7IJNkg",
      "api" : ""
    },
    "rdf_mapping" : []
  }');
  return $items;
}
