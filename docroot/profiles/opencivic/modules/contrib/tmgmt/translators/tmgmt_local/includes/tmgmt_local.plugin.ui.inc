<?php

/**
 * @file
 * Provides the user translator UI plugin controller.
 */

/**
 * Local translator plugin UI controller.
 */
class TMGMTLocalTranslatorUIController extends TMGMTDefaultTranslatorUIController {

  /**
   * {@inheritdoc}
   */
  public function checkoutSettingsForm($form, &$form_state, TMGMTJob $job) {
    if ($translators = tmgmt_local_translators($job->source_language, array($job->target_language))) {
      $form['translator'] = array(
        '#title' => t('Select translator for this job'),
        '#type' => 'select',
        '#options' => array('' => t('Select user')) + $translators,
        '#default_value' => $job->getSetting('translator'),
      );
    }
    else {
      $form['message'] = array(
        '#markup' => t('There are no translators available.'),
      );
    }

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function checkoutInfo(TMGMTJob $job) {
    $label = $job->getTranslator()->label();
    $form['#title'] = t('@translator translation job information', array('@translator' => $label));
    $form['#type'] = 'fieldset';

    $tuid = $job->getSetting('translator');
    if ($tuid && $translator = user_load($tuid)) {
      $form['job_status'] = array(
        '#type' => 'item',
        '#title' => t('Job status'),
        '#markup' => t('Translation job is assigned to %name.', array('%name' => entity_label('user', $translator))),
      );
    }
    else {
      $form['job_status'] = array(
        '#type' => 'item',
        '#title' => t('Job status'),
        '#markup' => t('Translation job is not assigned to any translator.'),
      );
    }

    if ($job->getSetting('job_comment')) {
      $form['job_comment'] = array(
        '#type' => 'item',
        '#title' => t('Job comment'),
        '#markup' => check_plain($job->getSetting('job_comment')),
      );
    }

    return $form;
  }

  public function pluginSettingsForm($form, &$form_state, TMGMTTranslator $translator, $busy = FALSE) {
    $form['allow_all'] = array(
      '#title' => t('Allow translations for enabled languages even if no translator has the necessary capabilities'),
      '#type' => 'checkbox',
      '#default_value' => $translator->getSetting('allow_all'),
    );
    return $form;
  }

}
