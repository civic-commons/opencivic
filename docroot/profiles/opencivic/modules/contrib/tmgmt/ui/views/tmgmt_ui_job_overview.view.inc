<?php

$view = new view;
$view->name = 'tmgmt_ui_job_overview';
$view->description = 'Gives a bulk operation overview of translation jobs in the system.';
$view->tag = 'Translation Management';
$view->base_table = 'tmgmt_job';
$view->human_name = 'Translation Job Overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Job overview';
$handler->display->display_options['access']['type'] = 'tmgmt_views_job_access';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'label' => 'label',
  'source_language' => 'source_language',
  'target_language' => 'target_language',
  'label_1' => 'label_1',
  'state' => 'state',
  'created' => 'created',
  'changed' => 'changed',
  'operations' => 'operations',
);
$handler->display->display_options['style_options']['default'] = 'changed';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'label' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'label_1' => array(
    'sortable' => 0,
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
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'There are no translation jobs that match the specified filter criteria.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Translator */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_job';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['ui_name'] = 'Translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
$handler->display->display_options['relationships']['translator']['required'] = 0;
/* Field: Bulk operations */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['ui_name'] = 'Bulk operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
  'rules_component::rules_tmgmt_job_accept_translation' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'rules_component::rules_tmgmt_job_cancel_translation' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 1,
    'label' => 'Delete Job',
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'url' => '',
    ),
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'use_queue' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
/* Field: Label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['ui_name'] = 'Label';
/* Field: From */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['ui_name'] = 'From';
$handler->display->display_options['fields']['source_language']['label'] = 'From';
/* Field: To */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['ui_name'] = 'To';
$handler->display->display_options['fields']['target_language']['label'] = 'To';
/* Field: State */
$handler->display->display_options['fields']['state']['id'] = 'state';
$handler->display->display_options['fields']['state']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['state']['field'] = 'state';
$handler->display->display_options['fields']['state']['ui_name'] = 'State';
/* Field: Translator */
$handler->display->display_options['fields']['translator']['id'] = 'translator';
$handler->display->display_options['fields']['translator']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['translator']['field'] = 'translator';
$handler->display->display_options['fields']['translator']['ui_name'] = 'Translator';
/* Field: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
$handler->display->display_options['fields']['progress']['ui_name'] = 'Progress';
/* Field: Translation Management Job: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['external'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['word_count']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['word_count']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['trim'] = 0;
$handler->display->display_options['fields']['word_count']['alter']['html'] = 0;
$handler->display->display_options['fields']['word_count']['element_label_colon'] = 1;
$handler->display->display_options['fields']['word_count']['element_default_classes'] = 1;
$handler->display->display_options['fields']['word_count']['hide_empty'] = 0;
$handler->display->display_options['fields']['word_count']['empty_zero'] = 0;
$handler->display->display_options['fields']['word_count']['hide_alter_empty'] = 1;
/* Field: Changed */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Field: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['fields']['operations']['ui_name'] = 'Operations';
/* Sort criterion: Changed */
$handler->display->display_options['sorts']['changed']['id'] = 'changed';
$handler->display->display_options['sorts']['changed']['table'] = 'tmgmt_job';
$handler->display->display_options['sorts']['changed']['field'] = 'changed';
$handler->display->display_options['sorts']['changed']['ui_name'] = 'Changed';
$handler->display->display_options['sorts']['changed']['order'] = 'DESC';
/* Filter criterion: State */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['ui_name'] = 'State';
$handler->display->display_options['filters']['state']['exposed'] = TRUE;
$handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['label'] = 'State';
$handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
$handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
/* Filter criterion: From */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['ui_name'] = 'From';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'From';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'from';
/* Filter criterion: To */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['ui_name'] = 'To';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'to';
/* Filter criterion: Translator */
$handler->display->display_options['filters']['translator']['id'] = 'translator';
$handler->display->display_options['filters']['translator']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['translator']['field'] = 'translator';
$handler->display->display_options['filters']['translator']['ui_name'] = 'Translator';
$handler->display->display_options['filters']['translator']['exposed'] = TRUE;
$handler->display->display_options['filters']['translator']['expose']['operator_id'] = 'translator_op';
$handler->display->display_options['filters']['translator']['expose']['label'] = 'Translator';
$handler->display->display_options['filters']['translator']['expose']['operator'] = 'translator_op';
$handler->display->display_options['filters']['translator']['expose']['identifier'] = 'translator';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/tmgmt/overview';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Jobs';
$handler->display->display_options['menu']['weight'] = '-1';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Translation';
$handler->display->display_options['tab_options']['description'] = 'Translation overview';
$handler->display->display_options['tab_options']['weight'] = -9;
$handler->display->display_options['tab_options']['name'] = 'management';
$translatables['tmgmt_ui_job_overview'] = array(
  t('Master'),
  t('Job overview'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('There are no translation jobs that match the specified filter criteria.'),
  t('Translator'),
  t('Label'),
  t('From'),
  t('To'),
  t('State'),
  t('Progress'),
  t('Word count'),
  t('Changed'),
  t('Operations'),
  t('Page'),
);
