<?php
/**
 * @file
 * appcat_misc.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function appcat_misc_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_disabled_strings_en';
  $strongarm->value = array();
  $export['locale_custom_disabled_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_custom_strings_en';
  $strongarm->value = array(
    '' => array(
      'Subscriptions' => 'Subscribe to Updates',
      'The master checkboxes in the left-most column turn the given subscription on or off. Depending on the setup of the site, you may have additional options for active subscriptions.' => 'By checking the box above you will receive e-mail notifications of updates to this item. You may change your subscription settings using the “Subscriptions” tab on your user page.',
    ),
  );
  $export['locale_custom_strings_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'subscriptions_form_in_block';
  $strongarm->value = '1';
  $export['subscriptions_form_in_block'] = $strongarm;

  return $export;
}
