<?php
/**
 * @file
 * appcat_deployment_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function appcat_deployment_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer panelizer node deployment breadcrumbs.
  $permissions['administer panelizer node deployment breadcrumbs'] = array(
    'name' => 'administer panelizer node deployment breadcrumbs',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment content.
  $permissions['administer panelizer node deployment content'] = array(
    'name' => 'administer panelizer node deployment content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment context.
  $permissions['administer panelizer node deployment context'] = array(
    'name' => 'administer panelizer node deployment context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment defaults.
  $permissions['administer panelizer node deployment defaults'] = array(
    'name' => 'administer panelizer node deployment defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment layout.
  $permissions['administer panelizer node deployment layout'] = array(
    'name' => 'administer panelizer node deployment layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment overview.
  $permissions['administer panelizer node deployment overview'] = array(
    'name' => 'administer panelizer node deployment overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node deployment settings.
  $permissions['administer panelizer node deployment settings'] = array(
    'name' => 'administer panelizer node deployment settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  return $permissions;
}
