<?php
/**
 * @file
 * opencivic_sponsor.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function opencivic_sponsor_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_sitewide_oc_sponsor_logos';
  $context->description = 'Defines the sponsor logos display in the footer.';
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
        'views-sponsors_block-block' => array(
          'module' => 'views',
          'delta' => 'sponsors_block-block',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines the sponsor logos display in the footer.');
  t('Sitewide');
  $export['footer_sitewide_oc_sponsor_logos'] = $context;

  return $export;
}
