<?php

/**
 * @file
 * Rules integration.
 */

/**
 * {@inheritdoc}
 */
function tmgmt_rules_action_info() {
  $info['tmgmt_rules_job_request_translation'] = array(
    'label' => t('Request Job translation'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'job' => array(
        'type' => 'tmgmt_job',
        'label' => t('Translation Job'),
        'description' => t('The translation job for which translations should be requested.'),
      ),
    ),
  );
  $info['tmgmt_rules_job_accept_translation'] = array(
    'label' => t('Accept Job translation'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'job' => array(
        'type' => 'tmgmt_job',
        'label' => t('Translation Job'),
        'description' => t('The translation job for which translations should be accepted.'),
      ),
      'message' => array(
        'type' => 'text',
        'label' => t('An optional message'),
        'description' => t('Will be stored in the job message and displayed to the user.'),
        'optional' => TRUE,
      ),
    ),
  );
  $info['tmgmt_rules_job_cancel_translation'] = array(
    'label' => t('Cancel translation job'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'job' => array(
        'type' => 'tmgmt_job',
        'label' => t('Translation Job'),
        'description' => t('The translation job that should be canceled.'),
      ),
    ),
  );
  $info['tmgmt_rules_job_checkout'] = array(
    'label' => t('Checkout a job'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'job' => array(
        'type' => 'tmgmt_job',
        'label' => t('Translation Job'),
        'description' => t('The translation job that should be checked out.'),
      ),
    ),
  );
  $info['tmgmt_get_first_from_node_list'] = array(
    'label' => t('Get first item from a list of nodes'),
    'group' => t('Data'),
    'parameter' => array(
      'list' => array(
        'type' => 'list<node>',
        'label' => t('List'),
        'restriction' => 'selector',
      ),
    ),
    'provides' => array(
      'first_node' => array(
        'type' => 'node',
        'label' => t('Node'),
      ),
    ),
  );
  $info['tmgmt_rules_create_job'] = array(
    'label' => t('Create a job for a given source language'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'source_language' => array(
        'type' => 'text',
        'label' => t('Source Language'),
        'description' => t('The language from which should be translated'),
        'options list' => 'entity_metadata_language_list',
      ),
    ),
    'provides' => array(
      'job' => array(
        'label' => t('Job'),
        'type' => 'tmgmt_job',
      ),
    ),
  );
  $info['tmgmt_rules_job_add_item'] = array(
    'label' => t('Add an item to a job'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'job' => array(
        'type' => 'tmgmt_job',
        'label' => t('Translation Job'),
        'description' => t('The translation job that should be canceled.'),
      ),
      'plugin' => array(
        'type' => 'token',
        'label' => t('Source plugin'),
        'description' => t('The source plugin of this item'),
        //'options list' => 'entity_metadata_language_list',
      ),
      'item_type' => array(
        'type' => 'token',
        'label' => t('Item type'),
        'description' => t('The item type'),
        //'options list' => 'entity_metadata_language_list',
      ),
      'item_id' => array(
        'type' => 'text',
        'label' => t('Item ID'),
        'description' => t('ID of the referenced item'),
      ),
    ),
  );
  return $info;
}

/**
 * Rules callback to request a translation of a job.
 */
function tmgmt_rules_job_request_translation(TMGMTJob $job) {
  if ($job->isTranslatable()) {
    $job->requestTranslation();
  }
}

/**
 * Rules callback to accept a translation of a job.
 */
function tmgmt_rules_job_accept_translation(TMGMTJob $job, $message) {
  foreach ($job->getItems() as $item) {
    if ($item->isNeedsReview()) {
      $item->acceptTranslation();
    }
  }
}

/**
 * Rules callback to cancel a translation job.
 */
function tmgmt_rules_job_cancel_translation(TMGMTJob $job) {
  $job->cancelTranslation();
}

/**
 * Rules callback to redirect to a translation job.
 */
function tmgmt_rules_job_checkout(TMGMTJob $job) {
  $redirects = tmgmt_ui_job_checkout_multiple(array($job));
  // If necessary, do a redirect.
  if ($redirects) {
    tmgmt_ui_redirect_queue_set($redirects, current_path());
    drupal_goto(tmgmt_ui_redirect_queue_dequeue());

    // Count of the job messages is one less due to the final redirect.
    drupal_set_message(format_plural(count($redirects), t('One job needs to be checked out.'), t('@count jobs need to be checked out.')));
  }
}

/**
 * Rules callback to get the job for a specific language combination.
 */
function tmgmt_rules_create_job($source_language) {
  return array(
    'job' => tmgmt_job_create($source_language, ''),
  );
}

/**
 * Rules callback to add an item to a job.
 */
function tmgmt_rules_job_add_item(TMGMTJob $job, $plugin, $item_type, $item_id) {
  try {
    $job->addItem($plugin, $item_type, $item_id);
  }
  catch (TMGMTException $e) {
    watchdog_exception('tmgmt', $e);
    drupal_set_message(t('Unable to add job item of type %type with id %id. Make sure the source content is not empty.',
      array('%type' => $item_type, '%id' => $item_id)), 'error');
  }
}

/**
 * Rules action to extract the first node from a node list.
 */
function tmgmt_get_first_from_node_list($list) {
  return array(
    'first_node' => reset($list),
  );
}
