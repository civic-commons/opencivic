<?php

/**
 * @file
 * Theme file stub for tmgmt.
 */

/**
 * Generic theme function for use with Render API.
 *
 * Renders the #title and #attributes properties if they are present.
 */
function theme_tmgmt_ui_element($variables) {
  $element = $variables['element'];

  // Use the #title attribute.
  $title = '';
  if (!empty($element['#title'])) {
    $title = '<h3>' . check_plain($element['#title']) . '</h3>';
  }

  // Use #attributes to customize a wrapper <div>.
  $attributes = '';
  if (!empty($element['#attributes'])) {
    $attributes = drupal_attributes($element['#attributes']);
  }

  // Render any child items.
  if (!$element['#children']) {
    $element['#children'] = drupal_render_children($element);
  }

  // Build simple output.
  $output = "<div{$attributes}>{$title}{$element['#children']}</div>";
  return $output;
}

/**
 * Gets translation language status.
 *
 * @param array $variables
 *   - 'translation_status': A flag that determines the status. Possible values:
 *     original, missing, outofdate.
 *   - 'job_item': Current job item entity associated with translation.
 *
 * @return string
 *   Icon or a link icon that explains the translation status and possibly
 *   links to an active translation job.
 */
function theme_tmgmt_ui_translation_language_status_single($variables) {
  switch ($variables['translation_status']) {
    case 'original':
      $label = t('Source language');
      $icon_color = 'tmgmt-ui-icon-white';
      break;

    case 'missing':
      $label = t('Not translated');
      $icon_color = 'tmgmt-ui-icon-grey';
     break;

    case 'outofdate':
      $label = t('Translation Outdated');
      $icon_color = 'tmgmt-ui-icon-orange';
      break;

    default:
      $label = t('Translation up to date');
      $icon_color = 'tmgmt-ui-icon-green';
  }

  // Add classes to show the correct html icon.
  $classes = array();
  $classes[] = 'tmgmt-ui-icon';
  // Icon size 10px square.
  $classes[] = 'tmgmt-ui-icon-10';
  $classes[] = $icon_color;

  // Add necessary css file.
  drupal_add_css(drupal_get_path('module', 'tmgmt_ui') . '/css/tmgmt_ui.admin.css');

  $status = sprintf('<div class="%s" title="%s"><span></span></div>', implode(' ', $classes), $label);

  // If we have an active job item, wrap it in a link.
  if (!empty($variables['job_item'])) {
    $wrapper = entity_metadata_wrapper('tmgmt_job_item', $variables['job_item']);
    $label = t('Active job item: @state', array('@state' => $wrapper->state->label()));

    switch ($variables['job_item']->state) {
      case TMGMT_JOB_ITEM_STATE_ACTIVE:
        $icon_color = 'tmgmt-ui-icon-blue';
        break;

      case TMGMT_JOB_ITEM_STATE_REVIEW:
        $icon_color = 'tmgmt-ui-icon-yellow';
        break;
    }

    // Add classes to show the correct html icon.
    $classes = array();
    $classes[] = 'tmgmt-ui-icon';
    // Icon size 10px square.
    $classes[] = 'tmgmt-ui-icon-10';
    $classes[] = $icon_color;

    $job_status = sprintf('<div class="%s" title="%s"><span></span></div>', implode(' ', $classes), $label);

    $uri = $variables['job_item']->uri();
    $status .= l($job_status, $uri['path'], array(
      'query' => array('destination' => current_path()),
      'html' => TRUE,
      'attributes' => array('title' => $label),
    ));
  }
  return $status;
}

/**
 * Renders a data item status as an HTML/CSS icon.
 */
function theme_tmgmt_ui_translator_review_form_element_status($variables) {
  $classes = array();
  $classes[] = 'tmgmt-ui-icon';
  $classes[] = 'tmgmt-ui-icon-32'; // Icon size 32px square.
  switch ($variables['status']['#value']) {
    case TMGMT_DATA_ITEM_STATE_ACCEPTED:
      $title = t('Accepted');
      // Unicode character U+2611 BALLOT BOX WITH CHECK.
      $icon = '&#x2611;';
      $classes[] = 'tmgmt-ui-icon-darkgreen';
      $classes[] = 'tmgmt-ui-state-accepted';
      break;
    case TMGMT_DATA_ITEM_STATE_REVIEWED:
      $title = t('Reviewed');
      // Unicode character U+2611 BALLOT BOX WITH CHECK.
      $icon = '&#x2611;';
      $classes[] = 'tmgmt-ui-icon-green';
      $classes[] = 'tmgmt-ui-state-reviewed';
      break;
    case TMGMT_DATA_ITEM_STATE_TRANSLATED:
      $title = t('Translated');
      // Unicode character U+2610 BALLOT BOX.
      $icon = '&#x2610;';
      $classes[] = 'tmgmt-ui-icon-yellow';
      $classes[] = 'tmgmt-ui-state-translated';
      break;
    case TMGMT_DATA_ITEM_STATE_PENDING:
    default:
      $title = t('Pending');
      // Just an empty icon without a sign.
      $icon = '';
      $classes[] = 'tmgmt-ui-icon-grey';
      $classes[] = 'tmgmt-ui-state-pending';
      break;
  }
  return sprintf('<div class="%s" title="%s"><span>%s</span></div>', implode(' ', $classes), $title, $icon);
}

/**
 * Render one single data item as a table row.
 */
