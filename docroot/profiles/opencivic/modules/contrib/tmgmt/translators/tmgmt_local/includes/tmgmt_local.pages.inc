<?php

/**
 * @file
 * Provides page and forms callbacks.
 */

/**
 * Simple page callback for viewing a task.
 *
 * @param TMGMTJob $task
 *   The viewed task.
 *
 * @return array
 *   A renderable array.
 */
function tmgmt_local_task_view(TMGMTLocalTask $task) {
  return entity_view($task->entityType(), array($task), 'full', NULL, TRUE);
}

/**
 * Entity API form the local task entity.
 */
function tmgmt_local_task_form($form, &$form_state, TMGMTLocalTask $task, $op = 'edit') {
  $wrapper = entity_metadata_wrapper('tmgmt_local_task', $task);

  // Set the title of the page to the label and the current status of the task.
  drupal_set_title(t('@label (@status)', array('@label' => $task->label(), '@status' => $wrapper->status->label())));

  // Check if the translator entity is completely new or not.
  $old = empty($task->is_new) && $op != 'clone';

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title'),
    '#default_value' => $task->title,
    '#access' => user_access('administer tmgmt') || user_access('administer translation tasks'),
  );

  $form['status'] = array(
    '#type' => 'select',
    '#title' => t('Status'),
    '#options' => tmgmt_local_task_statuses(),
    '#default_value' => $wrapper->status->value(),
    '#access' => user_access('administer tmgmt') || user_access('administer translation tasks'),
  );

  $translators = tmgmt_local_translators($task->getJob()->source_language, array($task->getJob()->target_language));
  $form['tuid'] = array(
    '#title' => t('Assigned'),
    '#type' => 'select',
    '#options' => $translators,
    '#empty_option' => t('- Select user -'),
    '#default_value' => $task->tuid,
    '#access' => user_access('administer tmgmt') || user_access('administer translation tasks'),
  );

  if ($view = views_get_view('tmgmt_local_task_items')) {
    $form['items'] = array(
      '#type' => 'item',
      '#title' => $view->get_title(),
      '#prefix' => '<div class="tmgmt-local-task-items">',
      '#markup' => $view->preview('block', array($task->tltid)),
      '#attributes' => array('class' => array('tmgmt-local-task-items')),
      '#suffix' => '</div>',
      '#weight' => 10,
    );
  }

  // Add the buttons and action links.
  $form['actions']['#type'] = 'actions';
  $form['actions']['#access'] = user_access('administer tmgmt') || user_access('administer translation tasks');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save task'),
  );

  if ($old) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#redirect' => 'translate/' . $task->tltid . '/delete',
      // Don't run validations, so the user can always delete the job.
      '#limit_validation_errors' => array(),
    );
  }

  return $form;
}

/**
 * Submit callback for the local task form.
 */
function tmgmt_local_task_form_submit($form, &$form_state) {
  $task = entity_ui_form_submit_build_entity($form, $form_state);
  // If the task isn't assigned to anyone but doesn't have the unassigned status
  // update it.
  if ($task->tuid == 0 && !$task->isUnassigned()) {
    $task->unassign();
  }
  $task->save();
}



/**
 * Simple page callback for viewing a task.
 *
 * @param TMGMTLocalTaskItem $item
 *   The viewed task item
 *
 * @return array
 *   A renderable array.
 */
function tmgmt_local_task_item_view(TMGMTLocalTaskItem $item) {
  return entity_view($item->entityType(), array($item), 'full', NULL, TRUE);
}

/**
 * Assign task to current user.
 *
 * @param TMGMTLocalTask $task
 */
function tmgmt_local_translation_assign_to_me(TMGMTLocalTask $task) {
  $task->assign($GLOBALS['user']);
  $task->save();
  drupal_goto('translate');
}

/**
 * Form callback for translating a job item.
 */
