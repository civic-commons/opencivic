<?php

/**
 * @file
 * Provides the i18n string source controller.
 */

/**
 * Translation plugin controller for i18n strings.
 */
class TMGMTI18nStringSourcePluginController extends TMGMTDefaultSourcePluginController {

  /**
   * {@inheritdoc}
   */
  public function getData(TMGMTJobItem $job_item) {
    $i18n_object = $this->getI18nObjectWrapper($job_item);
    $structure = array();
    if ($i18n_object instanceof i18n_string_object_wrapper) {
      $i18n_strings = $i18n_object->get_strings();
      foreach ($i18n_strings as $string_id => $string) {
        $structure[$string_id] = array(
          '#label' => $string->title,
          '#text' => $string->string,
          '#translate' => TRUE
        );
      }
    }
    return $structure;
  }

  /**
   * {@inheritdoc}
   */
  public function saveTranslation(TMGMTJobItem $job_item) {
    $job = tmgmt_job_load($job_item->tjid);
    $data = array_filter(tmgmt_flatten_data($job_item->getData()), '_tmgmt_filter_data');
    foreach ($data as $i18n_string => $item) {
      if (isset($item['#translation']['#text'])) {
        i18n_string_translation_update($i18n_string, $item['#translation']['#text'], $job->target_language);
      }
    }

    // We just saved the translation, set the state of the job item to
    // 'finished'.
    $job_item->accepted();
  }

  /**
   * {@inheritdoc}
   */
  public function getLabel(TMGMTJobItem $job_item) {
    if ($i18n_object = $this->getI18nObjectWrapper($job_item)) {
      // Get the label, default to the get_title() method, fall back to the
      // first string if that is empty.
      $title = t('Unknown');
      if ($i18n_object->get_title()) {
        $title = $i18n_object->get_title();
      }
      elseif ($strings = $i18n_object->get_strings(array('empty' => TRUE))) {
        $title = reset($strings)->get_string();
      }
      return t('@title (@id)', array('@title' => strip_tags(drupal_substr($title, 0, 64)), '@id' => $job_item->item_id));
    }
    return parent::getLabel($job_item);
  }

  /**
   * {@inheritdoc}
   */
  public function getUri(TMGMTJobItem $job_item) {
    if ($wrapper = $this->getI18nObjectWrapper($job_item)) {
      return array(
        'path' => $wrapper->get_path(),
        'options' => array(),
      );
    }
  }

  /**
   * {@inheritdoc}
   */
  public function getType(TMGMTJobItem $job_item) {
    if ($label = $this->getItemTypeLabel($job_item->item_type)) {
      return $label;
    }
    return parent::getType($job_item);
  }

  /**
   * Helper function to get i18n_object_wrapper for given job item.
   *
   * @param TMGMTJobItem $job_item
   *
   * @return i18n_string_object_wrapper
   */
  protected function getI18nObjectWrapper(TMGMTJobItem $job_item) {
    list(, $type, $object_id) = explode(':', $job_item->item_id, 3);
    return tmgmt_i18n_string_get_wrapper($job_item->item_type, (object) array('type' => $type, 'objectid' => $object_id));
  }

}
