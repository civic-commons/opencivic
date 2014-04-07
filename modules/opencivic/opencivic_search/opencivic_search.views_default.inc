<?php
/**
 * @file
 * opencivic_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opencivic_application_facet_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_opencivic_search';
  $view->human_name = 'OpenCivic Application Facet Search';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'We are working to build the most complete and up-to-date database of civic software — both the apps themselves and where they are used. You can help by adding a new app or by linking information about a place where an existing app has been deployed and used.';
  $handler->display->display_options['header']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Indexed Node: Logo */
  $handler->display->display_options['fields']['field_oc_logo']['id'] = 'field_oc_logo';
  $handler->display->display_options['fields']['field_oc_logo']['table'] = 'search_api_index_opencivic_search';
  $handler->display->display_options['fields']['field_oc_logo']['field'] = 'field_oc_logo';
  $handler->display->display_options['fields']['field_oc_logo']['label'] = '';
  $handler->display->display_options['fields']['field_oc_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_logo']['settings'] = array(
    'image_style' => 'small_square_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_opencivic_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Short description */
  $handler->display->display_options['fields']['field_oc_app_description']['id'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['table'] = 'search_api_index_opencivic_search';
  $handler->display->display_options['fields']['field_oc_app_description']['field'] = 'field_oc_app_description';
  $handler->display->display_options['fields']['field_oc_app_description']['label'] = '';
  $handler->display->display_options['fields']['field_oc_app_description']['element_label_colon'] = FALSE;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_opencivic_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oc_application' => 'oc_application',
  );

  /* Display: List */
  $handler = $view->new_display('panel_pane', 'List', 'panel_pane_1');
  $export['opencivic_application_facet_search'] = $view;

  return $export;
}
