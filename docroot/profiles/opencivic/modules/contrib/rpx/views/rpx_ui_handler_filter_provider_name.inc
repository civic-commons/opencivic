<?php

/**
 * @file
 * Contains handler for the provider name filter. We don't use the default
 * string filter because we want to provide a dropdown menu with provider names.
 */

/**
 * Filter by provider machine name.
 */
class rpx_ui_handler_filter_provider_name extends views_handler_filter_in_operator {
  function get_value_options() {
    if (!isset($this->value_options)) {
      $this->value_title = t('Provider machine name');

      // Get list of all available providers and switch titles to machine names.
      $providers = _rpx_providers(TRUE);
      foreach ($providers as $k => $v) {
        $providers[$k] = $k;
      }

     $this->value_options = $providers;
    }
  }
}
