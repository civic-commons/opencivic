<?php

/**
 * @file
 * Rules integration.
 */

/**
 * Implements hook_rules_action_info().
 */
function tmgmt_local_rules_action_info() {
  $info['tmgmt_local_rules_task_assign'] = array(
    'label' => t('Assign translation task'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'task' => array(
        'type' => 'tmgmt_local_task',
        'label' => t('Translation task'),
        'description' => t('The translation task that should be assigned to the configured user.'),
      ),
      'user' => array(
        'type' => 'user',
        'label' => t('user'),
        'description' => t('The assigned user.'),
      ),
    ),
  );
  $info['tmgmt_local_rules_task_unassign'] = array(
    'label' => t('Unassign translation task'),
    'group' => t('Translation Management'),
    'parameter' => array(
      'task' => array(
        'type' => 'tmgmt_local_task',
        'label' => t('Translation task'),
        'description' => t('The translation task which will be unassigned.'),
      ),
    ),
  );

  return $info;
}

/**
 * Rules callback to assign a translation task to translator.
 */
function tmgmt_local_rules_task_assign(TMGMTLocalTask $task, stdClass $translator) {
  $task->assign($translator);
  $task->save();
}

/**
 * Rules callback to unassign a translation task.
 */
function tmgmt_local_rules_task_unassign(TMGMTLocalTask $task) {
  $task->unassign();
  $task->save();
}
