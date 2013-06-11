<?php
/**
 * @file
 * appcat_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function appcat_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:apps
  $menu_links['main-menu:apps'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'apps',
    'router_path' => 'apps',
    'link_title' => 'Apps',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:orgs
  $menu_links['main-menu:orgs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'orgs',
    'router_path' => 'orgs',
    'link_title' => 'Organizations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Apps');
  t('Organizations');


  return $menu_links;
}
