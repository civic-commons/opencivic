<?php
/**
 * @file
 * appcat_home_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function appcat_home_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'block-appcat_participate' => array(
      'machine_name' => 'appcat_participate',
      'module' => 'block',
    ),
  );

  // bartik
  $theme = array();

  $theme['block-appcat_participate'] = array(
    'module' => 'block',
    'theme' => 'bartik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Participate',
    'cache' => -1,
    'machine_name' => 'appcat_participate',
  );

  $export['theme']['bartik'] = $theme;

  // cat_lover
  $theme = array();

  $theme['block-appcat_participate'] = array(
    'module' => 'block',
    'theme' => 'cat_lover',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Participate',
    'cache' => -1,
    'machine_name' => 'appcat_participate',
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
