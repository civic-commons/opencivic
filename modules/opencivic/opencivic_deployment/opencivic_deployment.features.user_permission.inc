<?php
/**
 * @file
 * opencivic_deployment.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_deployment_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node oc_deployment breadcrumbs'.
  $permissions['administer panelizer node oc_deployment breadcrumbs'] = array(
    'name' => 'administer panelizer node oc_deployment breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment content'.
  $permissions['administer panelizer node oc_deployment content'] = array(
    'name' => 'administer panelizer node oc_deployment content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment context'.
  $permissions['administer panelizer node oc_deployment context'] = array(
    'name' => 'administer panelizer node oc_deployment context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment defaults'.
  $permissions['administer panelizer node oc_deployment defaults'] = array(
    'name' => 'administer panelizer node oc_deployment defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment layout'.
  $permissions['administer panelizer node oc_deployment layout'] = array(
    'name' => 'administer panelizer node oc_deployment layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment overview'.
  $permissions['administer panelizer node oc_deployment overview'] = array(
    'name' => 'administer panelizer node oc_deployment overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_deployment settings'.
  $permissions['administer panelizer node oc_deployment settings'] = array(
    'name' => 'administer panelizer node oc_deployment settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_deployment content'.
  $permissions['create oc_deployment content'] = array(
    'name' => 'create oc_deployment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_deployment content'.
  $permissions['delete any oc_deployment content'] = array(
    'name' => 'delete any oc_deployment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_deployment content'.
  $permissions['delete own oc_deployment content'] = array(
    'name' => 'delete own oc_deployment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_deployment content'.
  $permissions['edit any oc_deployment content'] = array(
    'name' => 'edit any oc_deployment content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_deployment content'.
  $permissions['edit own oc_deployment content'] = array(
    'name' => 'edit own oc_deployment content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
