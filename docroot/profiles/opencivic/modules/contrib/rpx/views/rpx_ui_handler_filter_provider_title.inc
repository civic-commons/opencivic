<?php

/**
 * @file
 * Contains handler for the provider title filter. We don't use the default
 * string filter because we want to provide a dropdown menu with provider titles.
 */

/**
 * Filter by provider title.
 */
class rpx_ui_handler_filter_provider_title extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Provider title');

      // Get list of all available providers and switch machine names to titles.
      $providers = _rpx_providers(TRUE);
      $options = array();
      foreach ($providers as $k => $v) {
        $options[$v] = $v;
      }

     $this->value_options = $options;
    }
  }
}
