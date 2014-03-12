<?php
/**
 * @file
 * Configuration of the Node Links.
 */

class PrepopulateCreateNodeLinksInstanceBehavior extends EntityReference_BehaviorHandler_Abstract {

  /**
   * Generate a settings form for this handler.
   */
  public function settingsForm($field, $instance) {
#    echo '<pre>';
#    print_r($instance);
#    echo '</pre>';
#    die;
    $options = array();
    if (!empty($field['settings']['handler_settings']['target_bundles'])) {
      $target_bundles = $field['settings']['handler_settings']['target_bundles'];
    }
    else {
      // By default, entity reference assumes that all bundles are enabled.
      $target_bundles = array_keys(node_type_get_types());
    }
    foreach ($target_bundles as $content_type) {
      $options[$content_type] = t(node_type_get_name($content_type));
    }
    $default_options = array();
    if (isset($instance['settings']['behaviors']['node_links'])) {
      foreach ($instance['settings']['behaviors']['node_links']['content_types'] as $content_type) {
        if ($content_type) {
          $default_options[] = $content_type;
        }
      }
    }
    $form['content_types'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Content Types'),
      '#options' => $options,
      '#default_value' => $default_options,
      '#description' => t('Select the content types that will have create links for this type.'),
    );
    return $form;
  }
}