function theme_tmgmt_ui_translator_review_form_element($variables) {
  $element = $variables['element'];
  // Label of all element groups.
  if (!isset($element['#top_label'])) {
    $element['#top_label'] = array_shift($element['#parent_label']);
  }
  // Label of the current data item.
  if (!isset($element['#leave_label'])) {
    $element['#leave_label'] = array_pop($element['#parent_label']);
  }
  // Do not repeat labels inside the same hierarchy.
  if ($element['#top_label'] == $element['#leave_label']) {
    $element['#leave_label'] = '';
  }
  $result = '<tr' . drupal_attributes(array('class' => $element['#zebra'])) . '>';
  $row = array();
  $leaf_label = '<label>' . $element['#leave_label'] . '</label>';
  $leaf_label = '<div class="form-item form-type-label">' . $leaf_label . '</div>';
  $row[] = array(
    'data' => $leaf_label . '<div class="tmgmt-ui-state">' . drupal_render($element['status']) . '</div>',
    'class' => 'tmgmt-ui-data-item-label',
  );
  $row[] = array(
    'data' => drupal_render($element['source']),
    'class' => 'tmgmt-ui-data-item-source',
  );
  $row[] = array(
    'data' => drupal_render($element['translation']),
    'class' => 'tmgmt-ui-data-item-translation',
  );
  $row[] = array(
    'data' => drupal_render($element['actions']),
    'class' => 'tmgmt-ui-data-item-actions',
  );
  foreach ($row as $cell) {
    $result .= _theme_table_cell($cell);
  }
  $result .= '</tr>';

  if (!empty($element['below'])) {
    $result .= '<tr' . drupal_attributes(array('class' => $element['#zebra'])) . '>';
    $result .= _theme_table_cell(array(
      'data' => drupal_render($element['below']),
      'colspan' => '4',
    ));
    $result .= '</tr>';
  }

  return $result;
}

/**
 * Renders a table containing a group of data items belonging to the same field.
 */
function theme_tmgmt_ui_translator_review_form($variables) {
  $element = $variables['element'];
  $result = '';
  $labels = '';
  $parent_label = '';
  $element_groups = array();
  $element_group = '';
  foreach (element_children($element) as $key) {
    // Label of all element groups.
    $parent_label = array_shift($element[$key]['#parent_label']);
    $element[$key]['#top_label'] = $parent_label;
    $element[$key]['#leave_label'] = array_pop($element[$key]['#parent_label']);
    // Start a new element group.
    if ($labels != $element[$key]['#parent_label']) {
      $labels = $element[$key]['#parent_label'];
      if (!empty($labels)) {
        // Append to previous group to the group collection.
        if (!empty($element_group)) {
          $element_groups[] = '<tbody>' . $element_group . '</tbody>';
        }
        // Header row for the current element group.
        $cell = array(
          // @todo: Deal with right to left languages.
          'data' => check_plain(implode(t(' > '), $labels)),
          'colspan' => 4,
        );
        $element_group = '<tr>' . _theme_table_cell($cell, TRUE) . '</tr>';
      }
    }
    $element_group .= drupal_render($element[$key]);
  }

  // Append the last group to the group collection.
  $element_groups[] = '<tbody>' . $element_group . '</tbody>';

  // Display the label of all element groups inside a table header.
  if (!empty($parent_label)) {
    $cell = array(
      'data' => $parent_label,
      'colspan' => 5,
    );
    $result = '<thead><tr>' . _theme_table_cell($cell, TRUE) . '</tr></thead>' . implode('', $element_groups);
  }
  $table = '<table class="tmgmt-ui-review"><colgroup width="100" /><colgroup width="*" span="2" /><colgroup width="100" />' . $result . '</table>';
  return '<div id="' . $element['#ajaxid'] . '">' . $table . '</div>';
}

/**
 * Adds a description to the translator entity on the entity overview form.
 *
 * @see theme_entity_ui_overview_item()
 */
function theme_tmgmt_ui_translator_overview_item($variables) {
  $output = theme('entity_ui_overview_item', $variables);
  if (!empty($variables['description'])) {
    $output = '<div class="tmgmt-ui-translator-label-wrapper">' . $output . '<div class="description">' . $variables['description'] . '</div></div>';
  }
  return $output;
}

/**
 * Theme callback for adding the tabledrag to the translator entity overview
 * form.
 */
function theme_tmgmt_ui_translator_overview_form($variables) {
  $form = $variables['form'];
  $colspan = !empty($form['#entity_info']['exportable']) ? 4 : 3;
  $rows = array();
  $header = array(
    t('Label'),
    t('Plugin'),
    t('Configured'),
    t('Status'),
    array('data' => t('Operations'), 'colspan' => $colspan),
    t('Weight'),
  );
  foreach (element_children($form) as $key) {
    $row = array();
    $form[$key]['weight']['#attributes']['class'] = array('tmgmt-ui-translator-weight');
    $row[] = drupal_render($form[$key]['label']);
    $row[] = drupal_render($form[$key]['plugin']);
    $row[] = drupal_render($form[$key]['configured']);
    $row[] = drupal_render($form[$key]['status']);
    $operations = element_children($form[$key]['operations']);
    foreach ($operations as $op) {
      $row[] = array('data' => $form[$key]['operations'][$op]);
    }
    $row[] = drupal_render($form[$key]['weight']);
    $rows[] = array('data' => $row, 'class' => array('draggable'));
  }
  drupal_add_tabledrag('tmgmt-ui-translator-overview', 'order', 'sibling', 'tmgmt-ui-translator-weight');
  return theme('table', array('header' => $header, 'rows' => $rows, 'empty' => t('None.'), 'attributes' => array('id' => 'tmgmt-ui-translator-overview')));
}
