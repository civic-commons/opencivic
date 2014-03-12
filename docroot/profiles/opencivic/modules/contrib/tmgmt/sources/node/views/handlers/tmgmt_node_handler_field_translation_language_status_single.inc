<?php

/**
 * @todo What is this?
 */
class tmgmt_node_handler_field_translation_language_status_single extends views_handler_field {

  /**
   * @var tmgmt_node_handler_field_translation_language_status
   */
  var $main_handler;

  /**
   * @var string
   */
  var $langcode;

  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->additional_fields['nid'] = 'nid';
  }

  function render($values) {
    $nid = $values->nid;
    $langcode = $this->langcode;

    // Check if this is the source language.
    if ($langcode == $values->node_language) {
      $translation_status = 'original';
    }
    // Check if there is a translation.
    elseif (!isset($this->view->field[$this->main_field]->language_items[$nid][$langcode])) {
      $translation_status = 'missing';
    }
    // Check if the translation is outdated.
    elseif (!$this->view->field[$this->main_field]->language_items[$nid][$langcode]) {
      $translation_status = 'outofdate';
    }
    else {
      $translation_status = 'current';
    }

    $job_item = NULL;

    if (isset($this->view->field[$this->main_field]->active_job_items[$nid][$langcode])) {
      $job_item = $this->view->field[$this->main_field]->active_job_items[$nid][$langcode];
    }

    return theme('tmgmt_ui_translation_language_status_single', array(
      'translation_status' => $translation_status,
      'job_item' => $job_item,
    ));
  }

  function query() {
    $this->add_additional_fields();
  }

}
