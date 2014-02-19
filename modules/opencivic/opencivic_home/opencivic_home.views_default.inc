<?php
/**
 * @file
 * opencivic_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'home_page_map';
  $view->description = 'The map of deployments and organizations for the home page';
  $view->tag = 'opencivic, Homepage';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Home map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
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
  $handler->display->display_options['fields']['field_oc_app_url']['id'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['table'] = 'field_data_field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['field'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_app_url']['type'] = 'link_url';
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
  /* Field: Content: Coordinates */
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['id'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['table'] = 'field_data_field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['field'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_oc_deploy_coordinates']['settings'] = array(
    'data' => 'full',
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
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Home page map pane */
  $handler = $view->new_display('panel_pane', 'Home page map pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['data_source'] = 'field_oc_deploy_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['style_options']['description_field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
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
  $translatables['home_page_map'] = array(
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
    t('App deployed'),
    t('Developer'),
    t('Date added'),
    t('Application'),
    t('Website'),
    t('Location'),
    t('<span class="table-action-button"><a href="node/[nid]">deployment details</a></span>'),
    t('Coordinates'),
    t('Home page map pane'),
    t('View panes'),
  );
  $export['home_page_map'] = $view;

  $view = new view();
  $view->name = 'homepage_latest';
  $view->description = 'Latest Apps and Recent Deployment blocks for the home page';
  $view->tag = 'opencivic, Homepage';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Latest';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Latest Apps';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'small_square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_oc_app_description']['id'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['table'] = 'field_data_field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['field'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_description']['element_label_colon'] = FALSE;
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
    'oc_application' => 'oc_application',
  );

  /* Display: Latest Apps */
  $handler = $view->new_display('block', 'Latest Apps', 'block');
  $handler->display->display_options['display_description'] = 'The Latest Apps block for the home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No apps';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Please add the first application.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['block_description'] = 'Homepage/Latest Apps';

  /* Display: Recent Deployments */
  $handler = $view->new_display('block', 'Recent Deployments', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Deployments';
  $handler->display->display_options['display_description'] = 'The Recent Deployments block for the homepage';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No deployments';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No deployments added yet.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Add deployment of */
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['id'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['table'] = 'field_data_field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['field'] = 'field_oc_deploy_deployment_of';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['label'] = '';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_deploy_deployment_of']['settings'] = array(
    'link' => 0,
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
  $handler->display->display_options['fields']['field_oc_app_url']['id'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['table'] = 'field_data_field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['field'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_oc_app_url']['type'] = 'link_url';
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
  $handler->display->display_options['block_description'] = 'Homepage/Recent deployments';

  /* Display: From the blog */
  $handler = $view->new_display('block', 'From the blog', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'From the blog';
  $handler->display->display_options['display_description'] = 'Blog teasers for the home page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No blogs';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No blog posts yet.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
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
    'oc_blog' => 'oc_blog',
  );
  $handler->display->display_options['block_description'] = 'Homepage/From the blog';
  $translatables['homepage_latest'] = array(
    t('Master'),
    t('Latest Apps'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('The Latest Apps block for the home page'),
    t('No apps'),
    t('Please add the first application.'),
    t('Homepage/Latest Apps'),
    t('Recent Deployments'),
    t('The Recent Deployments block for the homepage'),
    t('No deployments'),
    t('No deployments added yet.'),
    t('Homepage/Recent deployments'),
    t('From the blog'),
    t('Blog teasers for the home page'),
    t('No blogs'),
    t('No blog posts yet.'),
    t('Homepage/From the blog'),
  );
  $export['homepage_latest'] = $view;

  return $export;
}
