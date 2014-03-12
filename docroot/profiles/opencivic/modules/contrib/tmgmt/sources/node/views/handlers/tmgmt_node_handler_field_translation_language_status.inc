<?php

/**
 * Field handler to display the status of all languages.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_node_handler_field_translation_language_status extends views_handler_field {

  /**
   * @var views_plugin_query_default
   */
  var $query;

  /**
   * @var array
   */
  public $language_items;

  /**
   * Array of active job items.
   *
   * @var array
   */
  public $active_job_items = array();

  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->view->init_style();
    $this->additional_fields['nid'] = 'nid';

    /**
     * Dynamically add new fields so they are used
     */
    $languages = language_list('language');
    foreach ($languages as $langcode => $lang_info) {
      $handler = views_get_handler($this->table, $this->field . '_single', 'field');
      if ($handler) {
        $id = $options['id'] . '_single_' . $langcode;
        $this->view->display_handler->handlers['field'][$id] = $handler;
        $info = array(
          'id' => $id,
          'table' => $this->table,
          'field' => $this->field . '_single',
          'label' => $lang_info->name,
        );
        $handler->langcode = $langcode;
        $handler->main_field = $options['id'];
        $handler->init($this->view, $info);
        $this->language_handlers[$langcode] = $handler;
      }
    }
  }

  function pre_render(&$values) {
    $nids = array();
    foreach ($values as $value) {
      $tnid = $this->get_value($value);
      $tnid = !empty($tnid) ? $tnid : $this->get_value($value, 'nid');
      $this->active_job_items[$tnid] = tmgmt_job_item_load_latest('node', 'node', $tnid, $value->node_language);
      $nids[] = $tnid;
    }
    if ($nodes = node_load_multiple($nids)) {
      $result = db_select('node', 'n')
        ->fields('n', array('tnid', 'language', 'translate'))
        ->condition('tnid', $nids)
        ->execute()
        ->fetchAll();

      $this->language_items = array();
      foreach ($result as $tnode) {
        // The translate flag is set if the translation node is outdated, revert
        // to have FALSE for outdated translations.
        $this->language_items[$tnode->tnid][$tnode->language] = !$tnode->translate;
      }

    }
  }

}
