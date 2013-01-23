<?php
/**
 * @file
 * This is the file description for Template module.
 *
 * In this more verbose, multi-line description, you can specify what this
 * file does exactly. Make sure to wrap your documentation in column 78 so
 * that the file can be displayed nicely in default-sized consoles.
 */

/**
 * Implements hook_wysiwyg_editor_settings_alter().
 */
function cat_lover_admin_wysiwyg_editor_settings_alter(&$settings, $context) {
 if($context['profile']->editor == 'ckeditor') {
   $settings['height'] = 100;
 }
}

function cat_lover_admin_form_element_label($variables) {
  $element = $variables['element'];

  if (
    ($element['#parents'][0] != 'field_problem_category' 
    && $element['#parents'][0] != 'field_application_softfunction'
    && $element['#parents'][0] != 'field_sanitation_category')
    || !isset($element['#parents'][2])) {
   return theme_form_element_label($variables);
  }
  $term = taxonomy_term_load($element['#parents'][2]);
  $icon = theme('image', array(
    'path' => $term->field_small_icon['und'][0]['uri'],
    'alt' => '',
    'title' => NULL,
  ));

  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . '<span class="category-checkbox-icon">' . $icon . '</span><span class="category-checkbox-text">' . $t('!title !required', array('!title' => $title, '!required' => $required)) . "</span></label>\n";
}

