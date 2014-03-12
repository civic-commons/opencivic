<?php

/**
 * Entity UI controller for the local task item entity.
 */
class TMGMTLocalTaskItemUIController extends EntityDefaultUIController {

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $id_count = count(explode('/', $this->path));
    $items[$this->path . '/%tmgmt_local_task/item/%tmgmt_local_task_item'] = array(
      'title callback' => 'entity_label',
      'title arguments' => array($this->entityType, $id_count + 2),
      'page callback' => 'tmgmt_local_task_item_view',
      'page arguments' => array($id_count + 2),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('view', $this->entityType, $id_count + 2),
      'file' => 'tmgmt_local.pages.inc',
      'file path' => drupal_get_path('module', 'tmgmt_local') . '/includes',
    );
    return $items;
  }

}
