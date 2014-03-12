<?php

/**
 * @file
 * Theme files for Date iCal.
 */

/**
 * Preprocess an iCal feed
 */
function template_preprocess_date_ical_vcalendar(&$variables) {
  $view = $variables['view'];
  $view_title = $view->get_title();

  $title = variable_get('site_name', 'Drupal');
  if ($slogan = variable_get('site_slogan', '')) {
    $title .= ' - ' . $slogan;
  }
  $title .= !empty($view_title) ? ': ' . $view_title : '';

  $variables['title'] = check_plain($title);

  // During live preview we don't want to output the header since the contents
  // of the feed are being displayed inside a normal HTML page.
  if (empty($variables['view']->live_preview)) {

    // Keep devel module from appending queries to ical export.
    $GLOBALS['devel_shutdown'] = FALSE;
    drupal_add_http_header('Content-Type', 'application/calendar; charset=utf-8');
  }
}

/**
 * Default theme function for all iCal rows.
 */
function template_preprocess_date_ical_vevent(&$variables) {
  $view     = &$variables['view'];
  $options  = &$variables['options'];
  $item     = &$variables['row'];
}
