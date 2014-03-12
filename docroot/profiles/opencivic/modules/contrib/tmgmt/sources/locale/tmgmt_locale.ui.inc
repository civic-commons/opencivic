<?php

/**
 * @file
 * Provides the I18nString source controller.
 */

/**
 * Class TMGMTI18nStringDefaultSourceUIController
 *
 * UI Controller fo i18n strings translation jobs.
 */
class TMGMTLocaleSourceUIController extends TMGMTDefaultSourceUIController {

  /**
   * Gets locale strings.
   *
   * @param string $textgroup
   *   The locale textgroup.
   * @param string $search_label
   *   Label to search for.
   * @param int $limit
   *   Pager query limit.
   *
   * @return array
   *   List of i18n strings data.
   */
  function getStrings($textgroup, $search_label = NULL, $limit = 20) {
    $languages = drupal_map_assoc(array_keys(language_list()));
    $select = db_select('locales_source', 'ls')
      ->fields('ls', array('lid', 'source'));

    $select->condition('ls.textgroup', $textgroup);
    if (!empty($search_label)) {
      $select->condition('ls.source', "%$search_label%", 'LIKE');
    }

    foreach ($languages as $langcode) {
      $langcode = str_replace('-', '', $langcode);
      $select->leftJoin('locales_target', "lt_$langcode", "ls.lid = %alias.lid AND %alias.language = '$langcode'");
      $select->addField("lt_$langcode", 'language', "lang_$langcode");
    }
    $select = $select->extend('PagerDefault')->limit($limit);
    return $select->execute()->fetchAll();
  }

  /**
   * Gets overview form header.
   *
   * @return array
   *   Header array definition as expected by theme_tablesort().
   */
  public function overviewFormHeader() {
    $languages = array();
    foreach (language_list() as $langcode => $language) {
      $langcode = str_replace('-', '', $langcode);
      $languages['langcode-' . $langcode] = array(
        'data' => check_plain($language->name),
      );
    }

    $header = array(
      'source' => array('data' => t('Source text')),
    ) + $languages;

    return $header;
  }

  /**
   * Implements TMGMTSourceUIControllerInterface::overviewForm().
   */
  public function overviewForm($form, &$form_state, $type) {
    $form += $this->overviewSearchFormPart($form, $form_state, $type);

    $form['items'] = array(
      '#type' => 'tableselect',
      '#header' => $this->overviewFormHeader($type),
      '#empty' => t('No strings matching given criteria have been found.')
    );

    $search_data = $this->getSearchFormSubmittedParams();

    $strings = $this->getStrings($type, $search_data['label']);

    foreach ($this->getTranslationData($strings, $type) as $id => $data) {
      $form['items']['#options'][$id] = $this->overviewRow($type, $data);
    }

    $form['pager'] = array('#markup' => theme('pager', array('tags' => NULL)));

    return $form;
  }

  /**
   * Helper function to create translation data list for the sources page list.
   *
   * @param array $strings
   *   Result of the search query returned by tmgmt_i18n_string_get_strings().
   * @param string $type
   *   I18n object type.
   *
   * @return array
   *   Structured array with translation data.
   */
  protected function getTranslationData($strings, $type) {
    $objects = array();
    // Source language of locale strings is always english.
    $source_language = 'en';

    foreach ($strings as $string) {
      $id = $string->lid;

      // Get existing translations and current job items for the entity
      // to determine translation statuses
      $current_job_items = tmgmt_job_item_load_latest('locale', $type, $id, $source_language);

      $objects[$id] = array(
        'id' => $id,
        'object' => $string
      );
      // Load entity translation specific data.
      foreach (language_list() as $langcode => $language) {
        $langcode = str_replace('-', '', $langcode);

        $translation_status = 'current';

        if ($langcode == $source_language) {
          $translation_status = 'original';
        }
        elseif ($string->{'lang_' . $langcode} === NULL) {
          $translation_status = 'missing';
        }

        $objects[$id]['current_job_items'][$langcode] = isset($current_job_items[$langcode]) ? $current_job_items[$langcode] : NULL;
        $objects[$id]['translation_statuses'][$langcode] = $translation_status;
      }
    }

    return $objects;
  }

