<?php
/**
 * @file
 * appcat_home_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_home_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'Home page of the OpenCivic website';
  $context->tag = 'AppCat homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_latest-block_2' => array(
          'module' => 'views',
          'delta' => 'homepage_latest-block_2',
          'region' => 'three_33_top',
          'weight' => '-9',
        ),
        'views-homepage_latest-block' => array(
          'module' => 'views',
          'delta' => 'homepage_latest-block',
          'region' => 'three_33_first',
          'weight' => '-7',
        ),
        'views-homepage_latest-block_1' => array(
          'module' => 'views',
          'delta' => 'homepage_latest-block_1',
          'region' => 'three_33_second',
          'weight' => '-9',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'three_33_third',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AppCat homepage');
  t('Home page of the OpenCivic website');
  $export['homepage'] = $context;

  return $export;
}
