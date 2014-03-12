<?php

/**
 * @file
 * Contains tmgmt_handler_field_tmgmt_translator.
 */

/**
 * Field handler which shows the translator of a job.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_translator extends views_handler_field_entity {

  function render($values) {
    if ($entity = $this->get_value($values)) {
      $translators = tmgmt_translator_labels();
      return isset($translators[$entity->translator]) ? check_plain($translators[$entity->translator]) : t('Missing translator');
    }
  }
}
