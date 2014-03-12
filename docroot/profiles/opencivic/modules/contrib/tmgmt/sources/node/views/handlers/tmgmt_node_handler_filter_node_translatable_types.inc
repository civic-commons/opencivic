<?php

/**
 * @file
 * Contains tmgmt_node_ui_handler_filter_node_translatable_types.
 */

/**
 * Limits node types to those enabled for content translation.
 */
class tmgmt_node_ui_handler_filter_node_translatable_types extends views_handler_filter {

  /**
   * {@inheritdoc}
   */
  function query() {
    $this->ensure_my_table();
    $valid_types = array_keys(tmgmt_source_translatable_item_types('node'));
    $this->query->add_where($this->options['group'], "$this->table_alias.$this->real_field", array_values($valid_types), 'IN');
  }

  /**
   * {@inheritdoc}
   */
  function admin_summary() { }
}
