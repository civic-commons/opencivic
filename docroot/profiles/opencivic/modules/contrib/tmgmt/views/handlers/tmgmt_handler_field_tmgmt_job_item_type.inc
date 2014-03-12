<?php

/**
 * Field handler which shows the type of a job item.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_job_item_type extends views_handler_field_entity {

  function render($values) {
    if ($entity = $this->get_value($values)) {
      return $entity->getSourceType();
    }
  }

}
