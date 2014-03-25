<?php
/**
 * @file
 * opencivic_application.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_application_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'application_at_a_glance';
  $view->description = 'Defines the "At a Glance" block for Application detail pages';
  $view->tag = 'opencivic,Application';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Application At a Glance';
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
  /* Field: Content: Application function */
  $handler->display->display_options['fields']['field_oc_app_app_category']['id'] = 'field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['table'] = 'field_data_field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['field'] = 'field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['delta_offset'] = '0';
  /* Field: Content: Civic sector */
  $handler->display->display_options['fields']['field_oc_civic_category']['id'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['field'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['delta_offset'] = '0';
  /* Field: Content: App creator */
  $handler->display->display_options['fields']['field_oc_app_creator']['id'] = 'field_oc_app_creator';
  $handler->display->display_options['fields']['field_oc_app_creator']['table'] = 'field_data_field_oc_app_creator';
  $handler->display->display_options['fields']['field_oc_app_creator']['field'] = 'field_oc_app_creator';
  $handler->display->display_options['fields']['field_oc_app_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_creator']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Host */
  $handler->display->display_options['fields']['field_oc_app_download_url']['id'] = 'field_oc_app_download_url';
  $handler->display->display_options['fields']['field_oc_app_download_url']['table'] = 'field_data_field_oc_app_download_url';
  $handler->display->display_options['fields']['field_oc_app_download_url']['field'] = 'field_oc_app_download_url';
  $handler->display->display_options['fields']['field_oc_app_download_url']['label'] = 'Host website';
  $handler->display->display_options['fields']['field_oc_app_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_download_url']['click_sort_column'] = 'url';
  /* Field: Content: Demo url */
  $handler->display->display_options['fields']['field_oc_app_install_url']['id'] = 'field_oc_app_install_url';
  $handler->display->display_options['fields']['field_oc_app_install_url']['table'] = 'field_data_field_oc_app_install_url';
  $handler->display->display_options['fields']['field_oc_app_install_url']['field'] = 'field_oc_app_install_url';
  $handler->display->display_options['fields']['field_oc_app_install_url']['label'] = 'Demo website';
  $handler->display->display_options['fields']['field_oc_app_install_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_install_url']['click_sort_column'] = 'url';
  /* Field: Content: License */
  $handler->display->display_options['fields']['field_oc_app_license']['id'] = 'field_oc_app_license';
  $handler->display->display_options['fields']['field_oc_app_license']['table'] = 'field_data_field_oc_app_license';
  $handler->display->display_options['fields']['field_oc_app_license']['field'] = 'field_oc_app_license';
  $handler->display->display_options['fields']['field_oc_app_license']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_license']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_oc_app_release_notes']['id'] = 'field_oc_app_release_notes';
  $handler->display->display_options['fields']['field_oc_app_release_notes']['table'] = 'field_data_field_oc_app_release_notes';
  $handler->display->display_options['fields']['field_oc_app_release_notes']['field'] = 'field_oc_app_release_notes';
  $handler->display->display_options['fields']['field_oc_app_release_notes']['label'] = 'Release notes';
  $handler->display->display_options['fields']['field_oc_app_release_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Requirements */
  $handler->display->display_options['fields']['field_oc_app_requirements']['id'] = 'field_oc_app_requirements';
  $handler->display->display_options['fields']['field_oc_app_requirements']['table'] = 'field_data_field_oc_app_requirements';
  $handler->display->display_options['fields']['field_oc_app_requirements']['field'] = 'field_oc_app_requirements';
  $handler->display->display_options['fields']['field_oc_app_requirements']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_requirements']['delta_offset'] = '0';
  /* Field: Content: Software type */
  $handler->display->display_options['fields']['field_oc_app_software_type']['id'] = 'field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['table'] = 'field_data_field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['field'] = 'field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_software_type']['delta_offset'] = '0';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_oc_tags']['id'] = 'field_oc_tags';
  $handler->display->display_options['fields']['field_oc_tags']['table'] = 'field_data_field_oc_tags';
  $handler->display->display_options['fields']['field_oc_tags']['field'] = 'field_oc_tags';
  $handler->display->display_options['fields']['field_oc_tags']['element_label_colon'] = FALSE;
  /* Field: Content: Application Homepage */
  $handler->display->display_options['fields']['field_oc_app_url']['id'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['table'] = 'field_data_field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['field'] = 'field_oc_app_url';
  $handler->display->display_options['fields']['field_oc_app_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_url']['click_sort_column'] = 'url';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['id'] = 'field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['table'] = 'field_data_field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['field'] = 'field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/opencivic/modules/custom/fivestar_green/greenstar/greenstar.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'oc_application' => 'oc_application',
  );
  /* Filter criterion: Content: Key features (field_oc_app_feature_list) */
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['id'] = 'field_oc_app_feature_list_value';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['table'] = 'field_data_field_oc_app_feature_list';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['field'] = 'field_oc_app_feature_list_value';

  /* Display: Application At a Glance */
  $handler = $view->new_display('block', 'Application At a Glance', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Application At a Glance';

  /* Display: Application Key Features */
  $handler = $view->new_display('block', 'Application Key Features', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Key Features';
  $handler->display->display_options['display_description'] = 'Displays the key features for an application';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Key features */
  $handler->display->display_options['fields']['field_oc_app_feature_list']['id'] = 'field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['table'] = 'field_data_field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['field'] = 'field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_feature_list']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['multi_type'] = 'ul';
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
    'oc_application' => 'oc_application',
  );
  /* Filter criterion: Content: Key features (field_oc_app_feature_list) */
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['id'] = 'field_oc_app_feature_list_value';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['table'] = 'field_data_field_oc_app_feature_list';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['field'] = 'field_oc_app_feature_list_value';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Application Key Features';

  /* Display: Application Media */
  $handler = $view->new_display('block', 'Application Media', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Media';
  $handler->display->display_options['display_description'] = 'Displays the screenshots and video for an application';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_oc_app_video']['id'] = 'field_oc_app_video';
  $handler->display->display_options['fields']['field_oc_app_video']['table'] = 'field_data_field_oc_app_video';
  $handler->display->display_options['fields']['field_oc_app_video']['field'] = 'field_oc_app_video';
  $handler->display->display_options['fields']['field_oc_app_video']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_app_video']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_oc_app_video']['settings'] = array(
    'file_view_mode' => 'media_large',
  );
  $handler->display->display_options['fields']['field_oc_app_video']['delta_offset'] = '0';
  /* Field: Content: Screenshots */
  $handler->display->display_options['fields']['field_oc_app_screenshot']['id'] = 'field_oc_app_screenshot';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['table'] = 'field_data_field_oc_app_screenshot';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['field'] = 'field_oc_app_screenshot';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_oc_app_screenshot']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_image_style' => 'screenshot',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_oc_app_screenshot']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'oc_application' => 'oc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Screenshots (field_oc_app_screenshot:alt) */
  $handler->display->display_options['filters']['field_oc_app_screenshot_alt']['id'] = 'field_oc_app_screenshot_alt';
  $handler->display->display_options['filters']['field_oc_app_screenshot_alt']['table'] = 'field_data_field_oc_app_screenshot';
  $handler->display->display_options['filters']['field_oc_app_screenshot_alt']['field'] = 'field_oc_app_screenshot_alt';
  $handler->display->display_options['filters']['field_oc_app_screenshot_alt']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_oc_app_screenshot_alt']['group'] = 2;
  /* Filter criterion: Content: Video (field_oc_app_video:display) */
  $handler->display->display_options['filters']['field_oc_app_video_display']['id'] = 'field_oc_app_video_display';
  $handler->display->display_options['filters']['field_oc_app_video_display']['table'] = 'field_data_field_oc_app_video';
  $handler->display->display_options['filters']['field_oc_app_video_display']['field'] = 'field_oc_app_video_display';
  $handler->display->display_options['filters']['field_oc_app_video_display']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_oc_app_video_display']['group'] = 2;
  $handler->display->display_options['block_description'] = 'Application Media';

  /* Display: Application At a Glance pane */
  $handler = $view->new_display('panel_pane', 'Application At a Glance pane', 'panel_pane_1');

  /* Display: Application Key Features pane */
  $handler = $view->new_display('panel_pane', 'Application Key Features pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Key features */
  $handler->display->display_options['fields']['field_oc_app_feature_list']['id'] = 'field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['table'] = 'field_data_field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['field'] = 'field_oc_app_feature_list';
  $handler->display->display_options['fields']['field_oc_app_feature_list']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_feature_list']['delta_offset'] = '0';
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
    'oc_application' => 'oc_application',
  );
  /* Filter criterion: Content: Key features (field_oc_app_feature_list) */
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['id'] = 'field_oc_app_feature_list_value';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['table'] = 'field_data_field_oc_app_feature_list';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['field'] = 'field_oc_app_feature_list_value';
  $handler->display->display_options['filters']['field_oc_app_feature_list_value']['operator'] = 'not empty';

  /* Display: Application Media pane */
  $handler = $view->new_display('panel_pane', 'Application Media pane', 'panel_pane_3');
  $export['application_at_a_glance'] = $view;

  $view = new view();
  $view->name = 'application_list';
  $view->description = 'The Applications listing page';
  $view->tag = 'opencivic, Applicaton';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Application';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'We are working to build the most complete and up-to-date database of civic software &mdash; both the apps themselves and where they are used. You can help by adding a new app or by linking information about a place where an existing app has been deployed and used.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No apps';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No apps added yet. Please add the first app!';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Application function */
  $handler->display->display_options['fields']['field_oc_app_app_category']['id'] = 'field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['table'] = 'field_data_field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['field'] = 'field_oc_app_app_category';
  $handler->display->display_options['fields']['field_oc_app_app_category']['label'] = 'App function';
  $handler->display->display_options['fields']['field_oc_app_app_category']['delta_offset'] = '0';
  /* Field: Content: Civic sector */
  $handler->display->display_options['fields']['field_oc_civic_category']['id'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['field'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['delta_offset'] = '0';
  /* Field: Content: Software type */
  $handler->display->display_options['fields']['field_oc_app_software_type']['id'] = 'field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['table'] = 'field_data_field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['field'] = 'field_oc_app_software_type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['label'] = 'App type';
  $handler->display->display_options['fields']['field_oc_app_software_type']['delta_offset'] = '0';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['id'] = 'field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['table'] = 'field_data_field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['field'] = 'field_oc_app_aggregate_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['type'] = 'fivestar_formatter_rating';
  $handler->display->display_options['fields']['field_oc_app_aggregate_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
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
    'oc_application' => 'oc_application',
  );
  /* Filter criterion: Content: Application function (field_oc_app_app_category) */
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['id'] = 'field_oc_app_app_category_tid';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['table'] = 'field_data_field_oc_app_app_category';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['field'] = 'field_oc_app_app_category_tid';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['operator_id'] = 'field_oc_app_app_category_tid_op';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['label'] = 'App function';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['operator'] = 'field_oc_app_app_category_tid_op';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['identifier'] = 'field_oc_app_app_category_tid';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['vocabulary'] = 'oc_application_category';
  $handler->display->display_options['filters']['field_oc_app_app_category_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Civic sector (field_oc_civic_category) */
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['id'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['table'] = 'field_data_field_oc_civic_category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['field'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator_id'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['label'] = 'Civic sector';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['operator'] = 'field_oc_civic_category_tid_op';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['identifier'] = 'field_oc_civic_category_tid';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['vocabulary'] = 'oc_civic_category';
  $handler->display->display_options['filters']['field_oc_civic_category_tid']['hierarchy'] = 1;

  /* Display: Applications list */
  $handler = $view->new_display('page', 'Applications list', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Applications listing page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'apps';

  /* Display: Applications feed */
  $handler = $view->new_display('feed', 'Applications feed', 'feed_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
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
    'oc_application' => 'oc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'apps/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Latest apps */
  $handler = $view->new_display('block', 'Latest apps', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest apps';
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
    'oc_application' => 'oc_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Latest apps';

  /* Display: Applications list pane */
  $handler = $view->new_display('panel_pane', 'Applications list pane', 'panel_pane_1');

  /* Display: Latest apps pane */
  $handler = $view->new_display('panel_pane', 'Latest apps pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_oc_app_description']['id'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['table'] = 'field_data_field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['field'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_description']['element_label_colon'] = FALSE;
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
    'oc_application' => 'oc_application',
  );
  $export['application_list'] = $view;

  $view = new view();
  $view->name = 'apps_search_list';
  $view->description = '';
  $view->tag = 'opencivic, Application';
  $view->base_table = 'search_api_index_apps_cat_db_nodes_index';
  $view->human_name = 'Apps search list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_oc_app_description']['id'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['fields']['field_oc_app_description']['field'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_description']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_oc_civic_category']['id'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['fields']['field_oc_civic_category']['field'] = 'field_oc_civic_category';
  $handler->display->display_options['fields']['field_oc_civic_category']['label'] = 'Sectors';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_application' => 'oc_application',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'search_api_index_apps_cat_db_nodes_index';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'oc_application' => 'oc_application',
  );
  $handler->display->display_options['inherit_panels_path'] = '1';
  $export['apps_search_list'] = $view;

  $view = new view();
  $view->name = 'opencivic_application_categories';
  $view->description = 'Defines icon views for the Application content type';
  $view->tag = 'opencivic,Application';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'OpenCivic Application categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Application categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_small_icon' => 'field_oc_small_icon',
    'name' => 'name',
  );
  /* Relationship: Taxonomy term: Content using Application function */
  $handler->display->display_options['relationships']['reverse_field_oc_app_app_category_node']['id'] = 'reverse_field_oc_app_app_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_app_app_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_oc_app_app_category_node']['field'] = 'reverse_field_oc_app_app_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_app_app_category_node']['required'] = TRUE;
  /* Field: : field_oc_small_icon */
  $handler->display->display_options['fields']['field_oc_small_icon']['id'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['table'] = 'field_data_field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['field'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['label'] = '';
  $handler->display->display_options['fields']['field_oc_small_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_small_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_small_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_oc_app_app_category_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'oc_application_category' => 'oc_application_category',
  );

  /* Display: Application categories */
  $handler = $view->new_display('block', 'Application categories', 'block');
  $handler->display->display_options['display_description'] = 'Small icons and names of application categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Application/Application categories';

  /* Display: Civic categories */
  $handler = $view->new_display('block', 'Civic categories', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Civic categories';
  $handler->display->display_options['display_description'] = 'Small icons and names of civic categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Civic sector */
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['id'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['field'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'oc_civic_category' => 'oc_civic_category',
  );
  $handler->display->display_options['block_description'] = 'Application/Civic categories';

  /* Display: Application categories icons */
  $handler = $view->new_display('block', 'Application categories icons', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Application categories icons';
  $handler->display->display_options['display_description'] = 'Small icons of application categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_small_icon' => 'field_oc_small_icon',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: : field_oc_small_icon */
  $handler->display->display_options['fields']['field_oc_small_icon']['id'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['table'] = 'field_data_field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['field'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['label'] = '';
  $handler->display->display_options['fields']['field_oc_small_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_small_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_small_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['block_description'] = 'Application/Application categories icons';

  /* Display: Civic categories icons */
  $handler = $view->new_display('block', 'Civic categories icons', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Civic categories icons';
  $handler->display->display_options['display_description'] = 'Small icons of civic categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '7';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_oc_small_icon' => 'field_oc_small_icon',
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Civic sector */
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['id'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['field'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_oc_civic_category_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: : field_oc_small_icon */
  $handler->display->display_options['fields']['field_oc_small_icon']['id'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['table'] = 'field_data_field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['field'] = 'field_oc_small_icon';
  $handler->display->display_options['fields']['field_oc_small_icon']['label'] = '';
  $handler->display->display_options['fields']['field_oc_small_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_small_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_small_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_oc_civic_category_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'oc_civic_category' => 'oc_civic_category',
  );
  $handler->display->display_options['block_description'] = 'Application/Civic categories icons';
  $export['opencivic_application_categories'] = $view;

  return $export;
}
