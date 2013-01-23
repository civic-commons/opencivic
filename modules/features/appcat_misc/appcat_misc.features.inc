<?php
/**
 * @file
 * appcat_misc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_misc_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function appcat_misc_image_default_styles() {
  $styles = array();

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

  return $styles;
}
