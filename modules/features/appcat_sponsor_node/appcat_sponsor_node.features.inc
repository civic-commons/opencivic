<?php
/**
 * @file
 * appcat_sponsor_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_sponsor_node_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function appcat_sponsor_node_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function appcat_sponsor_node_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: sponsors
  $nodequeues['sponsors'] = array(
    'qid' => '1',
    'name' => 'sponsors',
    'title' => 'Sponsors',
    'subqueue_title' => '',
    'size' => '0',
    'link' => 'add to sponsors list',
    'link_remove' => 'remove from sponsors list',
    'owner' => 'nodequeue',
    'show_in_ui' => '1',
    'show_in_tab' => '1',
    'show_in_links' => '1',
    'reference' => '0',
    'reverse' => '0',
    'i18n' => '0',
    'subqueues' => '1',
    'types' => array(
      0 => 'sponsor',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function appcat_sponsor_node_node_info() {
  $items = array(
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('Information about website sponsors.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
