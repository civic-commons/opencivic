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
        'views-blog-block' => array(
          'module' => 'views',
          'delta' => 'blog-block',
          'region' => 'content_doormat',
          'weight' => '-8',
        ),
        'views-application_list-block_1' => array(
          'module' => 'views',
          'delta' => 'application_list-block_1',
          'region' => 'content_main_left',
          'weight' => '-6',
        ),
        'views-deployments_list-block_1' => array(
          'module' => 'views',
          'delta' => 'deployments_list-block_1',
          'region' => 'content_main_middle',
          'weight' => '-8',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content_main_right',
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
