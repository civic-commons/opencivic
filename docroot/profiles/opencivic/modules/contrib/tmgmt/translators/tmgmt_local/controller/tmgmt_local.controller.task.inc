<?php

/**
 * @file
 * Contains the task controller.
 */

/**
 * Controller class for the local task entity.
 *
 * @ingroup tmgmt_local_task
 */
class TMGMTLocalTaskController extends EntityAPIController {

  /**
   * {@inheritdoc}
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $entity->changed = REQUEST_TIME;
    return parent::save($entity, $transaction);
  }

  /**
   * {@inheritdoc}
   */
  public function delete($ids, $transaction = NULL) {
    parent::delete($ids, $transaction);

    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'tmgmt_local_task_item')
      ->propertyCondition('tltid', $ids)
      ->execute();
    if (!empty($result['tmgmt_local_task_item'])) {
      entity_delete_multiple('tmgmt_local_task_item', array_keys($result['tmgmt_local_task_item']));
    }
  }

}
