<?php

/**
 * @file
 * Contains the job entity controller class.
 */

/**
 * Controller class for the job entity.
 *
 * @ingroup tmgmt_job
 */
class TMGMTJobController extends EntityAPIController {

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
    // Since we are deleting one or multiple jobs here we also need to delete
    // the attached job items and messages.
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'tmgmt_job_item')
      ->propertyCondition('tjid', $ids)
      ->execute();
    if (!empty($result['tmgmt_job_item'])) {
      $controller = entity_get_controller('tmgmt_job_item');
      // We need to directly query the entity controller so we can pass on
      // the transaction object.
      $controller->delete(array_keys($result['tmgmt_job_item']), $transaction);
    }
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'tmgmt_message')
      ->propertyCondition('tjid', $ids)
      ->execute();
    if (!empty($result['tmgmt_message'])) {
      $controller = entity_get_controller('tmgmt_message');
      // We need to directly query the entity controller so we can pass on
      // the transaction object.
      $controller->delete(array_keys($result['tmgmt_message']), $transaction);
    }
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'tmgmt_remote')
      ->propertyCondition('tjid', $ids)
      ->execute();
    if (!empty($result['tmgmt_remote'])) {
      $controller = entity_get_controller('tmgmt_remote');
      $controller->delete(array_keys($result['tmgmt_remote']), $transaction);
    }
  }

}
