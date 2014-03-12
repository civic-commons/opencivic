<?php

$view = new view();
$view->name = 'tmgmt_local_task_overview';
$view->description = 'Gives a bulk operation overview of translation tasks in the system.';
$view->tag = 'default';
$view->base_table = 'tmgmt_local_task';
$view->human_name = 'Translation Local Task Overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Local Tasks';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'provide translation services';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Assigned Translator';
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
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
  6 => 0,
);

/* Display: Eligible and mine */
$handler = $view->new_display('page', 'Eligible and mine', 'unassigned');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Translate';
$handler->display->display_options['display_description'] = 'Shows elegible (unassigned) and mine tasks.';
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
/* Footer: My Tasks view title */
$handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
$handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['footer']['area_text_custom']['ui_name'] = 'My Tasks view title';
$handler->display->display_options['footer']['area_text_custom']['content'] = '<h2>My Tasks</h2>';
/* Footer: My Tasks view */
$handler->display->display_options['footer']['view']['id'] = 'view';
$handler->display->display_options['footer']['view']['table'] = 'views';
$handler->display->display_options['footer']['view']['field'] = 'view';
$handler->display->display_options['footer']['view']['ui_name'] = 'My Tasks view';
$handler->display->display_options['footer']['view']['empty'] = TRUE;
$handler->display->display_options['footer']['view']['view_to_insert'] = 'tmgmt_local_task_overview:my_tasks';
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no eligible tasks.';
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
    'selected' => 1,
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
/* Filter criterion: Translation Management Job: Eligible */
$handler->display->display_options['filters']['eligible']['id'] = 'eligible';
$handler->display->display_options['filters']['eligible']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['eligible']['field'] = 'eligible';
$handler->display->display_options['filters']['eligible']['relationship'] = 'job';
$handler->display->display_options['path'] = 'translate/default';
$handler->display->display_options['menu']['type'] = 'default tab';
$handler->display->display_options['menu']['title'] = 'Unassigned and mine';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Translate';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'user-menu';

/* Display: Elegible */
$handler = $view->new_display('page', 'Elegible', 'eligible');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Unassigned Eligible Tasks';
$handler->display->display_options['display_description'] = 'Shows elegible (unasigned) tasks.';
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
$handler->display->display_options['empty']['area']['label'] = 'Message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You do not have eligible tasks.';
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
    'selected' => 1,
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
/* Filter criterion: Translation Management Job: Eligible */
$handler->display->display_options['filters']['eligible']['id'] = 'eligible';
$handler->display->display_options['filters']['eligible']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['eligible']['field'] = 'eligible';
$handler->display->display_options['filters']['eligible']['relationship'] = 'job';
$handler->display->display_options['path'] = 'translate/elegible';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Eligible';
$handler->display->display_options['menu']['description'] = 'List of eligible tasks';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['context'] = 0;

/* Display: My */
$handler = $view->new_display('page', 'My', 'my_tasks');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'My Tasks';
$handler->display->display_options['display_description'] = 'Shows tasks for current user (translator).';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'status' => 'status',
  'progress' => 'progress',
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
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'progress' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
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
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unassign',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
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
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
  2 => '2',
  3 => '3',
);
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  4 => 0,
  5 => 0,
  6 => 0,
);
$handler->display->display_options['filters']['status']['expose']['reduce'] = TRUE;
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['group'] = 1;
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language From';
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
$handler->display->display_options['filters']['target_language']['group'] = 1;
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
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
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = array(
  1 => '1',
  2 => '2',
  3 => '3',
);
$handler->display->display_options['path'] = 'translate/mine';

/* Display: Pending */
$handler = $view->new_display('page', 'Pending', 'pending');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Pending tasks';
$handler->display->display_options['display_description'] = 'Shows pending tasks for the current translator.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'status' => 'status',
  'progress' => 'progress',
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
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'progress' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You do not have pending tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
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
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unassign',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
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
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
);
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['group'] = 1;
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language From';
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
$handler->display->display_options['filters']['target_language']['group'] = 1;
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
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
$handler->display->display_options['path'] = 'translate/pending';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Pending';
$handler->display->display_options['menu']['description'] = 'List of pending tasks';
$handler->display->display_options['menu']['weight'] = '20';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Completed */
$handler = $view->new_display('page', 'Completed', 'completed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Completed tasks';
$handler->display->display_options['display_description'] = 'Shows completed tasks for the current translator.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'status' => 'status',
  'progress' => 'progress',
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
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'progress' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You do not have completed tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
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
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unassign',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
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
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  2 => '2',
);
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['group'] = 1;
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language From';
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
$handler->display->display_options['filters']['target_language']['group'] = 1;
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
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
$handler->display->display_options['path'] = 'translate/completed';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Completed';
$handler->display->display_options['menu']['description'] = 'List of completed tasks';
$handler->display->display_options['menu']['weight'] = '30';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Rejected */
$handler = $view->new_display('page', 'Rejected', 'rejected');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Completed tasks';
$handler->display->display_options['display_description'] = 'Shows rejected tasks for the current translator.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'status' => 'status',
  'progress' => 'progress',
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
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'progress' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You do not have rejected tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
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
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unassign',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
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
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  3 => '3',
);
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['group'] = 1;
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language From';
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
$handler->display->display_options['filters']['target_language']['group'] = 1;
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
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
$handler->display->display_options['path'] = 'translate/rejected';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Rejected';
$handler->display->display_options['menu']['description'] = 'List of rejected tasks';
$handler->display->display_options['menu']['weight'] = '40';
$handler->display->display_options['menu']['context'] = 0;

