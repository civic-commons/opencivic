<?php
/**
 * @file
 * Provide views data and handlers for prepopulate_create_node_links.module
 */

/**
 * @{
 */

/**
 * Implements hook_views_data_alter().
 */
function prepopulate_create_node_links_views_data_alter(&$data) {
  $links = _prepopulate_create_node_links_views_data_alter_links();

  if (!empty($links)) {
    foreach ($links as $content_type => $info) {
      $target_type = $info['target_type'];
      $field_name = $info['field_name'];
      // Obtain the field name from the query.
      $label = $content_type . '_' . $field_name . '_create_link';
      $data['node'][$label]['moved to'] = array('views_entity_node', $label);
      $data['views_entity_node'][$label] = array(
        'field' => array(
          'title' => t('Create referencing @content_type link', array('@content_type' => $content_type)),
          'help' => t('Provide a simple link to create a @content_type.', array('@content_type' => $content_type)),
          'handler' => 'views_handler_field_prepopulate_create_node_links',
        ),
      );
    }
  }
}

/**
 * Links helper function.
 */
function _prepopulate_create_node_links_views_data_alter_links() {
  $content_types = array_keys(node_type_get_types());
  $fields = field_info_instances('node');
  $links = array();

  foreach ($fields as $content_type => $field) {
    foreach ($field as $field_name => $instance) {
      if (empty($instance['settings']['behaviors']['prepopulate']['status'])) {
        // The field doesn't have prepopulate enabled.
        continue;
      }

      if (empty($instance['settings']['behaviors']['node_links']['status'])) {
        // The field doesn't have node links enabled.
        continue;
      }

      if (empty($instance['settings']['behaviors']['node_links']['content_types'])) {
        // The field doesn't have any content types enabled.
        continue;
      }

      foreach ($instance['settings']['behaviors']['node_links']['content_types'] as $target_type) {
        $links[$content_type] = array(
          'field_name' => $field_name,
          'target_type' => $target_type,
        );
      }
    }
  }

  return $links;
}
/**
 * @}
 */
