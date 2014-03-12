<?php

/**
 * @file
 * Hooks and callback functions for rules.module integration.
 */

/**
 * Implements hook_rules_action_info().
 *
 * @ingroup rules
 */
function rpx_rules_rules_action_info() {
  $actions = array(
    'rpx_action_launch_social' => array(
      'label' => t('Launch social sharing widget'),
      'parameter' => array(
        'comment' => array(
          'type' => 'text',
          'label' => t('Comment'),
          'optional' => TRUE,
          'description' => t('Any textual content the user made about this action. If this is provided, it overrides the link text for Yahoo!, Myspace, LinkedIn and Twitter. It is displayed in an independent location on Facebook.'),
        ),
        'link' => array(
          'type' => 'text',
          'label' => t('Link'),
          'optional' => TRUE,
          'description' => t('Where people who see the user\'s update on social sites can visit for further information. Make sure this is a valid link, or the social widget will fail to launch.'),
        ),
        'title' => array(
          'type' => 'text',
          'label' => t('Title'),
          'optional' => TRUE,
          'description' => t('The title for this activity. This information is displayed by Yahoo!, Facebook and LinkedIn.'),
        ),
        'summary' => array(
          'type' => 'text',
          'label' => t('Description'),
          'optional' => TRUE,
          'description' => t('An optional description of the activity. This information is displayed by Facebook and LinkedIn. '),
        ),
      ),
      'group' => t('Janrain Engage'),
    ),
  );
  return $actions;
}

/**
 * Implements hook_rules_event_info().
 *
 * @ingroup rules
 */
function rpx_rules_rules_event_info() {
  return array(
    'rpx_account_add' => array(
      'label'  => t('Linked account was added'),
      'group' => t('Janrain Engage'),
      'variables'   => array(
        'rpx' => array(
          'type' => 'rpx',
          'label' => t('Janrain Engage linked account'),
        ),
      ),
    ),
    'rpx_account_delete' => array(
      'label'  => t('Linked account was deleted'),
      'group' => t('Janrain Engage'),
      'variables'   => array(
        'rpx' => array(
          'type' => 'rpx',
          'label' => t('Janrain Engage linked account.'),
        ),
      ),
    ),
    'rpx_social_cookie_set_node' => array(
      'label'  => t('Social sharing cookie was set for shared content'),
      'group' => t('Janrain Engage'),
      'variables'   => array(
        'node' => array(
          'type' => 'node',
          'label' => t('Shared content.'),
        ),
      ),
    ),
    'rpx_social_cookie_set_comment' => array(
      'label'  => t('Social sharing cookie was set for shared comment'),
      'group' => t('Janrain Engage'),
      'variables'   => array(
        'comment' => array(
          'type' => 'comment',
          'label' => t('Shared comment.'),
        ),
      ),
    ),
    'rpx_social_cookie_set_other' => array(
      'label'  => t('Social sharing cookie was set for other information'),
      'group' => t('Janrain Engage'),
    ),
  );
}

/**
 * Implements hook_rules_data_info().
 */
function rpx_rules_rules_data_info() {
  return array(
    'rpx' => array(
      'label' => 'RPX',
      'wrap' => TRUE,
      'property info' => _rpx_rules_rpx_properties(),
    ),
  );
}

/**
 * Returns properties of rpx data object.
 */
function _rpx_rules_rpx_properties() {
  return array(
    'user' => array(
      'label' => t('User'),
      'type' => 'user',
      'description' => t('The linked account owner'),
    ),
    'id' => array(
      'label' => t('Engage ID'),
      'type' => 'text',
      'description' => t('The Janrain Engage (3rd party) ID.'),
    ),
    'provider_machinename' => array(
      'label' => t('Provider\'s machine name'),
      'type' => 'text',
      'description' => t('The Janrain Engage identity provider\'s internal (machine) name.'),
    ),
    'provider_title' => array(
      'label' => t('Provider\'s title'),
      'type' => 'text',
      'description' => t('The Janrain Engage identity provider\'s title.'),
    ),
  );
}

/**
 * Rules action: arrange for the social sharing widget to launch on next page
 * load.
 */
function rpx_action_launch_social($label, $comment, $linktext, $link, $title, $summary) {
  $social_args = array();

    // The arguments are optional.
  if(isset($link)) {
    $social_args += array('link' => $link,);
  }

  if (isset($comment)) {
    $social_args += array('comment' => $comment,);
  }

  if (isset($title)) {
    $social_args += array('title' => $title,);
  }

  if (isset($summary)) {
    $social_args += array('summary' => $summary,);
  }

  $_SESSION['rpx_action_launch_social_data'] = $social_args;
}
