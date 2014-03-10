<?php

/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 */
function cat_man_do_facetapi_link_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds count to link if one was passed.
  if (isset($variables['count'])) {
    $variables['text'] .= ' ' . theme('facetapi_count', $variables);
  }

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}

/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', and 'options'. See
 *   the l() function for information about these variables.
 *
 * @see l()
 *
 * @ingroup themeable
 */
function cat_man_do_facetapi_link_active($variables) {

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $link_text = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Theme function variables fro accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => TRUE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}

/**
 * Implements hook_form_user_login_alter().
 */
function cat_man_do_form_user_login_alter(&$form, &$form_state) {
  // Form override to move github links around in login form
  if (!empty($form['github_links'])) {
    $form['github_links']['#weight'] = -2;
  }
}

function cat_man_do_preprocess_username(&$vars) {
    //putting back what drupal core messed with
    $vars['name'] = check_plain($vars['name_raw']);
}

// Send certain taxononmy fields in views to alternative template (replacing terms with icons)
function cat_man_do_preprocess_views_view_field(&$vars) {
  $views = array('application_list', 'problems_list', 'projects');
  // Re-enable applications list once icons in place
  $fields = array('field_application_category', 'field_civic_category');
  if (in_array($vars['view']->name, $views) && isset($vars['field']->definition['field_name']) && in_array($vars['field']->definition['field_name'], $fields)) {
    $vars['theme_hook_suggestion'] = 'views_view_field__visual_categories_table';
  }
}

 /**
 * Returns HTML for a feed icon.
 */
function cat_man_do_feed_icon($variables) {
  $text = t('Subscribe to !feed-title', array('!feed-title' => $variables['title']));
  if ($image = theme('image', array('path' => 'misc/feed.png', 'width' => 16, 'height' => 16, 'alt' => $text))) {
    $output = l(t('Sign up to the RSS feed for latest submissions.'), $variables['url'], array('attributes' => array('class' => array('feed-icon'), 'title' => $text)));
    $output .= ' ' . l($image, $variables['url'], array('html' => TRUE, 'attributes' => array('class' => array('feed-icon'), 'title' => $text)));
  }
  return $output;
}
