<?php
/**
 * @file
 * opencivic_organization.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opencivic_organization_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|oc_organization|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oc_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '19',
    'children' => array(
      0 => 'field_oc_org_abbreviation',
      1 => 'field_oc_org_additional_type',
      2 => 'field_oc_org_address',
      3 => 'field_oc_coordinates',
      4 => 'field_oc_org_email',
      5 => 'field_oc_org_github_account',
      6 => 'field_oc_logo',
      7 => 'field_oc_org_member',
      8 => 'field_oc_org_telephone',
      9 => 'field_oc_org_twitter',
      10 => 'field_oc_org_url',
      11 => 'field_oc_org_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_info|node|oc_organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|oc_organization|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oc_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'group_info',
      1 => 'group_services',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main|node|oc_organization|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_services|node|oc_organization|form';
  $field_group->group_name = 'group_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'oc_organization';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_main';
  $field_group->data = array(
    'label' => 'Apps and services',
    'weight' => '20',
    'children' => array(
      0 => 'field_oc_civic_category',
      1 => 'field_oc_org_services',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_services|node|oc_organization|form'] = $field_group;

  return $export;
}
