<?php
/**
 * @file
 * opencivic_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opencivic_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_story_node_info() {
  $items = array(
    'oc_story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('More detailed content about the use of a particular app or service in a certain context.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
