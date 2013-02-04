<?php
/**
 * @file
 * appcat_application_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_application_content_ctools_plugin_api() {
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
 * Implements hook_image_default_styles().
 */
function appcat_application_content_image_default_styles() {
  $styles = array();

  // Exported image style: app_detail_logo.
  $styles['app_detail_logo'] = array(
    'name' => 'app_detail_logo',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '145',
          'height' => '160',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: screenshot.
  $styles['screenshot'] = array(
    'name' => 'screenshot',
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
          'width' => '630',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: small_square_thumbnail.
  $styles['small_square_thumbnail'] = array(
    'name' => 'small_square_thumbnail',
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
          'width' => '55',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function appcat_application_content_node_info() {
  $items = array(
    'application' => array(
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
