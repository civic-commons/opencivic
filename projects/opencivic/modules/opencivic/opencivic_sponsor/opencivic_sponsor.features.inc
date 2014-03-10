<?php
/**
 * @file
 * opencivic_sponsor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_sponsor_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function opencivic_sponsor_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: sponsors
  $nodequeues['sponsors'] = array(
    'qid' => 1,
    'name' => 'sponsors',
    'title' => 'Sponsors',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'add to sponsors list',
    'link_remove' => 'remove from sponsors list',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'oc_sponsor',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function opencivic_sponsor_image_default_styles() {
  $styles = array();

  // Exported image style: sponsor_logo.
  $styles['sponsor_logo'] = array(
    'name' => 'sponsor_logo',
    'effects' => array(
      4 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 210,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function opencivic_sponsor_node_info() {
  $items = array(
    'oc_sponsor' => array(
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

/**
 * Implements hook_views_api().
 */
function opencivic_sponsor_views_api() {
  return array(
    'api' => '3.0',
  );
}
