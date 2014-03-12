<?php

/**
 * Field handler which shows the word count.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_local_task_handler_field_wordcount extends views_handler_field_entity {

  /**
   * Prefetch statistics for all jobs.
   */
  function pre_render(&$values) {
    parent::pre_render($values);

    // In case of jobs, pre-fetch the statistics in a single query and add them
    // to the static cache.
    if ($this->entity_type == 'tmgmt_task') {
      $tltids = array();
      foreach ($values as $value) {
        $tltids[] = $value->tjid;
      }
      tmgmt_local_task_statistics_load($tltids);
    }
  }

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $object = $this->get_value($values);
    return $object->getWordCount();
  }
}
