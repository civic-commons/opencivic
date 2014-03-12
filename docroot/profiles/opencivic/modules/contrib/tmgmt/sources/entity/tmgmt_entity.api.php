<?php

/**
 * @file
 * Hooks provided by the Entity Translation Management module.
 */

/**
 * @addtogroup tmgmt_source
 * @{
 */

/**
 * Allows to alter $query used to list entities on specific entity type overview
 * pages.
 *
 * @see TMGMTEntityDefaultSourceUIController
 */
function hook_tmgmt_entity_type_list_query_alter(EntityFieldQuery $query) {
  $query->entityCondition('type', array('article', 'page'));
}

/**
 * @} End of "addtogroup tmgmt_source".
 */
