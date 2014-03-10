<?php
/**
 * @file
 * opencivic_organization.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_organization_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node organization breadcrumbs.
  $permissions['administer panelizer node organization breadcrumbs'] = array(
    'name' => 'administer panelizer node organization breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization content.
  $permissions['administer panelizer node organization content'] = array(
    'name' => 'administer panelizer node organization content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization context.
  $permissions['administer panelizer node organization context'] = array(
    'name' => 'administer panelizer node organization context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization defaults.
  $permissions['administer panelizer node organization defaults'] = array(
    'name' => 'administer panelizer node organization defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization layout.
  $permissions['administer panelizer node organization layout'] = array(
    'name' => 'administer panelizer node organization layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization overview.
  $permissions['administer panelizer node organization overview'] = array(
    'name' => 'administer panelizer node organization overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node organization settings.
  $permissions['administer panelizer node organization settings'] = array(
    'name' => 'administer panelizer node organization settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term organization_type defaults.
  $permissions['administer panelizer taxonomy_term organization_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term organization_type defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: create organization content.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any organization content.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own organization content.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any organization content.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own organization content.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
