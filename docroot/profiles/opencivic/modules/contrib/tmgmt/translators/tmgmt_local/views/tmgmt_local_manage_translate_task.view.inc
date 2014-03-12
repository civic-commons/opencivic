<?php

$view = new view();
$view->name = 'tmgmt_local_manage_translate_task';
$view->description = 'Gives a bulk operation overview of translation tasks in the system.';
$view->tag = 'default';
$view->base_table = 'tmgmt_local_task';
$view->human_name = 'Manage Translation Tasks';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Local Tasks';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer translation tasks';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Field: Bulk operations: Translation Task */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'rules_component::rules_tmgmt_local_task_assign1' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_assign' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
    'postpone_processing' => 0,
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
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_test' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_assign_to_me' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Assign to me',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';

/* Display: Main */
$handler = $view->new_display('page', 'Main', 'unassigned');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Manage Translation Tasks';
$handler->display->display_options['display_description'] = 'Shows main view elegible (unasigned) tasks and assigned.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
/* Footer: Global: View area */
$handler->display->display_options['footer']['view']['id'] = 'view';
$handler->display->display_options['footer']['view']['table'] = 'views';
$handler->display->display_options['footer']['view']['field'] = 'view';
$handler->display->display_options['footer']['view']['view_to_insert'] = 'tmgmt_local_manage_translate_task:pending';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no unassigned tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Translation Task */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'rules_component::rules_tmgmt_local_task_assign' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_assign_to_me' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Assign to me',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Assign to...',
    'settings' => array(
      'url' => 'manage-translate/assign-tasks',
    ),
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  0 => '0',
);
$handler->display->display_options['path'] = 'manage-translate/default';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Unassigned';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Manage translation tasks';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'user-menu';

