<?php

/**
 * @file
 * Contains the Engage provider icon field handler.
 */

/**
 * Provides 3rd party provider's icon.
 */
class rpx_ui_handler_field_provider_icon extends views_handler_field {
  /**
   * Add aid as an additional field.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['provider_name'] = 'provider_name';
  }

  /**
   * Renders our field, displays the provider's icon.
   */
  function render($values) {
    if (isset($values->{$this->aliases['provider_name']})) {
      $name = $values->{$this->aliases['provider_name']};
    }
    else {
      return '';
    }

    return theme('rpx_share_icon', array('provider' => $name, 'style' => 'rpx-icon-inline'));
  }

  /**
   * Basic checks.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
}
