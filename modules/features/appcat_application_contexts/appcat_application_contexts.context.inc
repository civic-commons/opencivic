<?php
/**
 * @file
 * appcat_application_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_application_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'application_node';
  $context->description = 'Application node detail page';
  $context->tag = 'Application';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'application' => 'application',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-application_at_a_glance-block' => array(
          'module' => 'views',
          'delta' => 'application_at_a_glance-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Application');
  t('Application node detail page');
  $export['application_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'application_view_listing';
  $context->description = 'Applications listing page';
  $context->tag = 'Application';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'apps' => 'apps',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Application');
  t('Applications listing page');
  $export['application_view_listing'] = $context;

  return $export;
}
