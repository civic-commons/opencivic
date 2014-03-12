<?php

/**
 * @file
 * Provides the locale source controller.
 */

/**
 * Translation plugin controller for locale strings.
 */
class TMGMTLocaleSourcePluginController extends TMGMTDefaultSourcePluginController {

  /**
   * Updates translation associated to a specific locale source.
   *
   * @param string $lid
   *   The Locale ID.
   * @param string $target_language
   *   Target language to update translation.
   * @param string $translation
   *   Translation value.
   *
   * @return bool
   *   Success or not updating the locale translation.
   */
  protected function updateTranslation($lid, $target_language, $translation) {

    $languages = locale_language_list('name', TRUE);
    if (!$lid || !array_key_exists($target_language, $languages) || !$translation) {
      return FALSE;
    }

    $exists = db_query("SELECT COUNT(lid) FROM {locales_target} WHERE lid = :lid AND language = :language", array(':lid' => $lid, ':language' => $target_language))
      ->fetchField();

    // @todo Only singular strings are managed here, we should take care of
    //   plural information of processed string.
    if (!$exists) {
      $fields = array(
        'lid' => $lid,
        'language' => $target_language,
        'translation' => $translation,
      );
      db_insert('locales_target')
        ->fields($fields)
        ->execute();
    }
    else {
      $fields = array(
         'translation' => $translation,
      );
      db_update('locales_target')
        ->fields($fields)
        ->condition('lid', $lid)
        ->condition('language', $target_language)
        ->execute();
    }
    // Clear locale caches.
    _locale_invalidate_js($target_language);
    cache_clear_all('locale:' . $target_language, 'cache');
    return TRUE;
  }

  /**
   * Helper function to obtain a locale object for given job item.
   *
   * @param TMGMTJobItem $job_item
   *
   * @return locale object
   */
  protected function getLocaleObject(TMGMTJobItem $job_item) {
    $locale_lid = $job_item->item_id;

    // Check existence of assigned lid.
    $exists = db_query("SELECT COUNT(lid) FROM {locales_source} WHERE lid = :lid", array(':lid' => $locale_lid))->fetchField();
    if (!$exists) {
      throw new TMGMTException(t('Unable to load locale with id %id', array('%id' => $job_item->item_id)));
    }

    if ($job_item->getJob()->source_language == 'en') {
      $query = db_select('locales_source', 'ls');
      $query
        ->fields('ls')
        ->condition('ls.lid', $locale_lid);
      $locale_object = $query
        ->execute()
        ->fetchObject();

      if (empty($locale_object)) {
        return null;
      }

      $locale_object->origin = 'source';
    }
    else {
      $query = db_select('locales_target', 'lt');
      $query->join('locales_source', 'ls', 'ls.lid = lt.lid');
      $query
        ->fields('lt')
        ->fields('ls')
        ->condition('lt.lid', $locale_lid)
        ->condition('lt.language', $job_item->getJob()->source_language);
      $locale_object = $query
        ->execute()
        ->fetchObject();

      if (empty($locale_object)) {
        return null;
      }

      $locale_object->origin = 'target';
    }

    return $locale_object;
  }

  /**
   * {@inheritdoc}
   */
  public function getLabel(TMGMTJobItem $job_item) {
    if ($locale_object = $this->getLocaleObject($job_item)) {
      if ($locale_object->origin == 'source') {
        $label =  $locale_object->source;
      }
      else {
        $label = $locale_object->translation;
      }
      return truncate_utf8(strip_tags($label), 30, FALSE, TRUE);
    }
  }

  /**
   * [@inheritdoc}
   */
  public function getType(TMGMTJobItem $job_item) {
    return $this->getItemTypeLabel($job_item->item_type);
  }

  /**
   * {@inheritdoc}
   */
  public function getData(TMGMTJobItem $job_item) {
    if ($locale_object = $this->getLocaleObject($job_item)) {
      if ($locale_object->origin == 'source') {
        $text = $locale_object->source;
      }
      else {
        $text = $locale_object->translation;
      }

      // Identify placeholders that need to be escaped. Assume that placeholders
      // consist of alphanumeric characters and _,- only and are delimited by
      // non-alphanumeric characters. There are cases that don't match, for
      // example appended SI units like "@valuems", there only @value is the
      // actual placeholder.
      $escape = array();
      if (preg_match_all('/([@!%][a-zA-Z0-9_-]+)/', $text, $matches, PREG_OFFSET_CAPTURE)) {
         foreach ($matches[0] as $match) {
           $escape[$match[1]]['string'] = $match[0];
         }
      }
      $structure['singular'] = array(
        '#label' => t('Singular'),
        '#text' => (string) $text,
        '#translate' => TRUE,
        '#escape' => $escape,
      );
      return $structure;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function saveTranslation(TMGMTJobItem $job_item) {
    $job = tmgmt_job_load($job_item->tjid);
    $data = $job_item->getData();
    if (isset($data['singular'])) {
      $translation = $data['singular']['#translation']['#text'];
      // Update the locale string in the system.
      // @todo: Send error message to user if update fails.
      if ($this->updateTranslation($job_item->item_id, $job->target_language, $translation)) {
        $job_item->accepted();
      }
    }

    // @todo: Temporary backwards compability with existing jobs, remove in next
    //   release.
    if (isset($data[$job_item->item_id])) {
      $translation = $data[$job_item->item_id]['#translation']['#text'];
      // Update the locale string in the system.
      // @todo: Send error message to user if update fails.
      if ($this->updateTranslation($job_item->item_id, $job->target_language, $translation)) {
        $job_item->accepted();
      }
    }
  }

}