/* Display: Closed */
$handler = $view->new_display('page', 'Closed', 'closed');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Completed tasks';
$handler->display->display_options['display_description'] = 'Shows closed tasks for the current translator.';
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'status' => 'status',
  'progress' => 'progress',
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
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'progress' => array(
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
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['label'] = 'Message';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You do not have closed tasks.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Translation Task: Translation Job tjid */
$handler->display->display_options['relationships']['job']['id'] = 'job';
$handler->display->display_options['relationships']['job']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['job']['field'] = 'job';
/* Relationship: Translation Task: Translator tuid */
$handler->display->display_options['relationships']['translator']['id'] = 'translator';
$handler->display->display_options['relationships']['translator']['table'] = 'tmgmt_local_task';
$handler->display->display_options['relationships']['translator']['field'] = 'translator';
$handler->display->display_options['relationships']['translator']['label'] = 'Translator';
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
  'rules_component::rules_tmgmt_local_task_unassign' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 1,
    'label' => 'Unassign',
    'postpone_processing' => 0,
  ),
);
/* Field: Translation Task: Progress */
$handler->display->display_options['fields']['progress']['id'] = 'progress';
$handler->display->display_options['fields']['progress']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['progress']['field'] = 'progress';
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
/* Field: Translation Task: Operations */
$handler->display->display_options['fields']['operations']['id'] = 'operations';
$handler->display->display_options['fields']['operations']['table'] = 'tmgmt_local_task';
$handler->display->display_options['fields']['operations']['field'] = 'operations';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: User: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'translator';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: Translation Task: Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'tmgmt_local_task';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  4 => '4',
);
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Status';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
  8 => 0,
  10 => 0,
);
/* Filter criterion: Translation Management Job: Source_language */
$handler->display->display_options['filters']['source_language']['id'] = 'source_language';
$handler->display->display_options['filters']['source_language']['table'] = 'tmgmt_job';
$handler->display->display_options['filters']['source_language']['field'] = 'source_language';
$handler->display->display_options['filters']['source_language']['relationship'] = 'job';
$handler->display->display_options['filters']['source_language']['group'] = 1;
$handler->display->display_options['filters']['source_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['source_language']['expose']['operator_id'] = 'source_language_op';
$handler->display->display_options['filters']['source_language']['expose']['label'] = 'Language From';
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
$handler->display->display_options['filters']['target_language']['group'] = 1;
$handler->display->display_options['filters']['target_language']['exposed'] = TRUE;
$handler->display->display_options['filters']['target_language']['expose']['operator_id'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['label'] = 'Language To';
$handler->display->display_options['filters']['target_language']['expose']['operator'] = 'target_language_op';
$handler->display->display_options['filters']['target_language']['expose']['identifier'] = 'target_language';
$handler->display->display_options['filters']['target_language']['expose']['remember_roles'] = array(
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
$handler->display->display_options['filters']['title']['operator'] = 'contains';
$handler->display->display_options['filters']['title']['group'] = 1;
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
$handler->display->display_options['path'] = 'translate/closed';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Closed';
$handler->display->display_options['menu']['description'] = 'List of closed tasks';
$handler->display->display_options['menu']['weight'] = '50';
$handler->display->display_options['menu']['context'] = 0;
$translatables['tmgmt_local_task_overview'] = array(
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
  t('Assigned Translator'),
  t('Title'),
  t('Word count'),
  t('Job item count'),
  t('Progress'),
  t('Status'),
  t('Eligible and mine'),
  t('Translate'),
  t('Shows elegible (unassigned) and mine tasks.'),
  t('<h2>My Tasks</h2>'),
  t('There are no eligible tasks.'),
  t('Language'),
  t('Target language'),
  t('Item count'),
  t('Operations'),
  t('Elegible'),
  t('Unassigned Eligible Tasks'),
  t('Shows elegible (unasigned) tasks.'),
  t('Message'),
  t('You do not have eligible tasks.'),
  t('My'),
  t('My Tasks'),
  t('Shows tasks for current user (translator).'),
  t('Translator'),
  t('Language From'),
  t('Language To'),
  t('Pending'),
  t('Pending tasks'),
  t('Shows pending tasks for the current translator.'),
  t('You do not have pending tasks.'),
  t('Completed'),
  t('Completed tasks'),
  t('Shows completed tasks for the current translator.'),
  t('You do not have completed tasks.'),
  t('Rejected'),
  t('Shows rejected tasks for the current translator.'),
  t('You do not have rejected tasks.'),
  t('Closed'),
  t('Shows closed tasks for the current translator.'),
  t('You do not have closed tasks.'),
);
