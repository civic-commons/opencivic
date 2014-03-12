<?php

/**
 * Field handler which shows all jobs which contains a node.
 *
 * @TODO: This could probably abstracted into a more generic handler,
 * or even api function.
 */
class tmgmt_node_ui_handler_field_jobs extends views_handler_field_prerender_list {
  function pre_render(&$values) {
    $nids = array();
    foreach ($values as $row) {
      $nid = $this->get_value($row);
      $nids[] = $nid;
    }

    $select = db_select('tmgmt_job', 'tj');
    $select->join('tmgmt_job_item', 'tji', "tj.id = %alias.tjid");
    $select->join('node', 'n', "tji.item_type = 'node' AND tji.plugin = 'node' AND tji.item_id = node.nid");
    $select->addField('n', 'nid');
    $select->addExpression('MAX(tj.id)');

    dpq($select);
  }

}
