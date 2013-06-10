<?php
/**
 * @file
 * oclang_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function oclang_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: accept translation jobs.
  $permissions['accept translation jobs'] = array(
    'name' => 'accept translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: administer tmgmt.
  $permissions['administer tmgmt'] = array(
    'name' => 'administer tmgmt',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: create translation jobs.
  $permissions['create translation jobs'] = array(
    'name' => 'create translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: submit translation jobs.
  $permissions['submit translation jobs'] = array(
    'name' => 'submit translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tmgmt',
  );

  return $permissions;
}
