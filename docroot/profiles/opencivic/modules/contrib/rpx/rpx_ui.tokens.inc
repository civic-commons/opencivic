<?php

/**
 * @file
 * Builds placeholder replacement tokens for RPX data.
 */

/**
 * Implements hook_token_info().
 */
function rpx_ui_token_info() {
  $types['rpx'] = array(
    'name' => 'rpx',
    'description' => t('Tokens related to Janrain Engage providers.'),
  );

  $rpx['provider-machinename'] = array(
    'name' => t('Provider\'s machine name'),
    'description' => t('The Janrain Engage identity provider\'s internal (machine) name.'),
  );

  $rpx['provider-title'] = array(
    'name' => t("Provider's title"),
    'description' => t('The Janrain Engage identity provider\'s title.'),
  );

  return array(
    'types' => $types,
    'tokens' => array('rpx' => $rpx),
  );
}

/**
 * Implements hook_tokens().
 */
function rpx_ui_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $sanitize = !empty($options['sanitize']);
  $replacements = array();

  if ($type != 'rpx') {
    return $replacements;
  }

  $provider = $_SESSION['rpx_last_provider_info'];

  foreach ($tokens as $name => $original) {
    switch ($name) {
    case 'provider-machinename':
      $replacements[$original] = $sanitize ? check_plain($provider['name']) : $provider['name'];
      break;

    case 'provider-title':
      $replacements[$original] = $sanitize ? check_plain($provider['title']) : $provider['title'];
      break;
    }
  }

  return $replacements;
}
