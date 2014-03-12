<?php

/**
 * Field handler which shows the progressbar.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_local_task_handler_field_progress extends tmgmt_handler_field_tmgmt_progress {

  /**
   * Prefetch statistics for all jobs.
   */
  function pre_render(&$values) {
    parent::pre_render($values);

    // In case of tasks, pre-fetch the statistics in a single query and add them
    // to the static cache.
    if ($this->entity_type == 'tmgmt_task') {
      $tltids = array();
      foreach ($values as $value) {
        $tltids[] = $value->tjid;
      }
      tmgmt_local_task_statistics_load($tltids);
    }
  }

  /**
   * {@inheritdoc}
   */
  function render($values) {
    $object = $this->get_value($values);
    $counts = array(
      '@untranslated' => $object->getCountUntranslated(),
      '@translated' => $object->getCountTranslated(),
      '@completed' => $object->getCountCompleted(),
    );
    $id = $object->internalIdentifier();

    if (module_exists('google_chart_tools')) {
      draw_chart($this->build_progressbar_settings($id, $counts));
      return '<div id="progress' . $id . '"></div>';
    }
    $title = t('Untranslated: @untranslated, translated: @translated, completed: @completed.', $counts);
    return sprintf('<span title="%s">%s</span>', $title, implode('/', $counts));
  }

  /**
   * {@inheritdoc}
   */
  function build_progressbar_settings($id, $counts, $prefix = 'progress') {
    $settings['chart'][$prefix . $id] = array(
      'header' => array(t('Untranslated'), t('Translated'), t('Completed')),
      'rows' => array(
        array($counts['@untranslated'], $counts['@translated'], $counts['@completed']),
      ),
      'columns' => array(''),
      'chartType' => 'PieChart',
      'containerId' => $prefix . $id,
      'options' => array(
        'backgroundColor' => 'transparent',
        'colors' => array('#60ff60', '#ffff00', '#6060ff'),
        'forceIFrame' => FALSE,
        'chartArea' => array(
          'left' => 0,
          'top' => 0,
          'width' => '50%',
          'height' => '100%',
        ),
        'fontSize' => 9,
        'title' => t('Progress'),
        'titlePosition' => 'none',
        'width' => 60,
        'height' => 50,
        'isStacked' => TRUE,
        'legend' => array('position' => 'none'),
        'pieSliceText' => 'none',
      )
    );
    return $settings;
  }


}
