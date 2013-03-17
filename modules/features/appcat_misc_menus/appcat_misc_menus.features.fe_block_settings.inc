<?php
/**
 * @file
 * appcat_misc_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function appcat_misc_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'nice_menus-1' => array(
      'delta' => '1',
      'module' => 'nice_menus',
    ),
    'nice_menus-2' => array(
      'delta' => '2',
      'module' => 'nice_menus',
    ),
  );

  // bartik
  $theme = array();

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['bartik'] = $theme;

  // cat_lover
  $theme = array();

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'cat_lover',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['nice_menus-2'] = array(
    'module' => 'nice_menus',
    'delta' => '2',
    'theme' => 'cat_lover',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['cat_lover'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
