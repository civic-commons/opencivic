<?php

/**
 * @file
 * Provides Microsoft Translator ui controller.
 */

/**
 * Microsoft translator ui controller.
 */
class TMGMTMicrosoftTranslatorUIController extends TMGMTDefaultTranslatorUIController {

  /**
   * Overrides TMGMTDefaultTranslatorUIController::pluginSettingsForm().
   */
  public function pluginSettingsForm($form, &$form_state, TMGMTTranslator $translator, $busy = FALSE) {
    $generate_url = 'https://datamarket.azure.com/dataset/1899a118-d202-492c-aa16-ba21c33c06cb';
    $form['clientid'] = array(
      '#type' => 'textfield',
      '#title' => t('Microsoft Client Id'),
      '#default_value' => $translator->getSetting('clientid'),
      '#description' => t('Please enter your Microsoft Client ID, or follow this <a href="!link">link</a> to generate one.', array('!link' => $generate_url)),
    );
    $form['clientsecret'] = array(
      '#type' => 'textfield',
      '#title' => t('Microsoft Client Secret'),
      '#default_value' => $translator->getSetting('clientsecret'),
      '#description' => t('Please enter your Microsoft Client Secret, or follow this <a href="!link">link</a> to generate one.', array('!link' => $generate_url)),
    );
    $form['api'] = array(
      '#type' => 'textfield',
      '#title' => t('Microsoft API Key'),
      '#default_value' => $translator->getSetting('api'),
      '#description' => t('This parameter is deprecated and not necessary. Switch to a client id as soon as possible if you are still using it.'),
    );
    return parent::pluginSettingsForm($form, $form_state, $translator);
  }

}
