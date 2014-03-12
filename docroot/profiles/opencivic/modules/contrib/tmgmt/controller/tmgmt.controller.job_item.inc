<?php

/**
 * @file
 * Contains the job item entity controller class.
 */

/**
 * Controller class for the job item entity.
 *
 * @ingroup tmgmt_job
 */
class TMGMTJobItemController extends EntityAPIController {
  /**
   * {@inheritdoc}
   *
   * @todo Eliminate the need to flatten and unflatten the JobItem data.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $entity->changed = REQUEST_TIME;
    $entity->recalculateStatistics();
    return parent::save($entity, $transaction);
  }

  /**
   * {@inheritdoc}
   */
  public function delete($ids, $transaction = NULL) {
    parent::delete($ids, $transaction);
    // Since we are deleting one or multiple job items here we also need to
    // delete the attached messages.
    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'tmgmt_message')
      ->propertyCondition('tjiid', $ids)
      ->execute();
    if (!empty($result['tmgmt_message'])) {
      $controller = entity_get_controller('tmgmt_message');
      // We need to directly query the entity controller so we can pass on
      // the transaction object.
      $controller->delete(array_keys($result['tmgmt_message']), $transaction);
    }

    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'tmgmt_remote')
        ->propertyCondition('tjiid', $ids)
        ->execute();
    if (!empty($result['tmgmt_remote'])) {
      $controller = entity_get_controller('tmgmt_remote');
      $controller->delete(array_keys($result['tmgmt_remote']), $transaction);
    }
  }

  /**
   * {@inheritdoc}
   */
  public function invoke($hook, $entity) {
    // We need to check whether the state of the job is affected by this
    // deletion.
    if ($hook == 'delete' && $job = $entity->getJob()) {
      // We only care for active jobs.
      if ($job->isActive() && tmgmt_job_check_finished($job->tjid)) {
        // Mark the job as finished.
        $job->finished();
      }
    }
    parent::invoke($hook, $entity);
  }

}
