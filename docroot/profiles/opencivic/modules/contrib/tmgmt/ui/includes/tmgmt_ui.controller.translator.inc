<?php

/**
 * @file
 * Contains the translator UI controller.
 */

/**
 * Entity UI controller for the Translator Entity.
 */
class TMGMTTranslatorUIController extends EntityDefaultUIController {

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $items = parent::hook_menu();
    $items[$this->path . '/add']['title'] = 'Add Translator';
    unset($items[$this->path . '/add']['title callback']);
    unset($items[$this->path . '/add']['title arguments']);
    if (!empty($this->entityInfo['exportable'])) {
      $items[$this->path . '/import']['title'] = 'Import Translator';
      unset($items[$this->path . '/import']['title callback']);
      unset($items[$this->path . '/import']['title arguments']);
    }
    return $items;
  }

  /**
   * {@inheritdoc}
   */
  public function overviewForm($form, &$form_state) {
    $form['translators']['#tree'] = TRUE;
    $form['translators']['#theme'] = 'tmgmt_ui_translator_overview_form';
    $form['translators']['#entity_info'] = $this->entityInfo;
    // Load all translator entities.
    $translators = tmgmt_translator_load_multiple(FALSE);
    foreach ($translators as $key => $translator) {
      $form['translators'][$key] = $this->overviewFormRow(array(), $form_state, $translator, $key);
      $form['translators'][$key]['#translator'] = $translator;
    }
    $form['actions']['#type'] = 'actions';
    $form['actions']['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Save'),
    );
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function overviewFormSubmit($form, &$form_state) {
    // Update image effect weights.
    if (!empty($form_state['values']['translators'])) {
      $translators = tmgmt_translator_load_multiple(array_keys($form_state['values']['translators']));
      foreach ($form_state['values']['translators'] as $key => $item) {
        if (isset($translators[$key])) {
          $translators[$key]->weight = $item['weight'];
          entity_save($this->entityType, $translators[$key]);
        }
      }
    }
  }

  /**
   * Helper method for building a row in the overview form.
   */
  protected function overviewFormRow($form, &$form_state, $entity, $id) {
    $form['#weight'] = isset($form_state['input']['translators']) ? $form_state['input']['translators'][$id]['weight'] : NULL;
    $form['label'] = array(
      '#theme' => 'tmgmt_ui_translator_overview_item',
      '#attached' => array('css' => array(drupal_get_path('module', 'tmgmt_ui') . '/css/tmgmt_ui.admin.css')),
      '#label' => $entity->label(),
      '#name' => !empty($this->entityInfo['exportable']) ? entity_id($this->entityType, $entity) : FALSE,
      '#url' => FALSE,
      '#description' => $entity->description,
      '#entity_type' => $this->entityType,
    );
    // Add a row for the exportable status.
    if (!empty($this->entityInfo['exportable'])) {
      $form['status'] = array(
        '#theme' => 'entity_status',
        '#status' => $entity->{$this->statusKey},
      );
    }
    $wrapper = entity_metadata_wrapper($this->entityType, $entity);
    // Add a column to show the translator plugin via the metadata wrapper.
    $form['plugin'] = array(
      '#markup' => $wrapper->plugin->label(),
      '#status' => $entity->{$this->statusKey},
    );
    $controller = $entity->getController();
    $form['configured'] = array(
      '#markup' => $controller->isAvailable($entity) ? t('Yes') : t('No'),
    );
    $form['weight'] = array(
      '#type' => 'weight',
      '#delta' => 30,
      '#default_value' => $entity->weight,
    );
    // Add operations depending on the status.
    if (entity_has_status($this->entityType, $entity, ENTITY_FIXED)) {
      $form['operations']['clone'] = array(
        '#type' => 'link',
        '#title' => t('clone'),
        '#href' => $this->path . '/manage/' . $id . '/clone',
      );
    }
    else {
      $form['operations']['edit'] = array(
        '#type' => 'link',
        '#title' => t('edit'),
        '#href' => $this->path . '/manage/' . $id,
      );
      if (!empty($this->entityInfo['exportable'])) {
        $form['operations']['clone'] = array(
          '#type' => 'link',
          '#title' => t('clone'),
          '#href' => $this->path . '/manage/' . $id . '/clone',
        );
      }
      if (empty($this->entityInfo['exportable']) || !entity_has_status($this->entityType, $entity, ENTITY_IN_CODE)) {
        $form['operations']['delete'] = array(
          '#type' => 'link',
          '#title' => t('delete'),
          '#href' => $this->path . '/manage/' . $id . '/delete',
          '#options' => array('query' => drupal_get_destination()),
        );
      }
      elseif (entity_has_status($this->entityType, $entity, ENTITY_OVERRIDDEN)) {
        $form['operations']['revert'] = array(
          '#type' => 'link',
          '#title' => t('revert'),
          '#href' => $this->path . '/manage/' . $id . '/revert',
          '#options' => array('query' => drupal_get_destination()),
        );
      }
      else {
        $row[] = '';
      }
    }
    if (!empty($this->entityInfo['exportable'])) {
      $form['operations']['export'] = array(
        '#type' => 'link',
        '#title' => t('export'),
        '#href' => $this->path . '/manage/' . $id . '/export',
      );
    }
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function applyOperation($op, $entity) {
    if ($op == 'delete' && tmgmt_translator_busy($entity->name)) {
      drupal_set_message(t("The translator %translator could not be deleted because it is currently being used by at least one active translation job.", array('%translator' => $entity->label())), 'error');
      return FALSE;
    }
    return parent::applyOperation($op, $entity);
  }

}
