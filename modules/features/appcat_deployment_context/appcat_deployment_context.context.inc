<?php
/**
 * @file
 * appcat_deployment_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_deployment_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'deployment_node';
  $context->description = 'Deployment node detail page';
  $context->tag = 'Deployment';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'deployment' => 'deployment',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-deployment_at_a_glance-block' => array(
          'module' => 'views',
          'delta' => 'deployment_at_a_glance-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'menu_block-appcat_blocks-1' => array(
          'module' => 'menu_block',
          'delta' => 'appcat_blocks-1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Deployment');
  t('Deployment node detail page');
  $export['deployment_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'deployment_view_listing';
  $context->description = 'Deployments listing page';
  $context->tag = 'Deployment';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'deployments' => 'deployments',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'listings',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Deployment');
  t('Deployments listing page');
  $export['deployment_view_listing'] = $context;

  return $export;
}
