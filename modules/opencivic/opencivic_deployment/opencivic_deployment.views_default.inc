<?php
/**
 * @file
 * opencivic_deployment.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_deployment_views_default_views() {
  $views = array();

  // Exported view: deployment_at_a_glance
  $view = new view();
  $view->name = 'deployment_at_a_glance';
  $view->description = 'Defines the At a Glance block for Deployments.';
  $view->tag = 'opencivic, Deployment';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Deployment At a Glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'At a Glance';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="edit-content-button"><a href="/node/[nid]/edit">+ edit details</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['id'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['label'] = 'Application used';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Organizations Involved */
  $handler->display->display_options['fields']['field_oc_deploy_member']['id'] = 'field_oc_deploy_member';
  $handler->display->display_options['fields']['field_oc_deploy_member']['table'] = 'field_data_field_oc_deploy_member';
  $handler->display->display_options['fields']['field_oc_deploy_member']['field'] = 'field_oc_deploy_member';
  $handler->display->display_options['fields']['field_oc_deploy_member']['label'] = 'Developers';
  $handler->display->display_options['fields']['field_oc_deploy_member']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_member']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_oc_deploy_member']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_deployment' => 'oc_deployment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Deployment At a Glance';
  $translatables['deployment_at_a_glance'] = array(
    t('Master'),
    t('At a Glance'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="edit-content-button"><a href="/node/[nid]/edit">+ edit details</a></div>'),
    t('Application used'),
    t('Developers'),
    t('All'),
    t('Block'),
    t('OpenCivic Deployment At a Glance'),
  );

  $views[$view->name] = $view;

  // Exported view: deployments_list
  $view = new view();
  $view->name = 'deployments_list';
  $view->description = 'The Deployments listing page';
  $view->tag = 'opencivic, Deployment';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Deployment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Deployments';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Deployments show where applications have been installed and used. Visit a deployment\'s detail page to learn more about the organizations that deployed the app and their experience using it. Use the form below to filter the list of deployments by category and location.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: App deployed */
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['id'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['field'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['ui_name'] = 'App deployed';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['label'] = 'App deployed';
  /* Relationship: Developer */
  $handler->display->display_options['relationships']['field_oc_deploy_member_target_id']['id'] = 'field_oc_deploy_member_target_id';
  $handler->display->display_options['relationships']['field_oc_deploy_member_target_id']['table'] = 'field_data_field_oc_deploy_member';
  $handler->display->display_options['relationships']['field_oc_deploy_member_target_id']['field'] = 'field_oc_deploy_member_target_id';
  $handler->display->display_options['relationships']['field_oc_deploy_member_target_id']['ui_name'] = 'Developer';
  $handler->display->display_options['relationships']['field_oc_deploy_member_target_id']['label'] = 'Developer';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date added';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['id'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['label'] = 'Application';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_deploy_url']['id'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['table'] = 'field_data_field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['field'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['type'] = 'link_url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Application function (field_oc_app_app_category) */
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['id'] = 'field_oc_app_app_category_tid';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['table'] = 'field_data_field_oc_app_app_category';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['field'] = 'field_oc_app_app_category_tid';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['relationship'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['value'] = '';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['operator_id'] = 'field_oc_app_app_category_tid_op';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['label'] = 'App type';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['operator'] = 'field_oc_app_app_category_tid_op';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['identifier'] = 'apptype';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['vocabulary'] = 'oc_application_category';
  /* Filter criterion: Content: Civic sector (field_oc_civic_category) */
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['id'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['field'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['relationship'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator_id'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['label'] = 'Civic Focus';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['identifier'] = 'civic';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['vocabulary'] = 'civic_category';
  /* Filter criterion: Content: Location (field_oc_deploy_location:country) */
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['id'] = 'field_oc_deploy_location_country';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['field'] = 'field_oc_deploy_location_country';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['expose']['operator_id'] = 'field_oc_deploy_location_country_op';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['expose']['operator'] = 'field_oc_deploy_location_country_op';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_oc_deploy_location_country']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_deployment' => 'oc_deployment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Deployments list */
  $handler = $view->new_display('page', 'Deployments list', 'page');
  $handler->display->display_options['display_description'] = 'Deployments listing page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'deployments';

  /* Display: Deployments feed */
  $handler = $view->new_display('feed', 'Deployments feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'deployments/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Recent deployments */
  $handler = $view->new_display('block', 'Recent deployments', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent deployments';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['id'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_deploy_url']['id'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['table'] = 'field_data_field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['field'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['type'] = 'link_url';
  $handler->display->display_options['block_description'] = 'Deployment/Recent deployments';

  /* Display: Recent deployments pane */
  $handler = $view->new_display('panel_pane', 'Recent deployments pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['id'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_deploy_url']['id'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['table'] = 'field_data_field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['field'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['type'] = 'link_url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_deployment' => 'oc_deployment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $translatables['deployments_list'] = array(
    t('Master'),
    t('Deployments'),
    t('See all'),
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
    t('Description'),
    t('Deployments show where applications have been installed and used. Visit a deployment\'s detail page to learn more about the organizations that deployed the app and their experience using it. Use the form below to filter the list of deployments by category and location.'),
    t('App deployed'),
    t('Developer'),
    t('Date added'),
    t('Application'),
    t('Website'),
    t('Location'),
    t('<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>'),
    t('App type'),
    t('Civic Focus'),
    t('Country'),
    t('OpenCivic Deployment'),
    t('Deployments listing page.'),
    t('more'),
    t('Deployments feed'),
    t('Recent deployments'),
    t('Deployment/Recent deployments'),
    t('Recent deployments pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: deployments_map
  $view = new view();
  $view->name = 'deployments_map';
  $view->description = 'Creates a map showing app deployments';
  $view->tag = 'opencivic, Deployment';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Deployment map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Application Deployments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'application_deployments';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['id'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['relationships']['field_oc_deploy_deployment_of_target_id']['field'] = 'field_oc_deploy_deployment_of_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['id'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['table'] = 'field_data_field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['field'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_deployment' => 'oc_deployment',
  );

  /* Display: Deployments map pane */
  $handler = $view->new_display('panel_pane', 'Deployments map pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['icon'] = array(
    'iconUrl' => '',
    'shadowUrl' => '',
    'iconSize' => array(
      'x' => '',
      'y' => '',
    ),
    'iconAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'shadowAnchor' => array(
      'x' => '',
      'y' => '',
    ),
    'popupAnchor' => array(
      'x' => '',
      'y' => '',
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['deployments_map'] = array(
    t('Master'),
    t('Application Deployments'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_oc_deploy_deployment_of'),
    t('Nid'),
    t('Deployments map pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: replated_deployments
  $view = new view();
  $view->name = 'replated_deployments';
  $view->description = 'Defines the "Related deployments" block for Application detail pages';
  $view->tag = 'opencivic,Application';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Application related deployments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Where it is used';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No current uses recorded.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_citystate';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_deploy_url']['id'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['table'] = 'field_data_field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['field'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Add deployment of (field_oc_deploy_deployment_of) */
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['id'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['field'] = 'field_oc_deploy_deployment_of_target_id';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_oc_deploy_deployment_of_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_deployment' => 'oc_deployment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Application related deployments';

  /* Display: Application related deployments pane */
  $handler = $view->new_display('panel_pane', 'Application related deployments pane', 'panel_pane_1');

  /* Display: Where it is used */
  $handler = $view->new_display('panel_pane', 'Where it is used', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'A list of deployments for an app, formatted for content column.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_oc_deploy_location']['id'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['table'] = 'field_data_field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['field'] = 'field_oc_deploy_location';
  $handler->display->display_options['fields']['field_oc_deploy_location']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_deploy_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_deploy_location']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_deploy_url']['id'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['table'] = 'field_data_field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['field'] = 'field_oc_deploy_url';
  $handler->display->display_options['fields']['field_oc_deploy_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_url']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'App deployments (wide)';
  $translatables['replated_deployments'] = array(
    t('Master'),
    t('Where it is used'),
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
    t('No current uses recorded.'),
    t('All'),
    t('Block'),
    t('OpenCivic Application related deployments'),
    t('Application related deployments pane'),
    t('View panes'),
    t('A list of deployments for an app, formatted for content column.'),
    t('App deployments (wide)'),
  );

  $views[$view->name] = $view;

  return $views;
}