  /**
   * Builds search form for entity sources overview.
   *
   * @param array $form
   *   Drupal form array.
   * @param $form_state
   *   Drupal form_state array.
   * @param $type
   *   Entity type.
   *
   * @return array
   *   Drupal form array.
   */
  public function overviewSearchFormPart($form, &$form_state, $type) {

    $options = array();
    foreach (language_list() as $langcode => $language) {
      $options[$langcode] = $language->name;
    }

    $default_values = $this->getSearchFormSubmittedParams();

    $form['search_wrapper'] = array(
      '#prefix' => '<div class="tmgmt-i18n_string-sources-wrapper">',
      '#suffix' => '</div>',
    );
    $form['search_wrapper']['search'] = array(
      '#tree' => TRUE,
    );
    $form['search_wrapper']['search']['label'] = array(
      '#type' => 'textfield',
      '#title' => t('Source text'),
      '#default_value' => isset($default_values['label']) ? $default_values['label'] : NULL,
    );
    $form['search_wrapper']['search_submit'] = array(
      '#type' => 'submit',
      '#value' => t('Search'),
    );

    return $form;
  }

  /**
   * Gets submitted search params.
   *
   * @return array
   */
  public function getSearchFormSubmittedParams() {
    $params = array(
      'label' => NULL,
    );

    if (isset($_GET['label'])) {
      $params['label'] = $_GET['label'];
    }

    return $params;
  }

  /**
   * Builds a table row for overview form.
   *
   * @param string $type
   *   i18n type.
   * @param array $data
   *   Data needed to build the list row.
   *
   * @return array
   */
  public function overviewRow($type, $data) {
    // Set the default item key, assume it's the first.
    $source = $data['object'];

    $row = array(
      'id' => $data['id'],
      'source' => check_plain($source->source),
    );

    foreach (language_list() as $langcode => $language) {
      $langcode = str_replace('-', '', $langcode);
      $row['langcode-' . $langcode] = theme('tmgmt_ui_translation_language_status_single', array(
        'translation_status' => $data['translation_statuses'][$langcode],
        'job_item' => isset($data['current_job_items'][$langcode]) ? $data['current_job_items'][$langcode] : NULL,
      ));
    }

    return $row;
  }

  /**
   * Implements TMGMTSourceUIControllerInterface::overviewFormSubmit().
   */
  public function overviewFormSubmit($form, &$form_state, $type) {
    // Handle search redirect.
    $this->overviewSearchFormRedirect($form, $form_state, $type);
    $items = array_filter($form_state['values']['items']);
    $type = $form_state['item_type'];

    $source_lang = 'en';

    // Create only single job for all items as the source language is just
    // the same for all.
    $job = tmgmt_job_create($source_lang, NULL, $GLOBALS['user']->uid);

    // Loop through entities and create individual jobs for each source language.
    foreach ($items as $item) {
      $job->addItem('locale', $type, $item);
    }

    $form_state['redirect'] = array('admin/tmgmt/jobs/' . $job->tjid,
      array('query' => array('destination' => current_path())));
    drupal_set_message(t('One job needs to be checked out.'));
  }

  /**
   * Performs redirect with search params appended to the uri.
   *
   * In case of triggering element is edit-search-submit it redirects to
   * current location with added query string containing submitted search form
   * values.
   *
   * @param array $form
   *   Drupal form array.
   * @param $form_state
   *   Drupal form_state array.
   * @param $type
   *   Entity type.
   */
  public function overviewSearchFormRedirect($form, &$form_state, $type) {
    if ($form_state['triggering_element']['#id'] == 'edit-search-submit') {

      $query = array();

      foreach ($form_state['values']['search'] as $key => $value) {
        $query[$key] = $value;
      }

      drupal_goto($_GET['q'], array('query' => $query));
    }
  }

}
