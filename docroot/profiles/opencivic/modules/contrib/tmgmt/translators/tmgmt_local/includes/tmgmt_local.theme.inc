<?php

/**
 * Renders a tables containing a group of data items belonging to the same field.
 */
function theme_tmgmt_local_translation_form($variables) {
  $result = '';

  // Get through all available translations.
  $translation = $variables['element']['translation'];
  foreach (element_children($translation) as $children_name) {
    $children = $translation[$children_name];
    $result .= drupal_render($children);
  }

  // We have rendered translation children so lets remove them.
  unset($variables['element']['translation']);

  // Render the rest of elements(form actions, CSRF tokens, etc.)
  $result .= drupal_render_children($variables['element']);

  return $result;
}

/**
 * Renders a table for one data item.
 */
function theme_tmgmt_local_translation_form_element($variables) {
  // Theme table which contains source, translation and action state button.
  $element = $variables['element'];

  $parts = explode('|', $element['#parents'][0]);
  $header_title = ucfirst(str_replace('_', ' ', $parts[0]));

  // Container for ajax messages.
  $result = '<div id="tmgmt-status-messages-' . strtolower($element['#parent_label'][0]) . '"></div>';

  $result .= theme('table', array(
    'attributes' => array('id' => $element['#ajaxid'], 'class' => array($element['#zebra'])),
    'header' => array(array(
      'data' => $header_title,
      'colspan' => 3,
    )),
    'rows' => array(
      array(
        'data' => array(
          drupal_render($element['source']),
          drupal_render($element['translation']),
          drupal_render($element['actions']),
        ),
      ),
    ),
  ));

  return $result;
}
