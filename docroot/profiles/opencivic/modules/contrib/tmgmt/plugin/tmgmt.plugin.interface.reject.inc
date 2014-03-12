<?php

/**
 * @file
 * Contains the reject translator plugin interface.
 */

/**
 * Handle reject on data item level.
 *
 * Implement this interface in a translator plugin to signal that this plugin is
 * capable of handling a reject of single data items.
 *
 * @ingroup tmgmt_translator
 */
interface TMGMTTranslatorRejectDataItem {

  /**
   * Reject one single data item.
   *
   * @todo Using job item breaks the current convention which uses jobs.
   *
   * @param $job_item
   *   The job item to which the rejected data item belongs.
   * @param $key
   *   The key of the rejected data item.
   *   The key is an array containing the keys of a nested array hierarchy path.
   *
   * @return
   *   TRUE if the reject was succesfull, else FALSE.
   *   In case of an error, it is the responsibility of the translator to
   *   provide informations about the faliure.
   */
  public function rejectDataItem(TMGMTJobItem $job_item, array $key, array $values = NULL);

  /**
   * Reject form.
   *
   * This method gets call by tmgmt_ui_translation_review_form_reject_confirm
   * and allows the translator to add aditional form elements in order to
   * collect data needed for the reject prozess.
   *
   * @param $form
   *   The form array containing a confirm form.
   *   $form['item'] holds the job item to which the to be rejected data item
   *   belongs to.
   *   $form['item'] holds key of the to be rejected data item as an array of
   *   keys of a nested array hierarchy.
   * @param $form_state
   *   The form state.
   *
   * @return
   *   The resulting form array.
   */
  public function rejectForm($form, &$form_state);
}
