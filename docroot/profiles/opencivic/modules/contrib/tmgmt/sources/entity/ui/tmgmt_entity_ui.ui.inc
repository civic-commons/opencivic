<?php

/**
 * Generic entity ui controller class for source plugin.
 *
 * @ingroup tmgmt_source
 */
class TMGMTEntitySourceUIController extends TMGMTEntityDefaultSourceUIController {

  /**
   * Gets overview form header.
   *
   * @return array
   *   Header array definition as expected by theme_tablesort().
   */
  public function overviewFormHeader($type) {
    $languages = array();
    foreach (language_list() as $langcode => $language) {
      $languages['langcode-' . $langcode] = array(
        'data' => check_plain($language->name),
      );
    }

    $entity_info = entity_get_info($type);

    $header = array(
      'title' => array('data' => t('Title (in source language)')),
    );

    // Show the bundle if there is more than one for this entity type.
    if (count(tmgmt_entity_get_translatable_bundles($type)) > 1) {
      $header['bundle'] = array('data' => t('@entity_name type', array('@entity_name' => $entity_info['label'])));
    }

    $header += $languages;

    return $header;
  }

  /**
   * Builds a table row for overview form.
   *
   * @param array $data
   *   Data needed to build the list row.
   *
   * @return array
   */
  public function overviewRow($data) {
    $label = $data['entity_label'] ? $data['entity_label'] : t('@type: @id', array('@type' => $data['entity_type'], '@id' => $data['entity_id']));

    $row = array(
      'id' => $data['entity_id'],
      'title' => l($label, $data['entity_uri']),
    );

    if (isset($data['bundle'])) {
      $row['bundle'] = $data['bundle'];
    }

    foreach (language_list() as $langcode => $language) {
      $row['langcode-' . $langcode] = array(
        'data' => theme('tmgmt_ui_translation_language_status_single', array(
            'translation_status' => $data['translation_statuses'][$langcode],
            'job_item' => isset($data['current_job_items'][$langcode]) ? $data['current_job_items'][$langcode] : NULL,
          )),
        'class' => array('langstatus-' . $langcode),
      );
    }

    return $row;
  }

  /**
   * {@inheritdoc}
   */
  public function overviewForm($form, &$form_state, $type) {

    $form += $this->overviewSearchFormPart($form, $form_state, $type);

    $form['items'] = array(
      '#type' => 'tableselect',
      '#header' => $this->overviewFormHeader($type),
      '#empty' => t('No entities matching given criteria have been found.'),
      '#attributes' => array('id' => 'tmgmt-entities-list'),
    );

    // Load search property params which will be passed into
    $search_property_params = array();
    $exclude_params = array('q', 'page');
    foreach ($_GET as $key => $value) {
      // Skip exclude params, and those that have empty values, as these would
      // make it into query condition instead of being ignored.
      if (in_array($key, $exclude_params) || $value === '') {
        continue;
      }
      $search_property_params[$key] = $value;
    }

    foreach ($this->getEntitiesTranslationData($type, $search_property_params) as $data) {
      $form['items']['#options'][$data['entity_id']] = $this->overviewRow($data);
    }

    $form['pager'] = array('#markup' => theme('pager', array('tags' => NULL)));

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function overviewFormValidate($form, &$form_state, $type) {

  }

  /**
   * {@inheritdoc}
   */
  public function overviewFormSubmit($form, &$form_state, $type) {

    // Handle search redirect.
    $this->overviewSearchFormRedirect($form, $form_state, $type);

    $jobs = array();
    $entities = entity_load($type, $form_state['values']['items']);
    $source_lang_registry = array();

    // Loop through entities and create individual jobs for each source language.
    foreach ($entities as $entity) {
      /**
       * @var EntityTranslationDefaultHandler $handler
       */
      $handler = entity_translation_get_handler($type, $entity);
      $source_lang = entity_language($type, $entity);
      list($entity_id, ,) = entity_extract_ids($type, $entity);

      try {

        // For given source lang no job exists yet.
        if (!isset($source_lang_registry[$source_lang])) {
          // Create new job.
          $job = tmgmt_job_create($source_lang, NULL, $GLOBALS['user']->uid);
          // Add initial job item.
          $job->addItem('entity', $type, $entity_id);
          // Add job identifier into registry
          $source_lang_registry[$source_lang] = $job->tjid;
          // Add newly created job into jobs queue.
          $jobs[$job->tjid] = $job;
        }
        // We have a job for given source lang, so just add new job item for the
        // existing job.
        else {
          $jobs[$source_lang_registry[$source_lang]]->addItem('entity', $type, $entity_id);
        }
      }
      catch (TMGMTException $e) {
        watchdog_exception('tmgmt', $e);
        $entity_label = entity_label($type, $entity);
        drupal_set_message(t('Unable to add job item for entity %name: %error.', array('%name' => $entity_label, '%error' => $e->getMessage())), 'error');
      }
    }

    // If necessary, do a redirect.
    $redirects = tmgmt_ui_job_checkout_multiple($jobs);
    if ($redirects) {
      tmgmt_ui_redirect_queue_set($redirects, current_path());
      $form_state['redirect'] = tmgmt_ui_redirect_queue_dequeue();

      drupal_set_message(format_plural(count($redirects), t('One job needs to be checked out.'), t('@count jobs need to be checked out.')));
    }
  }

}