function tmgmt_local_translation_form($form, &$form_state, TMGMTLocalTaskItem $task_item) {
  $form_state['task'] = $task_item->getTask();
  $form_state['task_item'] = $task_item;
  $form_state['job_item'] = $job_item = $task_item->getJobItem();

  $job = $job_item->getJob();

  if ($job->getSetting('job_comment')) {
    $form['job_comment'] = array(
      '#type' => 'item',
      '#title' => t('Job comment'),
      '#markup' => $job->getSetting('job_comment'),
    );
  }

  $form['translation'] = array(
    '#type' => 'container',
  );

  // Build the translation form.
  $data = $job_item->getData();

  // Need to keep the first hierarchy. So flatten must take place inside
  // of the foreach loop.
  $zebra = 'even';
  // Reverse the order to get the correct order.
  foreach (array_reverse(element_children($data)) as $key) {
    $flattened = tmgmt_flatten_data($data[$key], $key);
    $form['translation'][$key] = tmgmt_local_translation_form_element($flattened, $task_item, $zebra);
  }

  // Add the form actions as well.
  $form['actions']['#type'] = 'actions';
  $form['actions']['save_as_completed'] = array(
    '#type' => 'submit',
    '#validate' => array('tmgmt_local_translation_form_save_as_completed_validate'),
    '#submit' => array('tmgmt_local_translation_form_save_submit', 'tmgmt_local_translation_form_save_as_completed_submit'),
    '#value' => t('Save as completed'),
  );
  $form['actions']['save'] = array(
    '#type' => 'submit',
    '#submit' => array('tmgmt_local_translation_form_save_submit'),
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Form validate callback for save as completed submit action.
 *
 * Verify that all items are translated.
 */
function tmgmt_local_translation_form_save_as_completed_validate($form, &$form_state) {
  // Loop over all data items and verify that there is a translation in there.
  foreach ($form_state['values'] as $key => $value) {
    if (is_array($value) && isset($value['translation'])) {
      if (empty($value['translation'])) {
        form_set_error($key . '[translation]', t('Missing translation.'));
      }
    }
  }
}

/**
 * Form submit callback for save as completed submit action.
 *
 * Change items to needs review state and task to completed status.
 */
function tmgmt_local_translation_form_save_as_completed_submit($form, &$form_state) {
  /**
   * @var TMGMTLocalTask $task.
   */
  $task = $form_state['task'];

  /**
   * @var TMGMTLocalTaskItem $task_item.
   */
  $task_item = $form_state['task_item'];
  $task_item->completed();
  $task_item->save();

  // Mark the task as completed if all assigned job items are at needs done.
  $all_done = TRUE;
  foreach ($task->getItems() as $item) {
    if ($item->isPending()) {
      $all_done = FALSE;
      break;
    }
  }
  if ($all_done) {
    $task->setStatus(TMGMT_LOCAL_TASK_STATUS_COMPLETED);
    // If the task is now completed, redirect back to the overview.
    $form_state['redirect'] = 'translate';
  }
  else {
    // If there are more task items, redirect back to the task.
    $uri = $task->uri();
    $form_state['redirect'] = $uri['path'];
  }

  /**
   * @var TMGMTJobItem $job_item.
   */
  $job_item = $form_state['job_item'];

  // Add the translations to the job item.
  $job_item->addTranslatedData($task_item->getData());
}

/**
 * Form submit callback for save action.
 *
 * Saves all items.
 */
function tmgmt_local_translation_form_save_submit($form, &$form_state) {
  /**
   * @var TMGMTTaskItem $task_item.
   */
  $task_item = $form_state['task_item'];

  // Write the translated data into the task item.
  form_state_values_clean($form_state);
  foreach ($form_state['values'] as $key => $value) {
    if (is_array($value) && isset($value['translation'])) {
      $update['#text'] = $value['translation'];
      $task_item->updateData($key, $update);
    }
  }
  $task_item->save();

  $task = $form_state['task'];
  $uri = $task->uri();
  $form_state['redirect'] = $uri['path'];
}

/**
 * Builds a translation form element.
 */
function tmgmt_local_translation_form_element($data, TMGMTLocalTaskItem $item, &$zebra) {
  static $flip = array(
    'even' => 'odd',
    'odd' => 'even',
  );

  $form = array();

  $job = $item->getJobItem()->getJob();
  $language_list = language_list();

  foreach (element_children($data) as $key) {
    if (isset($data[$key]['#text']) && _tmgmt_filter_data($data[$key])) {
      // The char sequence '][' confuses the form API so we need to replace it.
      $target_key = str_replace('][', '|', $key);
      $zebra = $flip[$zebra];
      $form[$target_key] = array(
        '#tree' => TRUE,
        '#ajaxid' => drupal_html_id('tmgmt-local-element-' . $key),
        '#theme' => 'tmgmt_local_translation_form_element',
        '#parent_label' => $data[$key]['#parent_label'],
        '#zebra' => $zebra,
      );

      $source_language = $language_list[$job->source_language];
      $target_language = $language_list[$job->target_language];

      $form[$target_key]['source'] = array(
        '#type' => 'textarea',
        '#title' => $source_language->name,
        '#value' => $data[$key]['#text'],
        '#disabled' => TRUE,
      );

      $form[$target_key]['translation'] = array(
        '#type' => 'textarea',
        '#title' => $target_language->name,
        '#default_value' => $item->getData(tmgmt_ensure_keys_array($key), '#text'),
        //'#required' => TRUE,
      );

      $form[$target_key]['actions'] = array(
        '#type' => 'container',
      );
      $status = $item->getData(tmgmt_ensure_keys_array($key), '#status');
      $completed = $status == TMGMT_DATA_ITEM_STATE_TRANSLATED;
      if ($completed) {
        $form[$target_key]['actions']['reject-' . $target_key] = array(
          '#type' => 'submit',
          // Unicode character &#x2717 BALLOT X
          '#value' => '✗',
          '#attributes' => array('title' => t('Reject')),
          '#name' => 'reject-' . $target_key,
          '#submit' => array('tmgmt_local_translation_form_update_state_submit'),
          '#ajax' => array(
            'callback' => 'tmgmt_local_translation_form_update_state_ajax',
            'wrapper' => $form[$target_key]['#ajaxid'],
          ),
          '#tmgmt_local_action' => 'reject',
          '#tmgmt_local_key' => str_replace('][', '|', $key),
        );
      }
      else {
        $form[$target_key]['actions']['finish-' . $target_key] = array(
          '#type' => 'submit',
          // Unicode character &#x2713 CHECK MARK
          '#value' => '✓',
          '#attributes' => array('title' => t('Finish')),
          '#name' => 'finish-' . $target_key,
          '#submit' => array('tmgmt_local_translation_form_update_state_submit'),
          '#ajax' => array(
            'callback' => 'tmgmt_local_translation_form_update_state_ajax',
            'wrapper' => $form[$target_key]['#ajaxid'],
          ),
          '#tmgmt_local_action' => 'finish',
          '#tmgmt_local_key' => str_replace('][', '|', $key),
        );
      }
    }
  }

  return $form;
}

/**
 * Form submit callback for the translation state update button.
 */
function tmgmt_local_translation_form_update_state_submit($form, &$form_state) {
  $values = $form_state['values'];

  /**
   * @var TMGMTLocalTaskItem $item.
   */
  $item = $form_state['task_item'];

  $action = $form_state['triggering_element']['#tmgmt_local_action'];
  $key = $form_state['triggering_element']['#tmgmt_local_key'];

  // Write the translated data into the job item.
  if (isset($values[$key]) && is_array($values[$key]) && isset($values[$key]['translation'])) {
    $update['#status'] = $action == 'finish' ? TMGMT_DATA_ITEM_STATE_TRANSLATED : TMGMT_DATA_ITEM_STATE_PENDING;
    $update['#text'] = $values[$key]['translation'];
    $item->updateData($key, $update);
    $item->save();

    // We need to rebuild form so we get updated action button state.
    $form_state['rebuild'] = TRUE;
  }
}

/**
 * Ajax callback for the job item review form.
 */
function tmgmt_local_translation_form_update_state_ajax($form, &$form_state) {
  $key = array_slice($form_state['triggering_element']['#array_parents'], 0, 3);
  $commands = array();
  $render_data = drupal_array_get_nested_value($form, $key);
  $commands[] = ajax_command_replace(NULL, drupal_render($render_data));
  tmgmt_ui_write_request_messages($form_state['job_item']->getJob());
  $commands[] = ajax_command_html('#tmgmt-status-messages-' . strtolower($render_data['#parent_label'][0]), theme('status_messages'));
  return array('#type' => 'ajax', '#commands' => $commands);
}

/**
 * Form for assigning multiple tasks to translator.
 *
 * @param array $form
 * @param array $form_state
 * @param string $tasks
 *  Comma separated tasks ids.
 *
 * @return array
 *   Drupal form definition.
 */
function tmgmt_local_translation_assign_form($form, &$form_state, $tasks) {
  $form_state['tasks'] = explode(',', $tasks);

  $form['tuid'] = array(
    '#title' => t('Assign to'),
    '#type' => 'select',
    '#empty_option' => t('Select user'),
    '#options' => tmgmt_local_get_translators_for_tasks($form_state['tasks']),
    '#required' => TRUE,
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Assign tasks'),
  );

  return $form;
}

/**
 * Submit handler for form for assigning multiple tasks to translator.
 */
function tmgmt_local_translation_assign_form_submit($form, &$form_state) {
  $translator = user_load($form_state['values']['tuid']);

  $how_many = 0;
  foreach ($form_state['tasks'] as $task_id) {
    $task = tmgmt_local_task_load($task_id);
    if ($task) {
      $task->assign($translator);
      $task->save();
      ++$how_many;
    }
  }

  drupal_set_message(t('Assigned @how_many to translator @translator_name.', array('@how_many' => $how_many, '@translator_name' => $translator->name)));

  $form_state['redirect'] = 'manage-translate';
}

/**
 * Similar to form for assigning multiple tasks to translator, but here we also
 * allow no user selection.
 *
 * @see tmgmt_local_translation_assign_form().
 */
function tmgmt_local_translation_reassign_form($form, &$form_state, $tasks) {
  $form_state['tasks'] = explode(',', $tasks);

  $form['tuid'] = array(
    '#title' => t('Assign to'),
    '#type' => 'select',
    '#empty_option' => t('Select user'),
    '#options' => tmgmt_local_get_translators_for_tasks($form_state['tasks']),
  );

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Reassign tasks'),
  );

  return $form;
}

/**
 * Submit handler for form for reassigning multiple tasks to translator.
 */
function tmgmt_local_translation_reassign_form_submit($form, &$form_state) {

  if (!empty($form_state['values']['tuid'])) {
    $translator = user_load($form_state['values']['tuid']);
  }
  else {
    $translator = (object) array('uid' => 0, 'name' => t('none'));
  }

  $how_many = 0;
  foreach ($form_state['tasks'] as $task_id) {
    $task = tmgmt_local_task_load($task_id);
    if ($task) {
      if ($translator->uid) {
        $task->assign($translator);
      }
      else {
        $task->unassign();
      }
      $task->save();
      ++$how_many;
    }
  }

  drupal_set_message(t('Reassigned @how_many to translator @translator_name.', array('@how_many' => $how_many, '@translator_name' => $translator->name)));

  $form_state['redirect'] = 'manage-translate';
}
