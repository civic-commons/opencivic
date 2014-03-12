<?php

$view = new view();
$view->name = 'tmgmt_ui_job_item_messages';
$view->description = 'Lists the messages that are related to a job item.';
$view->tag = 'Translation Management';
$view->base_table = 'tmgmt_message';
$view->human_name = 'Translation Job Item Messages';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Messages';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['grouping'] = '';
$handler->display->display_options['style_options']['columns'] = array(
  'created' => 'created',
  'message' => 'message',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'message' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['content'] = 'There are no messages attached to this translation job item.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Translation Management Message: Uid */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'tmgmt_message';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'tmgmt_message';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['ui_name'] = 'Created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: Message */
$handler->display->display_options['fields']['message']['id'] = 'message';
$handler->display->display_options['fields']['message']['table'] = 'tmgmt_message';
$handler->display->display_options['fields']['message']['field'] = 'message';
$handler->display->display_options['fields']['message']['ui_name'] = 'Message';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
/* Sort criterion: Created */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'tmgmt_message';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['ui_name'] = 'Created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Job Item */
$handler->display->display_options['arguments']['tjiid']['id'] = 'tjiid';
$handler->display->display_options['arguments']['tjiid']['table'] = 'tmgmt_message';
$handler->display->display_options['arguments']['tjiid']['field'] = 'tjiid';
$handler->display->display_options['arguments']['tjiid']['ui_name'] = 'Job Item';
$handler->display->display_options['arguments']['tjiid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['tjiid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tjiid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tjiid']['summary_options']['items_per_page'] = '25';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$translatables['tmgmt_ui_job_item_messages'] = array(
  t('Master'),
  t('Messages'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('There are no messages attached to this translation job item.'),
  t('User'),
  t('Created'),
  t('Message'),
  t('Name'),
  t('All'),
  t('Block'),
);
