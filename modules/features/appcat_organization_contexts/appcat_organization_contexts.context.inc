<?php
/**
 * @file
 * appcat_organization_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_organization_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'organization_node';
  $context->description = 'Organization node detail page';
  $context->tag = 'Organization';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'organization' => 'organization',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-organization_at_a_glance-block' => array(
          'module' => 'views',
          'delta' => 'organization_at_a_glance-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-6e8b2bad32811708f137ed48d93d4312' => array(
          'module' => 'views',
          'delta' => '6e8b2bad32811708f137ed48d93d4312',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'subscriptions_ui-0' => array(
          'module' => 'subscriptions_ui',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'menu_block-appcat_blocks-1' => array(
          'module' => 'menu_block',
          'delta' => 'appcat_blocks-1',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Organization');
  t('Organization node detail page');
  $export['organization_node'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'organization_view_listing';
  $context->description = 'Organizations listing page';
  $context->tag = 'Organization';
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Organization');
  t('Organizations listing page');
  $export['organization_view_listing'] = $context;

  return $export;
}
