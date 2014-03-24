<?php
/**
 * @file
 * opencivic_application.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_application_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node oc_application breadcrumbs'.
  $permissions['administer panelizer node oc_application breadcrumbs'] = array(
    'name' => 'administer panelizer node oc_application breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application content'.
  $permissions['administer panelizer node oc_application content'] = array(
    'name' => 'administer panelizer node oc_application content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application context'.
  $permissions['administer panelizer node oc_application context'] = array(
    'name' => 'administer panelizer node oc_application context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application defaults'.
  $permissions['administer panelizer node oc_application defaults'] = array(
    'name' => 'administer panelizer node oc_application defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application layout'.
  $permissions['administer panelizer node oc_application layout'] = array(
    'name' => 'administer panelizer node oc_application layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application overview'.
  $permissions['administer panelizer node oc_application overview'] = array(
    'name' => 'administer panelizer node oc_application overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_application settings'.
  $permissions['administer panelizer node oc_application settings'] = array(
    'name' => 'administer panelizer node oc_application settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_application content'.
  $permissions['create oc_application content'] = array(
    'name' => 'create oc_application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_application content'.
  $permissions['delete any oc_application content'] = array(
    'name' => 'delete any oc_application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_application content'.
  $permissions['delete own oc_application content'] = array(
    'name' => 'delete own oc_application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_application content'.
  $permissions['edit any oc_application content'] = array(
    'name' => 'edit any oc_application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_application content'.
  $permissions['edit own oc_application content'] = array(
    'name' => 'edit own oc_application content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
