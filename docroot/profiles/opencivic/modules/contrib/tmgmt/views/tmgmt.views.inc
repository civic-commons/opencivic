<?php

/**
 * @file
 * Contains Views controllers for the translation management module.
 */

/**
 * Implements hook_views_data().
 */
function tmgmt_views_data() {
  $data = array();
  foreach (tmgmt_source_views_controller() as $controller) {
    $data += $controller->views_data();
  }
  return $data;
}

/**
 * Views controller class for the job item entity.
 */
class TMGMTJobItemViewsController extends EntityDefaultViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();
    $data['tmgmt_job_item']['label'] = array(
      'title' => t('Label'),
      'help' => t('Displays a label of the job item.'),
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_entity_label',
      ),
    );
    $data['tmgmt_job_item']['type'] = array(
      'title' => t('Type'),
      'help' => t('Displays a type of the job item.'),
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_type',
      ),
    );
    $data['tmgmt_job_item']['progress'] = array(
      'title' => t('Progress'),
      'help' => t('Displays the progress of a job item.'),
      'real field' => 'tjiid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_progress',
      ),
    );
    $data['tmgmt_job_item']['operations'] = array(
      'title' => t('Operations'),
      'help' => t('Displays a list of options which are available for a job item.'),
      'real field' => 'tjiid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_operations',
      ),
    );
    return $data;
  }

}

/**
 * Views controller class for the job entity.
 */
class TMGMTJobViewsController extends EntityDefaultViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();
    $data['tmgmt_job']['operations'] = array(
      'title' => t('Operations'),
      'help' => t('Displays a list of options which are available for a job.'),
      'real field' => 'tjid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_operations',
      ),
    );
    $data['tmgmt_job']['progress'] = array(
      'title' => t('Progress'),
      'help' => t('Displays the progress of a job.'),
      'real field' => 'tjid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_progress',
      ),
    );
    $data['tmgmt_job']['word_count'] = array(
      'title' => t('Word count'),
      'help' => t('Displays the word count of a job.'),
      'real field' => 'tjid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_wordcount',
      ),
    );
    $data['tmgmt_job']['label']['field']['handler'] = 'tmgmt_handler_field_tmgmt_entity_label';
    $data['tmgmt_job']['translator']['field']['handler'] = 'tmgmt_handler_field_tmgmt_translator';
    $data['tmgmt_job']['job_item'] = array(
      'title' => t('Job items'),
      'help' => t('Get the job items of the job'),
      'relationship' => array(
        'base' => 'tmgmt_job_item',
        'base field' => 'tjid',
        'real field' => 'tjid',
        'label' => t('Job items'),
      ),
    );
    $data['tmgmt_job']['item_count'] = array(
      'title' => t('Job item count'),
      'help' => t('Show the amount of job items per job (per job item status)'),
      'real field' => 'tjid',
      'field' => array(
        'handler' => 'tmgmt_handler_field_tmgmt_job_item_count',
      ),
    );
    return $data;
  }

}
/**
 * Views controller class for the job message entity.
 */
class TMGMTMessageViewsController extends EntityDefaultViewsController {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    $data = parent::views_data();
    $data['tmgmt_message']['message']['field']['handler'] = 'tmgmt_handler_field_tmgmt_message_message';
    return $data;
  }

}

interface TMGMTSourceViewsControllerInterface extends TMGMTPluginBaseInterface {

  /**
   * Defines the result for hook_views_data().
   */
  public function views_data();

}

/**
 * Vies controller class for source plugins.
 */
class TMGMTDefaultSourceViewsController extends TMGMTPluginBase implements TMGMTSourceViewsControllerInterface {

  /**
   * {@inheritdoc}
   */
  public function views_data() {
    // @todo Implement this in a generic fashion.
    /* $key = $this->pluginInfo['something'];
    $data[$key]['tmgmt_translatable_types'] = array(
      'title' => t('Translatable types'),
      'help' => t('Filter translatable elements based on their types.'),
      'filter' => array(
        'handler' => 'views_handler_filter_in_operator',
        'real field' => 'type',
        'options callback' => 'tmgmt_source_translatable_item_types',
        'options arguments' => array($this->pluginType),
      ),
    ); */
    return array();
  }

}
