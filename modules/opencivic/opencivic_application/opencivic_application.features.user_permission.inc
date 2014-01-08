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

  // Exported permission: 'administer panelizer node application breadcrumbs'.
  $permissions['administer panelizer node application breadcrumbs'] = array(
    'name' => 'administer panelizer node application breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application content'.
  $permissions['administer panelizer node application content'] = array(
    'name' => 'administer panelizer node application content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application context'.
  $permissions['administer panelizer node application context'] = array(
    'name' => 'administer panelizer node application context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application defaults'.
  $permissions['administer panelizer node application defaults'] = array(
    'name' => 'administer panelizer node application defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application layout'.
  $permissions['administer panelizer node application layout'] = array(
    'name' => 'administer panelizer node application layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application overview'.
  $permissions['administer panelizer node application overview'] = array(
    'name' => 'administer panelizer node application overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node application settings'.
  $permissions['administer panelizer node application settings'] = array(
    'name' => 'administer panelizer node application settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term application_category defaults'.
  $permissions['administer panelizer taxonomy_term application_category defaults'] = array(
    'name' => 'administer panelizer taxonomy_term application_category defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create application content'.
  $permissions['create application content'] = array(
    'name' => 'create application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any application content'.
  $permissions['delete any application content'] = array(
    'name' => 'delete any application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own application content'.
  $permissions['delete own application content'] = array(
    'name' => 'delete own application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any application content'.
  $permissions['edit any application content'] = array(
    'name' => 'edit any application content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own application content'.
  $permissions['edit own application content'] = array(
    'name' => 'edit own application content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
