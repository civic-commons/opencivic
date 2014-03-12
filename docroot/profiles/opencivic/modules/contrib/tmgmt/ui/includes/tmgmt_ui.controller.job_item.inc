<?php

/**
 * @file
 * Contains the job item UI controller.
 */

/**
 * Entity UI controller for the Job Entity.
 */
class TMGMTJobItemUIController extends EntityDefaultUIController {

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $id_count = count(explode('/', $this->path));
    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%entity_object';
    $items[$this->path . '/' . $wildcard] = array(
      'title callback' => 'entity_label',
      'title arguments' => array($this->entityType, $id_count),
      'page callback' => 'tmgmt_ui_job_item_view',
      'page arguments' => array($id_count),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('view', 'tmgmt_job_item', $id_count),
      'file' => $this->entityInfo['admin ui']['file'],
      'file path' => $this->entityInfo['admin ui']['file path'],
    );
    $items[$this->path . '/' . $wildcard . '/view'] = array(
      'title' => 'View',
      'load arguments' => array($this->entityType),
      'type' => MENU_DEFAULT_LOCAL_TASK,
      'weight' => -10,
    );
    $items[$this->path . '/' . $wildcard . '/reject/%'] = array(
      'title' => 'Reject',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('tmgmt_ui_translation_review_form_reject_confirm', $id_count, $id_count + 2),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('accept', $this->entityType, $id_count),
      'type' => MENU_VISIBLE_IN_BREADCRUMB,
      'file' => $this->entityInfo['admin ui']['file'],
      'file path' => $this->entityInfo['admin ui']['file path'],
    );
    $items[$this->path . '/' . $wildcard . '/delete'] = array(
      'page callback' => 'drupal_get_form',
      'page arguments' => array($this->entityType . '_operation_form', $this->entityType, $id_count, $id_count + 1),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('delete', $this->entityType, $id_count),
      'type' => MENU_CALLBACK,
    );
    $items[$this->path . '/' . $wildcard . '/accept'] = array(
      'page callback' => 'drupal_get_form',
      'page arguments' => array($this->entityType . '_operation_form', $this->entityType, $id_count, $id_count + 1),
      'load arguments' => array($this->entityType),
      'access callback' => 'entity_access',
      'access arguments' => array('accept', $this->entityType, $id_count),
      'type' => MENU_CALLBACK,
    );
    return $items;
  }

  /**
   * {@inheritdoc}
   */
  public function operationForm($form, &$form_state, $entity, $op) {
    $controller = $entity->getSourceController();
    $info = $controller->pluginInfo();
    switch ($op) {
      case 'delete':
        $confirm_question = t('Are you sure you want to delete the %plugin translation job item for %label?', array('%plugin' => $info['label'], '%label' => $entity->label()));
        return confirm_form($form, $confirm_question, $this->path);
      case 'accept':
        $confirm_question = t('Are you sure you want to accept the %plugin translation job item for %label?', array('%plugin' => $info['label'], '%label' => $entity->label()));
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
        return t('The translation job item %label has been deleted.', array('%label' => $entity->label()));
      case 'accept':
        $entity->accepted('The translation job item has been accepted by !user.', array('!user' => theme('username', array('account' => $GLOBALS['user']))));
        return t('The translation job item %label has been accepted.', array('%label' => $entity->label()));
    }
    return FALSE;
  }

}
