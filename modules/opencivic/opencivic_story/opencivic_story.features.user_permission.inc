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

  // Exported permission: 'administer panelizer node oc_story breadcrumbs'.
  $permissions['administer panelizer node oc_story breadcrumbs'] = array(
    'name' => 'administer panelizer node oc_story breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story content'.
  $permissions['administer panelizer node oc_story content'] = array(
    'name' => 'administer panelizer node oc_story content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story context'.
  $permissions['administer panelizer node oc_story context'] = array(
    'name' => 'administer panelizer node oc_story context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story defaults'.
  $permissions['administer panelizer node oc_story defaults'] = array(
    'name' => 'administer panelizer node oc_story defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story layout'.
  $permissions['administer panelizer node oc_story layout'] = array(
    'name' => 'administer panelizer node oc_story layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story overview'.
  $permissions['administer panelizer node oc_story overview'] = array(
    'name' => 'administer panelizer node oc_story overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_story settings'.
  $permissions['administer panelizer node oc_story settings'] = array(
    'name' => 'administer panelizer node oc_story settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_story content'.
  $permissions['create oc_story content'] = array(
    'name' => 'create oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_story content'.
  $permissions['delete any oc_story content'] = array(
    'name' => 'delete any oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_story content'.
  $permissions['delete own oc_story content'] = array(
    'name' => 'delete own oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_story content'.
  $permissions['edit any oc_story content'] = array(
    'name' => 'edit any oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_story content'.
  $permissions['edit own oc_story content'] = array(
    'name' => 'edit own oc_story content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
