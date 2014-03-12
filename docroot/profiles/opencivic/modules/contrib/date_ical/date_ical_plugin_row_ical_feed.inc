<?php

/**
 * @file
 * Contains the iCal row style plugin.
 */

/**
 * Plugin which creates a view on the resulting object
 * and formats it as an iCal VEVENT.
 */
class date_ical_plugin_row_ical_feed extends views_plugin_row {

  // Basic properties that let the row style follow relationships.
  var $base_table = 'node';
  var $base_field = 'nid';

  // Stores the nodes loaded with pre_render.
  var $entities = array();

  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
    $this->base_table = $view->base_table;
    $this->base_field = $view->base_field;
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['date_field'] = array('default' => array());
    return $options;
  }

  /**
   * Provide a form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $data = date_views_fields($this->base_table);
    $options = array();
    foreach ($data['name'] as $item => $value) {
      // We only want to see one value for each field, skip '_value2', and other columns.
      if ($item == $value['fromto'][0]) {
        $options[$item] = $value['label'];
      }
    }
    $form['date_field'] = array(
      '#type' => 'select',
      '#title' => t('Date field'),
      '#options' => $options,
      '#default_value' => $this->options['date_field'],
      '#description' => t('Please identify the field to use as the iCal date for each item in this view. Add a Date Filter or a Date Argument to the view to limit results to content in a specified date range.'),
      '#required' => TRUE,
      '#prefix' => t("The entity label will be used as the 'summary' and the entity view will be used as the 'description' for the iCal event. To control the description, hide or show fields for the iCal view mode on the 'Display Fields' screen. Keep in mind that any html in the entity view will be stripped out in the feed, to comply with the iCal standards."),
    );
  }

  function pre_render($values) {
    // @TODO When the date is coming in through a relationship, the nid
    // of the view is not the right node to use, then we need the related node.
    // Need to sort out how that should be handled.

    // Preload each entity used in this view from the cache.
    // Provides all the entity values relatively cheaply, and we don't
    // need to do it repeatedly for the same entity if there are
    // multiple results for one entity.
    $ids = array();
    foreach ($values as $row) {
      // Use the $id as the key so we don't create more than one value per entity.
      $id = $row->{$this->field_alias};

      // Node revisions need special loading.
      if ($this->view->base_table == 'node_revision') {
        $this->entities[$id] = node_load(NULL, $id);
      }
      // For other entities we just create an array of ids to pass
      // to entity_load().
      else {
        $ids[$id] = $id;
      }
    }

    $base_tables = date_views_base_tables();
    $this->entity_type = $base_tables[$this->view->base_table];
    if (!empty($ids)) {
      $this->entities = entity_load($this->entity_type, $ids);
    }

    // Get the language for this view.
    $this->language = $this->display->handler->get_option('field_language');
    $substitutions = views_views_query_substitutions($this->view);
    if (array_key_exists($this->language, $substitutions)) {
      $this->language = $substitutions[$this->language];
    }
  }

  function render($row) {
    global $base_url;
    $id = $row->{$this->field_alias};
    if (!is_numeric($id)) {
      return;
    }

    // Load the specified entity:
    $entity = $this->entities[$id];
    if (empty($entity)) {
      return;
    }

    $data = date_views_fields($this->base_table);
    $info = $data['name'][$this->options['date_field']];
    $field_name  = str_replace(array('_value', '_value2'), '', $info['real_field_name']);
    $table_name  = $info['table_name'];
    $delta_field = $info['delta_field'];
    $is_field    = $info['is_field'];

    // This is ugly and hacky but I can't figure out any generic way to
    // recognize that the node module is going to give some the revision timestamp
    // a different field name on the entity than the actual column name in the database.
    if ($this->view->base_table == 'node_revision' && $field_name == 'timestamp') {
      $field_name = 'revision_timestamp';
    }

    // Identify the field value that matched our query.
    $item = $entity->$field_name;

    $entity->date_id = array();
    $start = NULL;
    $end   = NULL;
    if ($is_field) {
      $lang = $entity->language;
      $delta = isset($row->$delta_field) ? $row->$delta_field : 0;
      $item = array_key_exists($lang, $item) ? $item[$lang][$delta] : $item['und'][$delta];
      $entity->date_id[] = 'calendar.' . $entity->nid . '.' . $field_name . '.' . $delta;

      if (!empty($item['value'])) {
        $start = new dateObject($item['value'], $item['timezone_db']);
        if (array_key_exists('value2', $item)) {
          $end = new dateObject($item['value2'], $item['timezone_db']);
        }
        else {
          $end = clone $start;
        }
      }
    }
    elseif (!$is_field && !empty($item)) {
      $start = new dateObject($item, $item['timezone_db']);
      $end   = new dateObject($item, $item['timezone_db']);
    }

    // If we don't have an iCal date value, go no further.
    if (empty($start)) {
      return;
    }

    // Set the item date to the proper display timezone;
    $start->setTimezone(new dateTimezone($item['timezone']));
    $end->setTimezone(new dateTimezone($item['timezone']));

    $start_formatted = $start->format(DATE_FORMAT_DATETIME);
    $end_formatted = $end->format(DATE_FORMAT_DATETIME);

    $all_day = date_is_all_day($start_formatted, $end_formatted, date_granularity_precision($info['granularity']));

    // According to RFC 2445 (clarified in RFC 5545) the DTEND value is
    // non-inclusive.  When it is a DATE rather than a DATETIME, this means
    // that we should add one day to its value.
    if ($all_day) {
      $end->modify("+1 day");
    }

    module_load_include('inc', 'date_api', 'date_api_ical');
    $item_text = '';

    // Create the rendered display using the display settings from the 'iCal' view mode.
    $rendered_array = entity_view($this->entity_type, array($entity), 'ical', $this->language, TRUE);
    $item_text = drupal_render($rendered_array);

    $event = array();
    $event['summary'] = date_ical_escape_text(entity_label($this->entity_type, $entity));
    $event['all_day'] = $all_day;
    $event['start'] = $start->format($all_day ? DATE_FORMAT_ICAL_DATE : DATE_FORMAT_ICAL);
    $event['end'] = $end->format($all_day ? DATE_FORMAT_ICAL_DATE : DATE_FORMAT_ICAL);
    $event['description'] = date_ical_escape_text(($item_text));
    $uri = entity_uri($this->entity_type, $entity);
    $uri['options']['absolute'] = TRUE;
    $event['url'] = url($uri['path'], $uri['options']);
    $event['uid'] = !empty($entity->date_id) ? $entity->date_id[0] : $event['url'];
    $event['rrule'] = $is_field && array_key_exists('rrule', $item) ? $item['rrule'] : '';

    return theme($this->theme_functions(),
      array(
        'view' => $this->view,
        'options' => $this->options,
        'event' => $event
      ));
  }
}
