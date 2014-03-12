<?php

/**
 * Entity UI controller for the local task entity.
 */
class TMGMTLocalTaskUIController extends EntityDefaultUIController {

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';
    $items[$this->path . '/' . $wildcard] = array(
      'title callback' => 'entity_label',
      'title arguments' => array($this->entityType, $id_count),
      'page callback' => 'tmgmt_local_task_view',
      'page arguments' => array($id_count),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('view', $this->entityType, $id_count),
      'file' => 'tmgmt_local.pages.inc',
      'file path' => drupal_get_path('module', 'tmgmt_local') . '/includes',
    );
    $items[$this->path . '/' . $wildcard . '/delete'] = array(
      'page callback' => 'drupal_get_form',
      'page arguments' => array($this->entityType . '_operation_form', $this->entityType, $id_count, $id_count + 1),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('delete', $this->entityType, $id_count),
      'type' => MENU_CALLBACK,
    );
    $items[$this->path . '/' . $wildcard . '/unassign'] = array(
      'page callback' => 'drupal_get_form',
      'page arguments' => array($this->entityType . '_operation_form', $this->entityType, $id_count, $id_count + 1),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('unassign', $this->entityType, $id_count),
      'type' => MENU_CALLBACK,
    );
    return $items;
  }

  /**
   * {@inheritdoc}
   */
  public function operationForm($form, &$form_state, $entity, $op) {
    switch ($op) {
      case 'delete':
        $confirm_question = t('Are you sure you want to delete the translation task %label?', array('%label' => $entity->label()));
        return confirm_form($form, $confirm_question, $this->path);
      case 'unassign':
        $confirm_question = t('Are you sure you want to unassign from the translation task %label?', array('%label' => $entity->label()));
        return confirm_form($form, $confirm_question, $this->path);
    }
    drupal_not_found();
    exit;
  }

  /**
   * {@inheritdoc}
   */
  public function applyOperation($op, $entity) {
    switch ($op) {
      case 'delete':
        $entity->delete();
        return t('Deleted the translation local task %label.', array('%label' => $entity->label()));
      case 'unassign':
        $entity->unassign();
        $entity->save();
        return t('Unassigned from translation local task %label.', array('%label' => $entity->label()));
    }
    return FALSE;
  }

}
