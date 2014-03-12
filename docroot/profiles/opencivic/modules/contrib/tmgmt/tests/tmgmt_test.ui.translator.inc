<?php

/**
 * @file
 * Contains the test translator UI plugin.
 */

class TMGMTTestTranslatorUIController extends TMGMTDefaultTranslatorUIController {

  /**
   * {@inheritdoc}
   */
  public function pluginSettingsForm($form, &$form_state, TMGMTTranslator $translator, $busy = FALSE) {
    $form['expose_settings'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display settings'),
      '#default_value' => TRUE,
    );

    $form['action'] = array(
      '#type' => 'select',
      '#title' => t('Default action'),
      '#options' => array(
        'translate' => t('Translate'),
        'submit' => t('Submit'),
        'reject' => t('Reject'),
        'fail' => t('Fail'),
        'not_translatable' => t('Not translatable'),
      ),
    );
    return parent::pluginSettingsForm($form, $form_state, $translator, $busy);
  }

  /**
   * {@inheritdoc}
   */
  public function checkoutSettingsForm($form, &$form_state, TMGMTJob $job) {
    if ($job->getTranslator()->getSetting('expose_settings')) {
      $form['action'] = array(
        '#type' => 'select',
        '#title' => t('Action'),
        '#options' => array(
          'translate' => t('Translate'),
          'submit' => t('Submit'),
          'reject' => t('Reject'),
          'fail' => t('Fail'),
          'not_translatable' => t('Not translatable'),
        ),
        '#default_value' => $job->getTranslator()->getSetting('action'),
      );
    }
    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function reviewDataItemElement($form, &$form_state, $data_item_key, $parent_key, array $data_item, TMGMTJobItem $item) {
    $form['below'] = array(
      '#markup' => t('Testing output of review data item element @key from the testing translator.', array('@key' => $data_item_key))
    );

    return $form;
  }

}
