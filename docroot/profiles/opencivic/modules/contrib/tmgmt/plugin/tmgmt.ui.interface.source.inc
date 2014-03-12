<?php


/**
 * Interface for source ui controllers.
 *
 * @ingroup tmgmt_source
 */
interface TMGMTSourceUIControllerInterface extends TMGMTPluginBaseInterface {

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

  /**
   * {@inheritdoc}
   *
   * @see tmgmt_ui_menu().
   */
  public function hook_menu();

  /**
   * {@inheritdoc}
   *
   * @see tmgmt_ui_forms().
   */
  public function hook_forms();

  /**
   * {@inheritdoc}
   *
   * @see tmgmt_ui_views_default_views().
   */
  public function hook_views_default_views();

}
