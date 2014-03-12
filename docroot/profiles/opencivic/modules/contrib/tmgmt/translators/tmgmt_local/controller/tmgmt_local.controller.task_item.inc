<?php

/**
 * @file
 * Contains the task item controller.
 */

/**
 * Controller class for the local task entity.
 *
 * @ingroup tmgmt_local_task
 */
class TMGMTLocalTaskItemController extends EntityAPIController {

  /**
   * {@inheritdoc}
   *
   * @todo Eliminate the need to flatten and unflatten the TaskItem data.
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    // Consider everything translated when the job item is translated.
    if ($entity->isCompleted()) {
      $entity->count_untranslated = 0;
      $entity->count_translated = count(tmgmt_flatten_data($entity->data));
      $entity->count_completed = 0;
    }
    // Consider everything completed if the job is completed.
    elseif ($entity->isClosed()) {
      $entity->count_untranslated = 0;
      $entity->count_translated = 0;
      $entity->count_completed = count(tmgmt_flatten_data($entity->data));
    }
    // Count the data item states.
    else {
      // Start with assuming that all data is untranslated, then go through it
      // and count translated data.
      $entity->count_untranslated = count(array_filter(tmgmt_flatten_data($entity->getJobItem()->getData()), '_tmgmt_filter_data'));
      $entity->count_translated = 0;
      $entity->count_completed = 0;
      $this->count($entity->data, $entity);
    }
    return parent::save($entity, $transaction);
  }

  /**
   * Parse all data items recursively and sums up the counters for
   * accepted, translated and pending items.
   *
   * @param $item
   *   The current data item.
   * @param $entity
   *   The job item the count should be calculated.
   */
  protected function count(&$item, $entity) {
    if (!empty($item['#text'])) {
      if (_tmgmt_filter_data($item)) {

        // Set default states if no state is set.
        if (!isset($item['#status'])) {
          $item['#status'] = TMGMT_DATA_ITEM_STATE_UNTRANSLATED;
        }
        switch ($item['#status']) {
          case TMGMT_DATA_ITEM_STATE_TRANSLATED:
            $entity->count_untranslated--;
            $entity->count_translated++;
            break;
        }
      }
    }
    else {
      foreach (element_children($item) as $key) {
        $this->count($item[$key], $entity);
      }
    }
  }

}
