<?php
/**
 * @file
 * opencivic_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opencivic_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_event_node_info() {
  $items = array(
    'oc_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An <b>Event</b> could be a local hackathon or any other event with a time, place and date where people meet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
