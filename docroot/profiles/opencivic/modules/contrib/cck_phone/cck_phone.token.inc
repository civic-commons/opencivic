<?php

/**
 * @file
 * Token hook implementations. Included if token.module is installed.
 */

/**
 * Implementation of hook_token_list().
 *
 * Provide a user readable list of Phone Number tokens.
 */
function cck_phone_token_list($type = 'all') {
  if ($type == 'field' || $type == 'all') {
    $tokens = array();

    $tokens['cck_phone']['number'] = t('Phone number');
    $tokens['cck_phone']['country_codes'] = t('Country code');
    $tokens['cck_phone']['extension'] = t('Extension');

    return $tokens;
  }
}

/**
 * Implementation of hook_token_values().
 */
function cck_phone_token_values($type, $object = NULL, $options = array()) {
  $tokens = array();

  if ($type == 'field' && isset($object[0]['number'])) {
    $item = $object[0];

    $tokens['number'] = $item['number'];
    $tokens['country_codes'] = $item['country_codes'];
    $tokens['extension'] = isset($item['extension']) ? $item['extension'] : '';
  }

  return $tokens;
}
