<?php
/**
 * @file
 * opencivic_organization.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_organization_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organization_list';
  $view->description = 'The Organizations listing page';
  $view->tag = 'opencivic, Organizaion';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Organization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'The organizations listed here include vendors, developers and organizations that have used applications. Use the form below to select organizations with the experience and interests that you\'re seeking.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No organizations added. Please add the first!';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Organization';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date added';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Field: Content: Civic sector */
  $handler->display->display_options['fields']['field_oc_civic_category']['id'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['field'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['delta_offset'] = '0';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_oc_org_address']['id'] = 'field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['table'] = 'field_data_field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['field'] = 'field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_org_address']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_org_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_oc_org_telephone']['id'] = 'field_oc_org_telephone';
  $handler->display->display_options['fields']['field_oc_org_telephone']['table'] = 'field_data_field_oc_org_telephone';
  $handler->display->display_options['fields']['field_oc_org_telephone']['field'] = 'field_oc_org_telephone';
  $handler->display->display_options['fields']['field_oc_org_telephone']['click_sort_column'] = 'number';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_oc_org_url']['id'] = 'field_oc_org_url';
  $handler->display->display_options['fields']['field_oc_org_url']['table'] = 'field_data_field_oc_org_url';
  $handler->display->display_options['fields']['field_oc_org_url']['field'] = 'field_oc_org_url';
  $handler->display->display_options['fields']['field_oc_org_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_org_url']['type'] = 'link_url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Organization type (field_oc_org_additional_type) */
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['id'] = 'field_oc_org_additional_type_tid';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['table'] = 'field_data_field_oc_org_additional_type';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['field'] = 'field_oc_org_additional_type_tid';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['expose']['operator_id'] = 'field_oc_org_additional_type_tid_op';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['expose']['label'] = 'Org type';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['expose']['operator'] = 'field_oc_org_additional_type_tid_op';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['expose']['identifier'] = 'field_oc_org_additional_type_tid';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['vocabulary'] = 'oc_organization_type';
  $handler->display->display_options['filters']['field_oc_org_additional_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Related applications (field_oc_app_related_apps) */
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['id'] = 'field_oc_app_related_apps_target_id';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['table'] = 'field_data_field_oc_app_related_apps';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['field'] = 'field_oc_app_related_apps_target_id';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['operator_id'] = 'field_oc_app_related_apps_target_id_op';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['label'] = 'App experience';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['operator'] = 'field_oc_app_related_apps_target_id_op';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['identifier'] = 'app';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Services (field_oc_org_services) */
  $handler->display->display_options['filters']['field_oc_org_services_tid']['id'] = 'field_oc_org_services_tid';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['table'] = 'field_data_field_oc_org_services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['field'] = 'field_oc_org_services_tid';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_org_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['operator_id'] = 'field_oc_org_services_tid_op';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['operator'] = 'field_oc_org_services_tid_op';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['identifier'] = 'services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_org_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['vocabulary'] = 'service';
  /* Filter criterion: Content: Civic sector (field_oc_civic_category) */
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['id'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['field'] = 'field_oc_civic_category_tid';
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
    'oc_organization' => 'oc_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Organizations list */
  $handler = $view->new_display('page', 'Organizations list', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Organizations listing page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'orgs';

  /* Display: Organizations list pane */
  $handler = $view->new_display('panel_pane', 'Organizations list pane', 'panel_pane_1');
  $export['organization_list'] = $view;

  $view = new view();
  $view->name = 'organization_map';
  $view->description = 'Creates a map for the Organization detail page';
  $view->tag = 'opencivic, Organization';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Organization map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_oc_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
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
  $handler->display->display_options['fields']['field_oc_coordinates']['id'] = 'field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['table'] = 'field_data_field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['field'] = 'field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_oc_coordinates']['settings'] = array(
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
    'oc_organization' => 'oc_organization',
  );

  /* Display: Organization map pane */
  $handler = $view->new_display('panel_pane', 'Organization map pane', 'panel_pane_1');
  $export['organization_map'] = $view;

  $view = new view();
  $view->name = 'organizations_map';
  $view->description = 'Creates a map showing organizations';
  $view->tag = 'opencivic, Organization';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Organizations map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  $handler->display->display_options['fields']['field_oc_coordinates']['id'] = 'field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['table'] = 'field_data_field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['field'] = 'field_oc_coordinates';
  $handler->display->display_options['fields']['field_oc_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_oc_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_oc_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_oc_org_address']['id'] = 'field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['table'] = 'field_data_field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['field'] = 'field_oc_org_address';
  $handler->display->display_options['fields']['field_oc_org_address']['label'] = '';
  $handler->display->display_options['fields']['field_oc_org_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_org_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_oc_org_address']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_oc_org_address']['settings'] = array(
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
    'oc_organization' => 'oc_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Civic sector (field_oc_civic_category) */
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['id'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['field'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator_id'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['identifier'] = 'civic';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['vocabulary'] = 'civic_category';
  /* Filter criterion: Content: Services (field_oc_org_services) */
  $handler->display->display_options['filters']['field_oc_org_services_tid']['id'] = 'field_oc_org_services_tid';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['table'] = 'field_data_field_oc_org_services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['field'] = 'field_oc_org_services_tid';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_org_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['operator_id'] = 'field_oc_org_services_tid_op';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['operator'] = 'field_oc_org_services_tid_op';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['identifier'] = 'services';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_org_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_org_services_tid']['vocabulary'] = 'service';
  /* Filter criterion: Content: Related applications (field_oc_app_related_apps) */
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['id'] = 'field_oc_app_related_apps_target_id';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['table'] = 'field_data_field_oc_app_related_apps';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['field'] = 'field_oc_app_related_apps_target_id';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['operator_id'] = 'field_oc_app_related_apps_target_id_op';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['label'] = 'Related apps';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['operator'] = 'field_oc_app_related_apps_target_id_op';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['identifier'] = 'app';
  $handler->display->display_options['filters']['field_oc_app_related_apps_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_oc_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '500';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    'oc_organization' => 'oc_organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Organizations map pane';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 'path_override';
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
  $export['organizations_map'] = $view;

  return $export;
}
