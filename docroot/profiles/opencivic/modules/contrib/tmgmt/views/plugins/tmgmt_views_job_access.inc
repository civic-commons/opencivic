<?php

/**
 * @file
 * Views access plugin.
 */

/**
 * Access plugin that provides role-based access control.
 */
class tmgmt_views_job_access extends views_plugin_access {

  /**
   * {@inheritdoc}
   */
  function summary_title() {
    return t('Job view access');
  }

  /**
   * {@inheritdoc}
   */
  function access($account) {
    return entity_access('view', 'tmgmt_job', NULL, $account);
  }

  /**
   * {@inheritdoc}
   */
  function get_access_callback() {
    return array('entity_access', array('view', 'tmgmt_job'));
  }
}
