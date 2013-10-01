<?php
/**
 * @file
 * appcat_blog_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function appcat_blog_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node blog breadcrumbs.
  $permissions['administer panelizer node blog breadcrumbs'] = array(
    'name' => 'administer panelizer node blog breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog content.
  $permissions['administer panelizer node blog content'] = array(
    'name' => 'administer panelizer node blog content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog context.
  $permissions['administer panelizer node blog context'] = array(
    'name' => 'administer panelizer node blog context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog defaults.
  $permissions['administer panelizer node blog defaults'] = array(
    'name' => 'administer panelizer node blog defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog layout.
  $permissions['administer panelizer node blog layout'] = array(
    'name' => 'administer panelizer node blog layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog overview.
  $permissions['administer panelizer node blog overview'] = array(
    'name' => 'administer panelizer node blog overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node blog settings.
  $permissions['administer panelizer node blog settings'] = array(
    'name' => 'administer panelizer node blog settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
