<?php
/**
 * @file
 * Implementation of OpenLayers behavior.
 */

/**
 * OpenLayers Editor Behavior
 */
class openlayers_behavior_ole extends openlayers_behavior {
  /**
   * Provide initial values for options.
   */
  function options_init() {
    return array(
      'processing_controls' => array(),
      'editing_controls' => array(),
      'other_controls' => array(),
    );
  }

  function options_form($defaults = array()) {

    $form = array();

    $check = variable_get('ole_version_check', '');
    if (empty($check)) {
      $form['version_check'] = array(
        '#markup' => t('OpenLayers Editor version check failed. Please review the !settings.',
          array('!settings' => l(t('OpenLayers Editor settings'), 'admin/structure/openlayers/editor'))),
      );
    }

    $form['processing_controls'] = array(
      '#title' => t('Processing Controls'),
      '#type' => 'checkboxes',
      '#options' => array(
        'MergeFeature' => t('Merge features (requires PostGIS)'),
        'SplitFeature' => t('Split features (requires PostGIS)'),
        'CleanFeature' => t('Clean features (requires PostGIS)'),
        'DeleteFeature' => t('Delete features'),
        'ImportFeature' => t('Import features'),
      ),
      '#description' => t('Select what controls are available for processing.'),
      '#default_value' => isset($defaults['processing_controls']) ? $defaults['processing_controls'] : array(),
    );
    $form['editing_controls'] = array(
      '#title' => t('Editing Controls'),
      '#type' => 'checkboxes',
      '#options' => array(
        'DragFeature' => t('Drag features'),
        'DrawHole' => t('Draw hole'),
        'ModifyFeature' => t('Modify features'),
      ),
      '#description' => t('Select what controls are available for editing.'),
      '#default_value' => isset($defaults['editing_controls']) ? $defaults['editing_controls'] : array(),
    );
    $form['other_controls'] = array(
      '#title' => t('Other Controls'),
      '#type' => 'checkboxes',
      '#options' => array(
       'Navigation' => t('Navigation'),
        'UndoRedo' => t('Undo / redo'),
        'LayerSettings' => t('Layer settings'),
        'SnappingSettings' => t('Snapping settings'),
      ),
      '#description' => t('Select what other controls are available.'),
      '#default_value' => isset($defaults['other_controls']) ? $defaults['other_controls'] : array(),
    );
    $form['feature_types'] = array(
      '#title' => t('Available Features'),
      '#type' => 'checkboxes',
      '#options' => array(
        'point' => t('Point'),
        'path' => t('Path'),
        'polygon' => t('Polygon'),
      ),
      '#description' => t('Select what features are available to draw.'),
      '#default_value' => isset($defaults['feature_types']) ? $defaults['feature_types'] : array(),
    );
    $form['feature_limit'] = array(
      '#title' => t('Number of features'),
      '#type' => 'textfield',
      '#description' => t('The number of features that are allowed to be drawn. Leave blank or at 0 for unlimited.'),
      '#default_value' => isset($defaults['feature_limit']) ? $defaults['feature_limit'] : 0,
    );
    $form['element_id'] = array(
        '#type' => 'textfield',
        '#default_value' => (isset($defaults['element_id'])) ? $defaults['element_id'] : '',
        '#title' => t('Element ID'),
        '#description' => t('The DOM element ID that will be passed the value of the features.  This will probably be a textfield or textarea.'),
    );

    return $form;
  }

  function js_dependency() {
    return array();
  }

  /**
   * Render.
   */
  function render(&$map) {
    drupal_add_css(drupal_get_path('module', 'ole') . '/includes/openlayers_behavior_ole.css');

    drupal_add_js(drupal_get_path('module', 'ole') . '/includes/openlayers_behavior_ole.js');

    ole_include();

    return $this->options;
  }
}
