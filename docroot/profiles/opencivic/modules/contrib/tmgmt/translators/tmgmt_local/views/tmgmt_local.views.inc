<?php

/**
 * @file
 * Contains Views controllers for the translation management local task module.
 */

/**
 * Views controller class for the local task entity.
 */
class TMGMTLocalTaskViewsController extends EntityDefaultViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();
    $data['tmgmt_local_task']['operations'] = array(
      'title' => t('Operations'),
      'help' => t('Displays a list of operations which are available for a task.'),
      'real field' => 'tltid',
      'field' => array(
        'handler' => 'tmgmt_local_task_handler_field_operations',
      ),
    );
    $data['tmgmt_local_task']['progress'] = array(
      'title' => t('Progress'),
      'help' => t('Displays the progress of a job.'),
      'real field' => 'tltid',
      'field' => array(
        'handler' => 'tmgmt_local_task_handler_field_progress',
      ),
    );
    $data['tmgmt_local_task']['word_count'] = array(
      'title' => t('Word count'),
      'help' => t('Displays the word count of a job.'),
      'real field' => 'tltid',
      'field' => array(
        'handler' => 'tmgmt_local_task_handler_field_wordcount',
      ),
    );
    $data['tmgmt_local_task']['item_count'] = array(
      'title' => t('Job item count'),
      'help' => t('Show the amount of job items per task (per job item status)'),
      'real field' => 'tltid',
      'field' => array(
        'handler' => 'tmgmt_local_task_handler_field_job_item_count',
      ),
    );
    $data['tmgmt_job']['eligible'] = array(
      'title' => t('Eligible'),
      'help' => t('Limit translation tasks to those that the user can translate'),
      'real field' => 'tltid',
      'filter' => array(
        'handler' => 'tmgmt_local_task_handler_filter_eligible',
      ),
    );
    // Manager handlers.
    $data['tmgmt_job']['task'] = array(
      'title' => t('Translation task'),
      'help' => t('Get the translation task of the job'),
      'relationship' => array(
        'base' => 'tmgmt_local_task',
        'base field' => 'tjid',
        'real field' => 'tjid',
        'label' => t('Job'),
      ),
    );

    return $data;
  }

}

/**
 * Views controller class for the translation task item entity.
 */
class TMGMTLocalTaskItemViewsController extends EntityDefaultViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();
    $data['tmgmt_local_task_item']['operations'] = array(
      'title' => t('Operations'),
      'help' => t('Displays a list of operations which are available for a task item.'),
      'real field' => 'tltiid',
      'field' => array(
        'handler' => 'tmgmt_local_task_handler_field_item_operations',
      ),
    );
    return $data;
  }
}
