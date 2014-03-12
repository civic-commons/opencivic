<?php

$view = new view();
$view->name = 'tmgmt_ui_job_items';
$view->description = 'Displays all job items that belong to a job.';
$view->tag = 'Translation Management';
$view->base_table = 'tmgmt_job_item';
$view->human_name = 'Translation Job Items';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Job Items';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'label' => 'label',
  'plugin' => 'plugin',
  'state' => 'state',
  'changed' => 'changed',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'label' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'plugin' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'state' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
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
$handler->display->display_options['empty']['area']['content'] = 'There are no items attached to this translation job.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['ui_name'] = 'Label';
/* Field: Translation Management Job Item: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['ui_name'] = 'State';
/* Field: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
$handler->display->display_options['fields']['progress']['ui_name'] = 'Progress';
/* Field: Translation Management Job Item: Word count */
$handler->display->display_options['fields']['word_count_1']['id'] = 'word_count_1';
$handler->display->display_options['fields']['word_count_1']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['word_count_1']['field'] = 'word_count';
/* Field: Changed */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['fields']['operations']['ui_name'] = 'Operations';
$handler->display->display_options['fields']['operations']['element_label_colon'] = FALSE;
/* Contextual filter: Job Item */
$handler->display->display_options['arguments']['tjid']['id'] = 'tjid';
$handler->display->display_options['arguments']['tjid']['table'] = 'tmgmt_job_item';
$handler->display->display_options['arguments']['tjid']['field'] = 'tjid';
$handler->display->display_options['arguments']['tjid']['ui_name'] = 'Job Item';
$handler->display->display_options['arguments']['tjid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['tjid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tjid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tjid']['summary_options']['items_per_page'] = '25';

/* Display: Submit list */
$handler = $view->new_display('block', 'Submit list', 'submit');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['ui_name'] = 'Label';
/* Field: Translation Management Job Item: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['type']['field'] = 'type';
/* Field: Translation Management Job Item: Word count */
$handler->display->display_options['fields']['word_count_1']['id'] = 'word_count_1';
$handler->display->display_options['fields']['word_count_1']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['word_count_1']['field'] = 'word_count';
/* Field: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_job_item';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['fields']['operations']['ui_name'] = 'Operations';
$handler->display->display_options['fields']['operations']['element_label_colon'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$translatables['tmgmt_ui_job_items'] = array(
  t('Master'),
  t('Job Items'),
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
  t('There are no items attached to this translation job.'),
  t('Label'),
  t('Type'),
  t('State'),
  t('Progress'),
  t('Word count'),
  t('.'),
  t(','),
  t('Changed'),
  t('Operations'),
  t('All'),
  t('Submit list'),
  t('Block'),
);
