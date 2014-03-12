<?php

/**
 * @file
 * Provides page and form callbacks for the Translation Management Tool Node
 * Source User Interface module.
 */

/**
 * Node translation overview form. This form overrides the Drupal core or i18n
 * Content Translation page with a tableselect form.
 */
function tmgmt_node_ui_node_form($form, &$form_state, $node, $original) {
  // Store the node in the form state so we can easily create the job in the
  // submit handler.
  $form_state['node'] = $node;
  // Inject our additional column into the header.
  array_splice($original['#header'], -1, 0, array(t('Pending Translations')));
  // Make this a tableselect form.
  $form['languages'] = array(
    '#type' => 'tableselect',
    '#header' => $original['#header'],
    '#options' => array(),
  );
  $languages = module_exists('i18n_node') ? i18n_node_language_list($node) : language_list();
  // Check if there is a job / job item that references this translation.
  $items = tmgmt_job_item_load_latest('node', 'node', $node->nid, $node->language);
  foreach ($languages as $langcode => $language) {
    if ($langcode == LANGUAGE_NONE) {
      // Never show language neutral on the overview.
      continue;
    }
    // Since the keys are numeric and in the same order we can shift one element
    // after the other from the original non-form rows.
    $option = array_shift($original['#rows']);
    if ($langcode == $node->language) {
      $additional = '<strong>' . t('Source') . '</strong>';
      // This is the source object so we disable the checkbox for this row.
      $form['languages'][$langcode] = array(
        '#type' => 'checkbox',
        '#disabled' => TRUE,
      );
    }
    elseif (isset($items[$langcode])) {
      $item = $items[$langcode];
      $uri = $item->uri();
      $wrapper = entity_metadata_wrapper('tmgmt_job_item', $item);
      $additional = l($wrapper->state->label(), $uri['path']);
      // Disable the checkbox for this row since there is already a translation
      // in progress that has not yet been finished. This way we make sure that
      // we don't stack multiple active translations for the same item on top
      // of each other.
      $form['languages'][$langcode] = array(
        '#type' => 'checkbox',
        '#disabled' => TRUE,
      );
    }
    else {
      // There is no translation job / job item for this target language.
      $additional = t('None');
    }
    // Inject the additional column into the array.
    array_splice($option, -1, 0, array($additional));
    // Append the current option array to the form.
    $form['languages']['#options'][$langcode] = $option;
  }
  $form['actions']['#type'] = 'actions';
  $form['actions']['request'] = array(
    '#type' => 'submit',
    '#value' => t('Request translation'),
    '#submit' => array('tmgmt_node_ui_translate_form_submit'),
    '#validate' => array('tmgmt_node_ui_translate_form_validate'),
  );
  return $form;
}

/**
 * Validation callback for the node translation overview form.
 */
function tmgmt_node_ui_translate_form_validate($form, &$form_state) {
  $selected = array_filter($form_state['values']['languages']);
  if (empty($selected)) {
    form_set_error('languages', t('You have to select at least one language for requesting a translation.'));
  }
}

/**
 * Submit callback for the node translation overview form.
 */
function tmgmt_node_ui_translate_form_submit($form, &$form_state) {
  $node = $form_state['node'];
  $values = $form_state['values'];
  $jobs = array();
  foreach (array_keys(array_filter($values['languages'])) as $langcode) {
    // Create the job object.
    $job = tmgmt_job_create($node->language, $langcode, $GLOBALS['user']->uid);
    // Add the job item.
    $job->addItem('node', 'node', $node->nid);
    // Append this job to the array of created jobs so we can redirect the user
    // to a multistep checkout form if necessary.
    $jobs[$job->tjid] = $job;
  }
  tmgmt_ui_job_checkout_and_redirect($form_state, $jobs);
}