/* Display: Assigned */
$handler = $view->new_display('page', 'Assigned', 'assigned');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Assigned Tasks';
$handler->display->display_options['display_description'] = 'Shows asigned tasks.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no unassigned tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
$handler->display->display_options['relationships']['translator']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Translation Task: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'translator';
$handler->display->display_options['fields']['name']['label'] = 'Assignee';
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['operator'] = 'not in';
$handler->display->display_options['filters']['status']['value'] = array(
  0 => '0',
);
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = array(
  1 => '1',
  2 => '2',
  3 => '3',
  4 => '4',
);
$handler->display->display_options['filters']['status_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['status_1']['expose']['operator_id'] = 'status_1_op';
$handler->display->display_options['filters']['status_1']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
$handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
$handler->display->display_options['filters']['status_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['filters']['status_1']['expose']['reduce'] = TRUE;
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language from';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'source_language';
$handler->display->display_options['filters']['source_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Target_language */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['relationship'] = 'job';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language to';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Task: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['path'] = 'manage-translate/assigned';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Assigned';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Rejected */
$handler = $view->new_display('page', 'Rejected', 'rejected');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Rejected Tasks';
$handler->display->display_options['display_description'] = 'Shows asigned tasks with rejected status.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no rejected tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator User';
$handler->display->display_options['relationships']['translator']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
/* Field: Translation Task: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'translator';
$handler->display->display_options['fields']['name']['label'] = 'Assignee';
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  3 => '3',
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language from';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'source_language';
$handler->display->display_options['filters']['source_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Target_language */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['relationship'] = 'job';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language to';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Task: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['path'] = 'manage-translate/rejected';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Rejected';
$handler->display->display_options['menu']['weight'] = '20';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Pending */
$handler = $view->new_display('page', 'Pending', 'pending');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Pending Tasks';
$handler->display->display_options['display_description'] = 'Shows asigned tasks with pending status.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no pending tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator User';
$handler->display->display_options['relationships']['translator']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Bulk operations: Translation Task */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'rules_component::rules_tmgmt_local_task_assign' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_assign_to_me' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Assign to me',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_message_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_script_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
    'postpone_processing' => 0,
  ),
  'action::views_bulk_operations_argument_selector_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Reassign to...',
    'settings' => array(
      'url' => 'manage-translate/reassign-tasks',
    ),
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_send_email_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
);
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'translator';
$handler->display->display_options['fields']['name']['label'] = 'Assignee';
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language from';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'source_language';
$handler->display->display_options['filters']['source_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Target_language */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['relationship'] = 'job';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language to';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Task: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['path'] = 'manage-translate/pending';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Pending';
$handler->display->display_options['menu']['weight'] = '30';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Completed */
$handler = $view->new_display('page', 'Completed', 'completed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Completed Tasks';
$handler->display->display_options['display_description'] = 'Shows asigned tasks with completed status.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no completed tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator User';
$handler->display->display_options['relationships']['translator']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Translation Task: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
/* Field: Translation Task: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'translator';
$handler->display->display_options['fields']['name']['label'] = 'Assignee';
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  2 => '2',
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language from';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'source_language';
$handler->display->display_options['filters']['source_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Target_language */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['relationship'] = 'job';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language to';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Task: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['path'] = 'manage-translate/completed';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Completed';
$handler->display->display_options['menu']['weight'] = '40';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Closed */
$handler = $view->new_display('page', 'Closed', 'closed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Closed Tasks';
$handler->display->display_options['display_description'] = 'Shows asigned tasks with closed status.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'created' => 'created',
  'title' => 'title',
  'source_language' => 'source_language',
  'target_language' => 'source_language',
  'word_count' => 'word_count',
  'item_count' => 'item_count',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'source_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ' => ',
    'empty_column' => 0,
  ),
  'target_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'word_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'item_count' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['empty_table'] = TRUE;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Empty message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no closed tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
$handler->display->display_options['relationships']['job']['required'] = TRUE;
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator User';
$handler->display->display_options['relationships']['translator']['required'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Translation Task: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
/* Field: Translation Task: Created */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'translator';
$handler->display->display_options['fields']['name']['label'] = 'Assignee';
/* Field: Translation Task: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['title']['field'] = 'title';
/* Field: Translation Management Job: Source_language */
$handler->display->display_options['fields']['source_language']['id'] = 'source_language';
$handler->display->display_options['fields']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['source_language']['field'] = 'source_language';
$handler->display->display_options['fields']['source_language']['relationship'] = 'job';
$handler->display->display_options['fields']['source_language']['label'] = 'Language';
$handler->display->display_options['fields']['source_language']['machine_name'] = TRUE;
/* Field: Translation Management Job: Target_language */
$handler->display->display_options['fields']['target_language']['id'] = 'target_language';
$handler->display->display_options['fields']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['fields']['target_language']['field'] = 'target_language';
$handler->display->display_options['fields']['target_language']['relationship'] = 'job';
$handler->display->display_options['fields']['target_language']['label'] = 'Target language';
$handler->display->display_options['fields']['target_language']['machine_name'] = TRUE;
/* Field: Translation Task: Word count */
$handler->display->display_options['fields']['word_count']['id'] = 'word_count';
$handler->display->display_options['fields']['word_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['word_count']['field'] = 'word_count';
$handler->display->display_options['fields']['word_count']['element_label_colon'] = FALSE;
/* Field: Translation Task: Job item count */
$handler->display->display_options['fields']['item_count']['id'] = 'item_count';
$handler->display->display_options['fields']['item_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['item_count']['field'] = 'item_count';
$handler->display->display_options['fields']['item_count']['label'] = 'Item count';
/* Field: Translation Task: Loop_count */
$handler->display->display_options['fields']['loop_count']['id'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['loop_count']['field'] = 'loop_count';
$handler->display->display_options['fields']['loop_count']['label'] = 'Loop count';
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  4 => '4',
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language from';
$handler->display->display_options['filters']['source_language']['expose']['operator'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['identifier'] = 'source_language';
$handler->display->display_options['filters']['source_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Target_language */
$handler->display->display_options['filters']['target_language']['id'] = 'target_language';
$handler->display->display_options['filters']['target_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['target_language']['field'] = 'target_language';
$handler->display->display_options['filters']['target_language']['relationship'] = 'job';
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language to';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: User: Name */
$handler->display->display_options['filters']['uid']['id'] = 'uid';
$handler->display->display_options['filters']['uid']['table'] = 'users';
$handler->display->display_options['filters']['uid']['field'] = 'uid';
$handler->display->display_options['filters']['uid']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid']['value'] = '';
$handler->display->display_options['filters']['uid']['exposed'] = TRUE;
$handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
$handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
$handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Task: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
$handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
$handler->display->display_options['path'] = 'manage-translate/closed';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Closed';
$handler->display->display_options['menu']['weight'] = '50';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$translatables['tmgmt_local_manage_translate_task'] = array(
  t('Master'),
  t('Local Tasks'),
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
  t('Translation Management Job'),
  t('Title'),
  t('Word count'),
  t('Job item count'),
  t('Progress'),
  t('Main'),
  t('Manage Translation Tasks'),
  t('Shows main view elegible (unasigned) tasks and assigned.'),
  t('Empty message'),
  t('There are no unassigned tasks.'),
  t('Language'),
  t('Target language'),
  t('Item count'),
  t('Loop count'),
  t('.'),
  t(','),
  t('Operations'),
  t('Assigned'),
  t('Assigned Tasks'),
  t('Shows asigned tasks.'),
  t('Translator'),
  t('Status'),
  t('Assignee'),
  t('Language from'),
  t('Language to'),
  t('Name'),
  t('Rejected'),
  t('Rejected Tasks'),
  t('Shows asigned tasks with rejected status.'),
  t('There are no rejected tasks.'),
  t('Translator User'),
  t('Date'),
  t('Pending'),
  t('Pending Tasks'),
  t('Shows asigned tasks with pending status.'),
  t('There are no pending tasks.'),
  t('Completed'),
  t('Completed Tasks'),
  t('Shows asigned tasks with completed status.'),
  t('There are no completed tasks.'),
  t('Closed'),
  t('Closed Tasks'),
  t('Shows asigned tasks with closed status.'),
  t('There are no closed tasks.'),
);
