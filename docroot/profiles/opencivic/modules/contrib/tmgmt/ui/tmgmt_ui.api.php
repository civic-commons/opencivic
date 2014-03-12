<?php

/**
 * @file
 * API documentation file for Translation Management API.
 */

/**
 * Allows to alter job checkout workflow before the default behavior kicks in.
 *
 * Note: The default behavior will ignore jobs that have already been checked
 * out. Remove jobs from the array to prevent the default behavior for them.
 *
 * @param $redirects
 *   List of redirects the user is supposed to be redirected to.
 * @param $jobs
 *   Array with the translation jobs to be checked out.
 */
function hook_tmgmt_ui_job_checkout_before_alter(&$redirects, &$jobs) {
  foreach ($jobs as $job) {
    // Automatically check out all jobs using the default settings.
    $job->translator = 'example';
    $job->translator_context = $job->getTranslator()->getController()->defaultCheckoutSettings();
  }
}

/**
 * Allows to alter job checkout workflow after the default behavior.
 *
 * @param $redirects
 *   List of redirects the user is supposed to be redirected to.
 * @param $jobs
 *   Array with the translation jobs to be checked out.
 */
function hook_tmgmt_ui_job_checkout_after_alter(&$redirects, &$jobs) {
  // Redirect to custom multi-checkout form if there are multple redirects.
  if (count($redirects) > 2) {
    $redirects = array('/my/custom/checkout/form/' . implode(',', array_keys($jobs)));
  }
}
