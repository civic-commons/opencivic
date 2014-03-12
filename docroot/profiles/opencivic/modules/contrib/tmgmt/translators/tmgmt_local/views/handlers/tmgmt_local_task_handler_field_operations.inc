<?php

/**
 * Field handler which shows the operations for a task.
 *
 * @todo Remove this once http://drupal.org/node/1435662 is through.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_local_task_handler_field_operations extends views_handler_field_entity {

  function render($values) {
    /**
     * @var TMGMTLocalTask $task
     */
    $task = $this->get_value($values);

    $element = array();
    $element['#theme'] = 'links';
    $element['#attributes'] = array('class' => array('links', 'inline'));
    $uri = $task->uri();
    if (entity_access('view', 'tmgmt_local_task', $task)) {
      $element['#links']['view'] = array(
        'href' => $uri['path'],
        'query' => array('destination' => current_path()),
        'title' => t('view'),
      );
    }
    if (user_access('administer translation tasks') && tmgmt_local_translation_access($task) && empty($task->tuid)) {
      $element['#links']['assign'] = array(
        'href' => 'manage-translate/assign-tasks/' . $task->tltid,
        'query' => array('destination' => current_path()),
        'attributes' => array(
          'title' => t('Assign'),
        ),
        'title' => t('assign'),
      );
    }
    elseif (tmgmt_local_translation_access($task) && empty($task->tuid)) {
      $element['#links']['assign_to_me'] = array(
        'href' => 'translate/' . $task->tltid . '/assign-to-me',
        'query' => array('destination' => current_path()),
        'attributes' => array(
          'title' => t('Assign to me'),
        ),
        'title' => t('assign'),
      );
    }
    elseif (tmgmt_local_translation_access($task) && empty($task->tuid)) {
      $element['#links']['assign_to_me'] = array(
        'href' => 'translate/' . $task->tltid . '/assign-to-me',
        'query' => array('destination' => current_path()),
        'attributes' => array(
          'title' => t('Assign to me'),
        ),
        'title' => t('assign'),
      );
    }
    if (!empty($task->tuid) && entity_access('unassign', 'tmgmt_local_task', $task)) {
      $element['#links']['unassign'] = array(
        'href' => 'translate/' . $task->tltid . '/unassign',
        'query' => array('destination' => current_path()),
        'attributes' => array(
          'title' => t('Unassign'),
        ),
        'title' => t('unassign'),
      );
    }
    if (entity_access('delete', 'tmgmt_local_task', $task)) {
      $element['#links']['delete'] = array(
        'href' => $uri['path'] . '/delete',
        'query' => array('destination' => current_path()),
        'title' => t('delete'),
      );
    }
    return drupal_render($element);
  }

}
