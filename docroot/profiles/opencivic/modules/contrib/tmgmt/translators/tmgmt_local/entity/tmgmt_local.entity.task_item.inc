<?php

/*
 * @file
 * Entity class.
 */

/**
 * Entity class for the local task item entity.
 *
 * @ingroup tmgmt_local_task
 */
class TMGMTLocalTaskItem extends Entity {

  /**
   * Translation local task item identifier.
   *
   * @var int
   */
  public $tltiid;

  /**
   * The task identifier.
   *
   * @var int
   */
  public $tltid;

  /**
   * Translation job item.
   *
   * @var int
   */
  public $tjiid;

  /**
   * Current status of the task.
   *
   * @var int
   */
  public $status;

  /**
   * Translated data and data item status.
   *
   * @var array
   */
  public $data = array();

  /**
   * Counter for all untranslated data items.
   *
   * @var integer
   */
  public $count_untranslated = 0;

  /**
   * Counter for all translated data items.
   *
   * @var integer
   */
  public $count_translated = 0;

  /**
   * Counter for all completed data items.
   *
   * @var integer
   */
  public $count_completed = 0;

  /**
   * {@inheritdoc}
   */
  public function __construct(array $values = array(), $entity_type = 'tmgmt_local_task_item') {
    parent::__construct($values, $entity_type);
  }

  /*
   * {@inheritdoc}
   */
  public function defaultUri() {
    return array('path' => 'translate/' . $this->tltid . '/item/' . $this->tltiid);
  }

  /**
   * {@inheritdoc}
   */
  protected function defaultLabel() {
    if ($job_item = $this->getJobItem()) {
      return $job_item->label();
    }
    return t('Missing job item');
  }

  /**
   * Returns the translation task.
   *
   * @return TMGMTLocalTask
   */
  public function getTask() {
    return entity_load_single('tmgmt_local_task', $this->tltid);
  }

  /**
   * Returns the translation job item.
   *
   * @return TMGMTJobItem
   */
  public function getJobItem() {
    return entity_load_single('tmgmt_job_item', $this->tjiid);
  }

  /**
   * {@inheritdoc}
   */
  public function buildContent($view_mode = 'full', $langcode = NULL) {
    $content = drupal_get_form('tmgmt_local_translation_form', $this);
    return entity_get_controller($this->entityType)->buildContent($this, $view_mode, $langcode, $content);
  }

  /**
   * Returns TRUE if the local task is pending.
   *
   * @return bool
   *   TRUE if the local task item is untranslated.
   */
  public function isPending() {
    return $this->status == TMGMT_LOCAL_TASK_ITEM_STATUS_PENDING;
  }

  /**
   * Returns TRUE if the local task is translated (fully translated).
   *
   * @return bool
   *   TRUE if the local task item is translated.
   */
  public function isCompleted() {
    return $this->status == TMGMT_LOCAL_TASK_ITEM_STATUS_COMPLETED;
  }

  /**
   * Rreturns TRUE if the local task is closed (translated and accepted).
   *
   * @return bool
   *   TRUE if the local task item is translated and accepted.
   */
  public function isClosed() {
    return $this->status == TMGMT_LOCAL_TASK_ITEM_STATUS_CLOSED;
  }

  /**
   * Sets the task item status to completed.
   */
  public function completed() {
    $this->status = TMGMT_LOCAL_TASK_ITEM_STATUS_COMPLETED;
  }

  /**
   * Sets the task item status to closed.
   */
  public function closed() {
    $this->status = TMGMT_LOCAL_TASK_ITEM_STATUS_CLOSED;
  }

  /**
   * Updates the values for a specific substructure in the data array.
   *
   * The values are either set or updated but never deleted.
   *
   * @param $key
   *   Key pointing to the item the values should be applied.
   *   The key can be either be an array containing the keys of a nested array
   *   hierarchy path or a string with '][' or '|' as delimiter.
   * @param $values
   *   Nested array of values to set.
   */
  public function updateData($key, $values = array()) {
    foreach ($values as $index => $value) {
      // In order to preserve existing values, we can not aplly the values array
      // at once. We need to apply each containing value on its own.
      // If $value is an array we need to advance the hierarchy level.
      if (is_array($value)) {
        $this->updateData(array_merge(tmgmt_ensure_keys_array($key), array($index)), $value);
      }
      // Apply the value.
      else {
        drupal_array_set_nested_value($this->data, array_merge(tmgmt_ensure_keys_array($key), array($index)), $value);
      }
    }
  }

  /**
   * Array of translations.
   *
   * The structure is similar to the form API in the way that it is a possibly
   * nested array with the following properties whose presence indicate that the
   * current element is a text that might need to be translated.
   *
   * - #text: The translated text of the corresponding entry in the job item.
   * - #status: The status of the translation.
   *
   * The key can be an alphanumeric string.
   *
   * @param array $key
   *   If present, only the subarray identified by key is returned.
   * @param string $index
   *   Optional index of an attribute below $key.
   *
   * @return array
   *   A structured data array.
   */
  public function getData(array $key = array(), $index = NULL) {
    if (empty($key)) {
      return $this->data;
    }
    if ($index) {
      $key = array_merge($key, array($index));
    }
    return drupal_array_get_nested_value($this->data, $key);
  }

  /**
   * Count of all translated data items.
   *
   * @return
   *   Translated count
   */
  public function getCountTranslated() {
    return $this->count_translated;
  }

  /**
   * Count of all untranslated data items.
   *
   * @return
   *   Translated count
   */
  public function getCountUntranslated() {
    return $this->count_untranslated;
  }

  /**
   * Count of all completed data items.
   *
   * @return
   *   Translated count
   */
  public function getCountCompleted() {
    return $this->count_completed;
  }

}
