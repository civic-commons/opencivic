<?php
/**
 * @file
 * opencivic_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function opencivic_blog_node_info() {
  $items = array(
    'oc_blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('A blog post.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_views_api().
 */
function opencivic_blog_views_api() {
  return array(
    'api' => '3.0',
  );
}
