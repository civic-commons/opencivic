<?php
/**
 * @file
 * opencivic_organization.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function opencivic_organization_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*organization*field_member*node*organization*field_member';
  $cnr_obj->enabled = 0;
  $export['node*organization*field_member*node*organization*field_member'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*organization*field_related_applications*node*application*field_contributor';
  $cnr_obj->enabled = 1;
  $export['node*organization*field_related_applications*node*application*field_contributor'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'node*organization*field_related_applications*node*application*field_creator';
  $cnr_obj->enabled = 0;
  $export['node*organization*field_related_applications*node*application*field_creator'] = $cnr_obj;

  return $export;
}
