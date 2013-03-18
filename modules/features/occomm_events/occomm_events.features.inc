<?php
/**
 * @file
 * occomm_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function occomm_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function occomm_events_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function occomm_events_node_info() {
  $items = array(
    'event' => array(
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
