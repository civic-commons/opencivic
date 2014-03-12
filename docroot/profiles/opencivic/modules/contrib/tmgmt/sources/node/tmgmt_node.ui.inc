<?php

/**
 * @file
 * Provides the node source ui controller.
 */

class TMGMTNodeSourceUIController extends TMGMTDefaultSourceUIController {

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    // The node source overview is a View using Views Bulk Operations. Therefore
    // we don't need to provide any menu items.
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function hook_forms() {
    // The node source overview is a View using Views Bulk Operations. Therefore
    // we don't need to provide any forms.
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function hook_views_default_views() {
    return _tmgmt_load_exports('tmgmt_node', 'views', 'view.inc', 'view');
  }

}
