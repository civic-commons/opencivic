<?php

$view = new view();
$view->name = 'tmgmt_node_source_overview';
$view->description = 'Node source overview for bulk operations.';
$view->tag = 'Translation Management';
$view->base_table = 'node';
$view->human_name = 'Node Source Overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Content overview';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'create translation jobs';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
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
$handler->display->display_options['empty']['area']['content'] = 'There are no nodes that match the specified filter criteria.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: User */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['ui_name'] = 'User';
$handler->display->display_options['relationships']['uid']['label'] = 'User';
/* Field: Bulk operations */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['ui_name'] = 'Bulk operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '<!--views-bulk-operations-select-all-->';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::node_assign_owner_action' => array(
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
  'action::node_make_sticky_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_make_unsticky_action' => array(
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
  'action::node_promote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_publish_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::system_goto_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpromote_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'rules_component::tmgmt_node_ui_request_translation' => array(
    'selected' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::tmgmt_node_ui_checkout_multiple_action' => array(
    'selected' => 1,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_save_action' => array(
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
  'action::node_unpublish_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
  'action::node_unpublish_by_keyword_action' => array(
    'selected' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
    'postpone_processing' => 0,
  ),
);
/* Field: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['ui_name'] = 'Title';
$handler->display->display_options['fields']['title']['label'] = 'Title (in source language)';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Type */
$handler->display->display_options['fields']['type']['id'] = 'type';
$handler->display->display_options['fields']['type']['table'] = 'node';
$handler->display->display_options['fields']['type']['field'] = 'type';
$handler->display->display_options['fields']['type']['ui_name'] = 'Type';
/* Field: All translation languages */
$handler->display->display_options['fields']['translation_language_status_1']['id'] = 'translation_language_status_1';
$handler->display->display_options['fields']['translation_language_status_1']['table'] = 'node';
$handler->display->display_options['fields']['translation_language_status_1']['field'] = 'translation_language_status';
$handler->display->display_options['fields']['translation_language_status_1']['ui_name'] = 'All translation languages';
$handler->display->display_options['fields']['translation_language_status_1']['exclude'] = TRUE;
/* Field: Author */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['ui_name'] = 'Author';
$handler->display->display_options['fields']['name']['label'] = 'Author';
/* Field: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'node';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['ui_name'] = 'Updated date';
$handler->display->display_options['fields']['changed']['date_format'] = 'short';
/* Sort criterion: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['ui_name'] = 'Post date';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Title */
$handler->display->display_options['filters']['title']['id'] = 'title';
$handler->display->display_options['filters']['title']['table'] = 'node';
$handler->display->display_options['filters']['title']['field'] = 'title';
$handler->display->display_options['filters']['title']['operator'] = 'word';
$handler->display->display_options['filters']['title']['group'] = 1;
$handler->display->display_options['filters']['title']['exposed'] = TRUE;
$handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['label'] = 'Node title';
$handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
$handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
/* Filter criterion: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['ui_name'] = 'Published';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
/* Filter criterion: Source translation */
$handler->display->display_options['filters']['source_translation']['id'] = 'source_translation';
$handler->display->display_options['filters']['source_translation']['table'] = 'node';
$handler->display->display_options['filters']['source_translation']['field'] = 'source_translation';
$handler->display->display_options['filters']['source_translation']['ui_name'] = 'Source translation';
$handler->display->display_options['filters']['source_translation']['operator'] = '1';
$handler->display->display_options['filters']['source_translation']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['operator'] = 'not in';
$handler->display->display_options['filters']['language']['value'] = array(
  'und' => 'und',
);
$handler->display->display_options['filters']['language']['group'] = 1;
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language_1']['id'] = 'language_1';
$handler->display->display_options['filters']['language_1']['table'] = 'node';
$handler->display->display_options['filters']['language_1']['field'] = 'language';
$handler->display->display_options['filters']['language_1']['group'] = 1;
$handler->display->display_options['filters']['language_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['language_1']['expose']['operator_id'] = 'language_1_op';
$handler->display->display_options['filters']['language_1']['expose']['label'] = 'Source language';
$handler->display->display_options['filters']['language_1']['expose']['operator'] = 'language_1_op';
$handler->display->display_options['filters']['language_1']['expose']['identifier'] = 'language_1';
/* Filter criterion: Content translation: Select translatable content types */
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['id'] = 'tmgmt_translatable_types_select';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['table'] = 'node';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['field'] = 'tmgmt_translatable_types_select';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['exposed'] = TRUE;
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['expose']['operator_id'] = 'tmgmt_translatable_types_select_op';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['expose']['label'] = 'Content type';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['expose']['operator'] = 'tmgmt_translatable_types_select_op';
$handler->display->display_options['filters']['tmgmt_translatable_types_select']['expose']['identifier'] = 'tmgmt_translatable_types_select';
/* Filter criterion: Content translation: All translatable types */
$handler->display->display_options['filters']['tmgmt_translatable_types_all']['id'] = 'tmgmt_translatable_types_all';
$handler->display->display_options['filters']['tmgmt_translatable_types_all']['table'] = 'node';
$handler->display->display_options['filters']['tmgmt_translatable_types_all']['field'] = 'tmgmt_translatable_types_all';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/tmgmt/sources/node';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Content';
$handler->display->display_options['menu']['weight'] = -20;
$handler->display->display_options['menu']['context'] = 0;
$translatables['tmgmt_node_source_overview'] = array(
  t('Master'),
  t('Content overview'),
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
  t('There are no nodes that match the specified filter criteria.'),
  t('User'),
  t('<!--views-bulk-operations-select-all-->'),
  t('Title (in source language)'),
  t('Type'),
  t('All translation languages'),
  t('Author'),
  t('Updated date'),
  t('Node title'),
  t('Published'),
  t('Source language'),
  t('Content type'),
  t('Page'),
);
