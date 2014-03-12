<?php

/**
 * @file
 * Provide views data and handlers for rpx_ui.module
 */

/**
 * Implements hook_views_data().
 */
function rpx_ui_views_data() {
  $data = array();
  $data['node']['share_link'] = array(
    'group' => t('Janrain Engage'),
    'title' => t('Engage Share Link'),
    'help' => t('A link to share the content with Janrain Engage.'),
    'field' => array(
      'handler' => 'rpx_ui_handler_field_share',
    ),
  );

  $data['rpx_linked_account']['table']['group']  = t('Janrain Engage');

  $data['rpx_linked_account']['table']['join'] = array(
    // Links to users (base) table via authmap table.
    'users' => array(
      'left_table' => 'authmap',
      'left_field' => 'aid',
      'field' => 'aid',
    ),
    // Links to node (base) table via authmap table.
    'node' => array(
      'left_table' => 'authmap',
      'left_field' => 'aid',
      'field' => 'aid',
    ),
  );

  $data['authmap']['linked_account'] = array(
    'group' => t('Janrain Engage'),
    'title' => t('Linked account ID'),
    'help' => t('ID returned by Engage for user\'s 3rd party account.'),
    'real field' => 'authname',
    'field' => array(
      'handler' => 'views_handler_field',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['authmap']['delete_link'] = array(
    'group' => t('Janrain Engage'),
    'title' => t('Delete linked account'),
    'help' => t('Displays a link to delete linked account.'),
    'real field' => 'aid',
    'field' => array(
      'handler' => 'rpx_ui_handler_field_delete_link',
    ),
  );

  return $data;
}

/**
 * Wrapper for user_access, used in views.
 *
 * Make sure that user has the 'manage own identities' permission and the
 * identity is actually theirs.
 *
 * @param $permission
 *   Permission string, defaults to 'manage own identities'.
 *
 * @param $aid
 *   Authmap ID.
 *
 * @return
 *   TRUE if user has access, FALSE if not
 */
function _rpx_views_user_access($permission = 'manage own identities', $aid = NULL) {
  if (user_access('administer users')) {
    return TRUE;
  }
  elseif (!user_access($permission)) {
    return FALSE;
  }

  global $user;

  $uid = db_select('authmap')
    ->fields('authmap', array('uid'))
    ->condition('aid', $aid)
    ->condition('uid', $user->uid)
    ->execute()
    ->fetchAssoc();

  if ($uid) {
    return TRUE;
  }

  return FALSE;
}
