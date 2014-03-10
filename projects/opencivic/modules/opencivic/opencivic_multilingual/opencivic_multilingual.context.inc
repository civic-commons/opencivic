<?php
/**
 * @file
 * multilingual_ui_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function opencivic_multilingual_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_multilingual';
  $context->description = 'Position of the switch language block';
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'menu_bar',
          'weight' => '22',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Position of the switch language block');
  t('Sitewide');
  $export['sitewide_multilingual'] = $context;

  return $export;
}
