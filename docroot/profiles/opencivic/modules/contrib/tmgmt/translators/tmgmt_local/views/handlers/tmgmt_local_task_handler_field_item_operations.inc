<?php

/**
 * Field handler which shows the link for translating translation task items.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_local_task_handler_field_item_operations extends views_handler_field_entity {

  function render($values) {
    global $user;
    /**
     * @var TMGMTLocalTaskItem $item
     */
    $item = $this->get_value($values);

    $element = array();
    $element['#theme'] = 'links';
    $element['#attributes'] = array('class' => array('links', 'inline'));
    // Only allow to translate if the job is assigned to this user.
    if (entity_access('view', 'tmgmt_local_task_item', $item) && $item->getTask()->tuid == $user->uid) {
      $element['#links']['translate'] = array(
        'href' => 'translate/' . $item->tltid . '/item/' . $item->tltiid,
        'attributes' => array(
          'title' => $item->isPending() ? t('Translate') : t('View'),
        ),
        'title' => $item->isPending() ? t('translate') : t('view'),
      );
    }
    return drupal_render($element);
  }

}
