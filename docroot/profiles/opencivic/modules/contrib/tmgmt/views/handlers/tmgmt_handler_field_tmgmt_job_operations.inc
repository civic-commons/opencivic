<?php

/**
 * Field handler which shows the operations for a job.
 *
 * @todo Remove this once http://drupal.org/node/1435662 is through.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_operations extends views_handler_field_entity {

  function render($values) {
    $job = $this->get_value($values);
    $element = array();
    $element['#theme'] = 'links';
    $element['#attributes'] = array('class' => array('inline'));
    $uri = $job->uri();
    if ($job->isSubmittable() && entity_access('submit', 'tmgmt_job', $job)) {
      $element['#links']['submit'] = array(
        'href' => $uri['path'],
        'query' => array('destination' => current_path()),
        'title' => t('submit'),
      );
    }
    else {
      $element['#links']['manage'] = array(
        'href' => $uri['path'],
        'title' => t('manage'),
      );
    }
    if ($job->isCancelable() && entity_access('submit', 'tmgmt_job', $job)) {
      $element['#links']['cancel'] = array(
        'href' => 'admin/tmgmt/jobs/' . $job->tjid . '/cancel',
        'query' => array('destination' => current_path()),
        'title' => t('cancel'),
      );
    }
    if ($job->isDeletable() && user_access('administer tmgmt')) {
      $element['#links']['delete'] = array(
        'href' => 'admin/tmgmt/jobs/' . $job->tjid . '/delete',
        'query' => array('destination' => current_path()),
        'title' => t('delete'),
      );
    }
    return drupal_render($element);
  }

}
