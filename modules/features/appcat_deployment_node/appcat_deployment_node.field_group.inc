<?php
/**
 * @file
 * appcat_deployment_node.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function appcat_deployment_node_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main|node|deployment|form';
  $field_group->group_name = 'group_main';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'deployment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_url',
      2 => 'field_location',
      3 => 'field_add_deployment_for',
      4 => 'field_member',
      5 => 'title',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_main|node|deployment|form'] = $field_group;

  return $export;
}
