<?php
/**
 * @file
 * opencivic_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function opencivic_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node oc_blog breadcrumbs'.
  $permissions['administer panelizer node oc_blog breadcrumbs'] = array(
    'name' => 'administer panelizer node oc_blog breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog content'.
  $permissions['administer panelizer node oc_blog content'] = array(
    'name' => 'administer panelizer node oc_blog content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog context'.
  $permissions['administer panelizer node oc_blog context'] = array(
    'name' => 'administer panelizer node oc_blog context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog defaults'.
  $permissions['administer panelizer node oc_blog defaults'] = array(
    'name' => 'administer panelizer node oc_blog defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog layout'.
  $permissions['administer panelizer node oc_blog layout'] = array(
    'name' => 'administer panelizer node oc_blog layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog overview'.
  $permissions['administer panelizer node oc_blog overview'] = array(
    'name' => 'administer panelizer node oc_blog overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node oc_blog settings'.
  $permissions['administer panelizer node oc_blog settings'] = array(
    'name' => 'administer panelizer node oc_blog settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create oc_blog content'.
  $permissions['create oc_blog content'] = array(
    'name' => 'create oc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oc_blog content'.
  $permissions['delete any oc_blog content'] = array(
    'name' => 'delete any oc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oc_blog content'.
  $permissions['delete own oc_blog content'] = array(
    'name' => 'delete own oc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oc_blog content'.
  $permissions['edit any oc_blog content'] = array(
    'name' => 'edit any oc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oc_blog content'.
  $permissions['edit own oc_blog content'] = array(
    'name' => 'edit own oc_blog content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
