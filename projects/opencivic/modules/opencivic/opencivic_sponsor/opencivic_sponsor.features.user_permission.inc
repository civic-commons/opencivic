<?php
/**
 * @file
 * opencivic_sponsor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_sponsor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oc_sponsor content'.
  $permissions['create oc_sponsor content'] = array(
    'name' => 'create oc_sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_sponsor content'.
  $permissions['delete any oc_sponsor content'] = array(
    'name' => 'delete any oc_sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_sponsor content'.
  $permissions['delete own oc_sponsor content'] = array(
    'name' => 'delete own oc_sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_sponsor content'.
  $permissions['edit any oc_sponsor content'] = array(
    'name' => 'edit any oc_sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_sponsor content'.
  $permissions['edit own oc_sponsor content'] = array(
    'name' => 'edit own oc_sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
