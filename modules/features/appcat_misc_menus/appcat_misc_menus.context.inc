<?php
/**
 * @file
 * appcat_misc_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_misc_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'navigation_menus';
  $context->description = 'Site navigation menus';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'top_menu',
          'weight' => '-10',
        ),
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'top_menu',
          'weight' => '27',
        ),
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site navigation menus');
  t('Sitewide');
  $export['navigation_menus'] = $context;

  return $export;
}
