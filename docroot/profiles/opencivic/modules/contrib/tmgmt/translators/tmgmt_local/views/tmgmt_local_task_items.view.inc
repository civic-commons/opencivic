<?php

$view = new view();
$view->name = 'tmgmt_local_task_items';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'tmgmt_local_task_item';
$view->human_name = 'Translation Task Items';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Translation Task Items';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Translation Task Item: Tltid */
$handler->display->display_options['relationships']['tltid']['id'] = 'tltid';
$handler->display->display_options['relationships']['tltid']['table'] = 'tmgmt_local_task_item';
$handler->display->display_options['relationships']['tltid']['field'] = 'tltid';
/* Relationship: Translation Task Item: Tjiid */
$handler->display->display_options['relationships']['tjiid']['id'] = 'tjiid';
$handler->display->display_options['relationships']['tjiid']['table'] = 'tmgmt_local_task_item';
$handler->display->display_options['relationships']['tjiid']['field'] = 'tjiid';
/* Field: Translation Management Job Item: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['relationship'] = 'tjiid';
/* Field: Translation Task Item: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task_item';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task Item: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task_item';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
/* Contextual filter: Translation Task Item: Tltid */
$handler->display->display_options['arguments']['tltid']['id'] = 'tltid';
$handler->display->display_options['arguments']['tltid']['table'] = 'tmgmt_local_task_item';
$handler->display->display_options['arguments']['tltid']['field'] = 'tltid';
$handler->display->display_options['arguments']['tltid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['tltid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tltid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tltid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tltid']['summary_options']['items_per_page'] = '25';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$translatables['tmgmt_local_task_items'] = array(
  t('Master'),
  t('Translation Task Items'),
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
  t('Translation Task'),
  t('Translation Management Job Item'),
  t('Label'),
  t('Status'),
  t('Operations'),
  t('All'),
  t('Block'),
);
