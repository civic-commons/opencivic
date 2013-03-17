<?php
/**
 * @file
 * appcat_misc_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function appcat_misc_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_1';
  $strongarm->value = '-1';
  $export['nice_menus_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_2';
  $strongarm->value = '-1';
  $export['nice_menus_depth_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_1';
  $strongarm->value = 'menu-top-menu';
  $export['nice_menus_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_2';
  $strongarm->value = 'main-menu';
  $export['nice_menus_menu_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_1';
  $strongarm->value = 'Nice menu 1';
  $export['nice_menus_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_2';
  $strongarm->value = 'Nice menu 2';
  $export['nice_menus_name_2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_1';
  $strongarm->value = 'down';
  $export['nice_menus_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_2';
  $strongarm->value = 'down';
  $export['nice_menus_type_2'] = $strongarm;

  return $export;
}
