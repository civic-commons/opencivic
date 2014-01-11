<?php
/**
 * @file
 * opencivic_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node story breadcrumbs'.
  $permissions['administer panelizer node story breadcrumbs'] = array(
    'name' => 'administer panelizer node story breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story content'.
  $permissions['administer panelizer node story content'] = array(
    'name' => 'administer panelizer node story content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story context'.
  $permissions['administer panelizer node story context'] = array(
    'name' => 'administer panelizer node story context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story defaults'.
  $permissions['administer panelizer node story defaults'] = array(
    'name' => 'administer panelizer node story defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story layout'.
  $permissions['administer panelizer node story layout'] = array(
    'name' => 'administer panelizer node story layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story overview'.
  $permissions['administer panelizer node story overview'] = array(
    'name' => 'administer panelizer node story overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node story settings'.
  $permissions['administer panelizer node story settings'] = array(
    'name' => 'administer panelizer node story settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
