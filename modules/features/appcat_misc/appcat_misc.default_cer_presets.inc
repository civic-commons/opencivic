<?php
/**
 * @file
 * appcat_misc.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function appcat_misc_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*application*field_related_applications*node*application*field_related_applications';
  $cnr_obj->enabled = 1;
  $export['node*application*field_related_applications*node*application*field_related_applications'] = $cnr_obj;

  return $export;
}
