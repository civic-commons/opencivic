<?php
/**
 * @file
 * opencivic_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
function opencivic_application_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function opencivic_application_image_default_styles() {
  $styles = array();

  // Exported image style: app_detail_logo.
  $styles['app_detail_logo'] = array(
    'name' => 'app_detail_logo',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 145,
          'height' => 160,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'app_detail_logo',
  );

  // Exported image style: screenshot.
  $styles['screenshot'] = array(
    'name' => 'screenshot',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 630,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'screenshot',
  );

  // Exported image style: small_square_thumbnail.
  $styles['small_square_thumbnail'] = array(
    'name' => 'small_square_thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 55,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'small_square_thumbnail',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function opencivic_application_node_info() {
  $items = array(
    'oc_application' => array(
      'name' => t('Application'),
      'base' => 'node_content',
      'description' => t('An <b>Application</b> is a software project developed to address a particular problem or need, e.g., CiviCRM, Alfresco, Microsoft Office, etc. It can be either proprietary or open source.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
