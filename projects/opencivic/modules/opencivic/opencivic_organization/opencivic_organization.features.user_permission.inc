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

  // Exported permission: 'administer panelizer node oc_organization breadcrumbs'.
  $permissions['administer panelizer node oc_organization breadcrumbs'] = array(
    'name' => 'administer panelizer node oc_organization breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization content'.
  $permissions['administer panelizer node oc_organization content'] = array(
    'name' => 'administer panelizer node oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization context'.
  $permissions['administer panelizer node oc_organization context'] = array(
    'name' => 'administer panelizer node oc_organization context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization defaults'.
  $permissions['administer panelizer node oc_organization defaults'] = array(
    'name' => 'administer panelizer node oc_organization defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization layout'.
  $permissions['administer panelizer node oc_organization layout'] = array(
    'name' => 'administer panelizer node oc_organization layout',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization overview'.
  $permissions['administer panelizer node oc_organization overview'] = array(
    'name' => 'administer panelizer node oc_organization overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_organization settings'.
  $permissions['administer panelizer node oc_organization settings'] = array(
    'name' => 'administer panelizer node oc_organization settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer taxonomy_term oc_organization_type defaults'.
  $permissions['administer panelizer taxonomy_term oc_organization_type defaults'] = array(
    'name' => 'administer panelizer taxonomy_term oc_organization_type defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_organization content'.
  $permissions['create oc_organization content'] = array(
    'name' => 'create oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_organization content'.
  $permissions['delete any oc_organization content'] = array(
    'name' => 'delete any oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_organization content'.
  $permissions['delete own oc_organization content'] = array(
    'name' => 'delete own oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_organization content'.
  $permissions['edit any oc_organization content'] = array(
    'name' => 'edit any oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_organization content'.
  $permissions['edit own oc_organization content'] = array(
    'name' => 'edit own oc_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
