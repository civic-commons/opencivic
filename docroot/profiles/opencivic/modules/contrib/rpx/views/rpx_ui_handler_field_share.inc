<?php
/**
 * @file
 * Contains the Engage Share Link field handler.
 *
 * @author Chris Trahey <christrahey@gmail.com>
 */

/**
 * Provides Engage Share Button as Views Field
 */
class rpx_ui_handler_field_share extends views_handler_field_custom {

  /**
   * Add nid as an additional field.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['nid'] = 'nid';
  }

  /**
   * Renders our field
   * @uses _rpx_share_button()
   */
  function render($values) {
    $nid =  $values->{$this->aliases['nid']};
    $node = node_load($nid);
    return _rpx_share_button($node);
  }

  /**
   * Basic checks.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
}
