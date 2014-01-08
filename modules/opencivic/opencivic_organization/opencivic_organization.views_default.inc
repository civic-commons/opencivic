<?php
/**
 * @file
 * opencivic_organization.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_organization_views_default_views() {
  $views = array();

  // Exported view: organization_list
  $view = new view();
  $view->name = 'organization_list';
  $view->description = 'The Organizations listing page';
  $view->tag = 'Organizaion';
  $view->base_table = 'node';
  $view->human_name = 'Organizations list';
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
  $handler->display->display_options['fields']['field_civic_category']['id'] = 'field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['table'] = 'field_data_field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['field'] = 'field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['delta_offset'] = '0';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'field_data_field_telephone';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['click_sort_column'] = 'number';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url']['type'] = 'link_url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Organization type (field_additional_type) */
  $handler->display->display_options['filters']['field_additional_type_tid']['id'] = 'field_additional_type_tid';
  $handler->display->display_options['filters']['field_additional_type_tid']['table'] = 'field_data_field_additional_type';
  $handler->display->display_options['filters']['field_additional_type_tid']['field'] = 'field_additional_type_tid';
  $handler->display->display_options['filters']['field_additional_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_additional_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_additional_type_tid']['expose']['operator_id'] = 'field_additional_type_tid_op';
  $handler->display->display_options['filters']['field_additional_type_tid']['expose']['label'] = 'Org type';
  $handler->display->display_options['filters']['field_additional_type_tid']['expose']['operator'] = 'field_additional_type_tid_op';
  $handler->display->display_options['filters']['field_additional_type_tid']['expose']['identifier'] = 'field_additional_type_tid';
  $handler->display->display_options['filters']['field_additional_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_additional_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_additional_type_tid']['vocabulary'] = 'organization_type';
  $handler->display->display_options['filters']['field_additional_type_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Related applications (field_related_applications) */
  $handler->display->display_options['filters']['field_related_applications_target_id']['id'] = 'field_related_applications_target_id';
  $handler->display->display_options['filters']['field_related_applications_target_id']['table'] = 'field_data_field_related_applications';
  $handler->display->display_options['filters']['field_related_applications_target_id']['field'] = 'field_related_applications_target_id';
  $handler->display->display_options['filters']['field_related_applications_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_related_applications_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['operator_id'] = 'field_related_applications_target_id_op';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['label'] = 'App experience';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['operator'] = 'field_related_applications_target_id_op';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['identifier'] = 'app';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Services (field_services) */
  $handler->display->display_options['filters']['field_services_tid']['id'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['table'] = 'field_data_field_services';
  $handler->display->display_options['filters']['field_services_tid']['field'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator_id'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['identifier'] = 'services';
  $handler->display->display_options['filters']['field_services_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_services_tid']['vocabulary'] = 'service';
  /* Filter criterion: Content: Civic sector (field_civic_category) */
  $handler->display->display_options['filters']['field_civic_category_tid']['id'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['table'] = 'field_data_field_civic_category';
  $handler->display->display_options['filters']['field_civic_category_tid']['field'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator_id'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['label'] = 'Civic Focus';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['identifier'] = 'civic';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_civic_category_tid']['vocabulary'] = 'civic_category';
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
    'organization' => 'organization',
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
  $translatables['organization_list'] = array(
    t('Master'),
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
    t('Description'),
    t('The organizations listed here include vendors, developers and organizations that have used applications. Use the form below to select organizations with the experience and interests that you\'re seeking.'),
    t('Organization'),
    t('Nid'),
    t('Date added'),
    t('Civic sector'),
    t('Address'),
    t('Phone'),
    t('Website'),
    t('Org type'),
    t('App experience'),
    t('Services'),
    t('Civic Focus'),
    t('Organizations list'),
    t('Organizations listing page.'),
    t('Organizations list pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: organization_map
  $view = new view();
  $view->name = 'organization_map';
  $view->description = 'Creates a map for the Organization detail page';
  $view->tag = 'Organization';
  $view->base_table = 'node';
  $view->human_name = 'Organization map';
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
  $handler->display->display_options['style_options']['data_source'] = 'field_coordinates';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_deployment_of_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
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
    'organization' => 'organization',
  );

  /* Display: Organization map pane */
  $handler = $view->new_display('panel_pane', 'Organization map pane', 'panel_pane_1');
  $translatables['organization_map'] = array(
    t('Master'),
    t('Organizations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('All'),
    t('Organization map pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  // Exported view: organizations_map
  $view = new view();
  $view->name = 'organizations_map';
  $view->description = 'Creates a map showing organizations';
  $view->tag = 'Organization';
  $view->base_table = 'node';
  $view->human_name = 'Organizations map';
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
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'organizations';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_deployment_of_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['type'] = 'addressfield_city_only';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
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
    'organization' => 'organization',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Civic sector (field_civic_category) */
  $handler->display->display_options['filters']['field_civic_category_tid']['id'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['table'] = 'field_data_field_civic_category';
  $handler->display->display_options['filters']['field_civic_category_tid']['field'] = 'field_civic_category_tid';
  $handler->display->display_options['filters']['field_civic_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator_id'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['operator'] = 'field_civic_category_tid_op';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['identifier'] = 'civic';
  $handler->display->display_options['filters']['field_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_civic_category_tid']['vocabulary'] = 'civic_category';
  /* Filter criterion: Content: Services (field_services) */
  $handler->display->display_options['filters']['field_services_tid']['id'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['table'] = 'field_data_field_services';
  $handler->display->display_options['filters']['field_services_tid']['field'] = 'field_services_tid';
  $handler->display->display_options['filters']['field_services_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_services_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator_id'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['label'] = 'Services';
  $handler->display->display_options['filters']['field_services_tid']['expose']['operator'] = 'field_services_tid_op';
  $handler->display->display_options['filters']['field_services_tid']['expose']['identifier'] = 'services';
  $handler->display->display_options['filters']['field_services_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_services_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_services_tid']['vocabulary'] = 'service';
  /* Filter criterion: Content: Related applications (field_related_applications) */
  $handler->display->display_options['filters']['field_related_applications_target_id']['id'] = 'field_related_applications_target_id';
  $handler->display->display_options['filters']['field_related_applications_target_id']['table'] = 'field_data_field_related_applications';
  $handler->display->display_options['filters']['field_related_applications_target_id']['field'] = 'field_related_applications_target_id';
  $handler->display->display_options['filters']['field_related_applications_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_related_applications_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['operator_id'] = 'field_related_applications_target_id_op';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['label'] = 'Related apps';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['operator'] = 'field_related_applications_target_id_op';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['identifier'] = 'app';
  $handler->display->display_options['filters']['field_related_applications_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'title';
  $handler->display->display_options['style_options']['map'] = 'OSM Mapnik';
  $handler->display->display_options['style_options']['height'] = '500';
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
    'organization' => 'organization',
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
  $translatables['organizations_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('Category'),
    t('Services'),
    t('Related apps'),
    t('Content pane'),
    t('Organizations map pane'),
    t('View panes'),
  );

  $views[$view->name] = $view;

  return $views;
}
