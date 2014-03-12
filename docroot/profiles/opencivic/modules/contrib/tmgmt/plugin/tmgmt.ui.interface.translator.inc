<?php

/**
 * Interface for translator ui controllers.
 *
 * @ingroup tmgmt_translator
 */
interface TMGMTTranslatorUIControllerInterface extends TMGMTPluginBaseInterface {

  /**
   * Form callback for the plugin settings form.
   */
  public function pluginSettingsForm($form, &$form_state, TMGMTTranslator $translator, $busy = FALSE);

  /**
   * Form callback for the checkout settings form.
   */
  public function checkoutSettingsForm($form, &$form_state, TMGMTJob $job);

  /**
   * Retrieves information about a translation job.
   *
   * Services based translators with remote states should place a Poll button
   * here to sync the job state.
   *
   * @param TMGMTJob $job
   *   The translation job.
   */
  public function checkoutInfo(TMGMTJob $job);

  /**
   * Form callback for the job item review form.
   */
  public function reviewForm($form, &$form_state, TMGMTJobItem $item);

  /**
   * Form callback for the data item element form.
   */
  public function reviewDataItemElement($form, &$form_state, $data_item_key, $parent_key, array $data_item, TMGMTJobItem $item);

  /**
   * Validation callback for the job item review form.
   */
  public function reviewFormValidate($form, &$form_state, TMGMTJobItem $item);

  /**
   * Submit callback for the job item review form.
   */
  public function reviewFormSubmit($form, &$form_state, TMGMTJobItem $item);

}
