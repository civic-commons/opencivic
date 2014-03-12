<?php

/**
 * @file
 * Contains the tmgmt_handler_field_tmgmt_job_item_count field handler.
 */

/**
 * Field handler to show the amount of job items per job.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_item_count extends views_handler_field {
  /**
   * @var views_plugin_query_default
   */
  var $query;

  function option_definition() {
    $options = parent::option_definition();
    $options['state'] = array('default' => '');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $options = array('' => t('- All -'));
    $options += tmgmt_job_item_states();
    $form['state'] = array(
      '#title' => t('Job item status'),
      '#description' => t('Count only job items of a certain status.'),
      '#type' => 'select',
      '#options' => $options,
      '#default_value' => $this->options['state'],
    );
  }

  function use_group_by() {
    return FALSE;
  }


  function query() {
    $this->ensure_my_table();

    // Therefore construct the join.
    $join = new views_join();
    $join->definition['left_table'] = $this->table_alias;
    $join->definition['left_field'] = $this->real_field;
    $join->definition['table'] = 'tmgmt_job_item';
    $join->definition['field'] = 'tjid';
    $join->definition['type'] = 'LEFT';

    if (!empty($this->options['state'])) {
      $join->extra = array(array(
        'field' => 'state',
        'value' => $this->options['state']
      ));
    }
    $join->construct();

    // Add the join to the tmgmt_job_item table.
    $this->table_alias = $this->query->add_table('tmgmt_job_item', $this->relationship, $join);

    // And finally add the count of the job items field.
    $params = array('function' => 'count');
    $this->field_alias = $this->query->add_field($this->table_alias, 'tjiid', NULL, $params);

    $this->add_additional_fields();
  }
}
