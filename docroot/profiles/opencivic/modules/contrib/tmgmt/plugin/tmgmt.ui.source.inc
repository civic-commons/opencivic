<?php


/**
 * Default ui controller class for source plugin.
 *
 * @ingroup tmgmt_source
 */
class TMGMTDefaultSourceUIController extends TMGMTPluginBase implements TMGMTSourceUIControllerInterface {

  /**
   * {@inheritdoc}
   */
  public function reviewForm($form, &$form_state, TMGMTJobItem $item) {
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function reviewDataItemElement($form, &$form_state, $data_item_key, $parent_key, array $data_item, TMGMTJobItem $item) {
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function reviewFormValidate($form, &$form_state, TMGMTJobItem $item) {
    // Nothing to do here by default.
  }

  /**
   * {@inheritdoc}
   */
  public function reviewFormSubmit($form, &$form_state, TMGMTJobItem $item) {
    // Nothing to do here by default.
  }

  /**
   * {@inheritdoc}
   */
  public function overviewForm($form, &$form_state, $type) {
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function overviewFormValidate($form, &$form_state, $type) {
    // Nothing to do here by default.
  }

  /**
   * {@inheritdoc}
   */
  public function overviewFormSubmit($form, &$form_state, $type) {
    // Nothing to do here by default.
  }

  /**
   * {@inheritdoc}
   */
  public function hook_menu() {
    $items = array();
    if ($types = tmgmt_source_translatable_item_types($this->pluginType)) {
      $defaults = array(
        'page callback' => 'drupal_get_form',
        'access callback' => 'tmgmt_job_access',
        'access arguments' => array('create'),
      );
      if (isset($this->pluginInfo['file'])) {
        $defaults['file'] = $this->pluginInfo['file'];
      }
      if (isset($this->pluginInfo['file path'])) {
        $defaults['file path'] = $this->pluginInfo['file path'];
      }
      foreach ($types as $type => $name) {
        $items['admin/tmgmt/sources/' . $this->pluginType . '_' . $type] = $defaults + array(
          'title' => check_plain($name),
          'page arguments' => array('tmgmt_ui_' . $this->pluginType . '_source_' . $type . '_overview_form', $this->pluginType, $type),
          'type' => MENU_LOCAL_TASK,
        );
      }
    }
    return $items;
  }

  /**
   * {@inheritdoc}
   */
  public function hook_forms() {
    $info = array();
    if ($types = tmgmt_source_translatable_item_types($this->pluginType)) {
      foreach (array_keys($types) as $type) {
        $info['tmgmt_ui_' . $this->pluginType . '_source_' . $type . '_overview_form'] = array(
          'callback' => 'tmgmt_ui_source_overview_form',
          'wrapper_callback' => 'tmgmt_ui_source_overview_form_defaults',
        );
      }
    }
    return $info;
  }

  /**
   * {@inheritdoc}
   */
  public function hook_views_default_views() {
    return array();
  }

}
