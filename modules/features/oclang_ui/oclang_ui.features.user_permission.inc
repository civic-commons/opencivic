<?php
/**
 * @file
 * oclang_ui.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function oclang_ui_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'locale',
  );

  return $permissions;
}
