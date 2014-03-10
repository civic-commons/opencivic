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

  // Exported permission: 'administer panelizer node blog breadcrumbs'.
  $permissions['administer panelizer node blog breadcrumbs'] = array(
    'name' => 'administer panelizer node blog breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog content'.
  $permissions['administer panelizer node blog content'] = array(
    'name' => 'administer panelizer node blog content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog context'.
  $permissions['administer panelizer node blog context'] = array(
    'name' => 'administer panelizer node blog context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog defaults'.
  $permissions['administer panelizer node blog defaults'] = array(
    'name' => 'administer panelizer node blog defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog layout'.
  $permissions['administer panelizer node blog layout'] = array(
    'name' => 'administer panelizer node blog layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog overview'.
  $permissions['administer panelizer node blog overview'] = array(
    'name' => 'administer panelizer node blog overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node blog settings'.
  $permissions['administer panelizer node blog settings'] = array(
    'name' => 'administer panelizer node blog settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
