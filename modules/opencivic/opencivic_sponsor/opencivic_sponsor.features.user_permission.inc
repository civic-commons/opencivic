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

  // Exported permission: 'create sponsor content'.
  $permissions['create sponsor content'] = array(
    'name' => 'create sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sponsor content'.
  $permissions['delete any sponsor content'] = array(
    'name' => 'delete any sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sponsor content'.
  $permissions['delete own sponsor content'] = array(
    'name' => 'delete own sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sponsor content'.
  $permissions['edit any sponsor content'] = array(
    'name' => 'edit any sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sponsor content'.
  $permissions['edit own sponsor content'] = array(
    'name' => 'edit own sponsor content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
