<?php
/**
 * @file
 * opencivic_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opencivic_sponsor_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'opencivic_sponsor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OpenCivic Sponsor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Supported by...';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Url */
  $handler->display->display_options['fields']['field_oc_sponsor_url']['id'] = 'field_oc_sponsor_url';
  $handler->display->display_options['fields']['field_oc_sponsor_url']['table'] = 'field_data_field_oc_sponsor_url';
  $handler->display->display_options['fields']['field_oc_sponsor_url']['field'] = 'field_oc_sponsor_url';
  $handler->display->display_options['fields']['field_oc_sponsor_url']['label'] = '';
  $handler->display->display_options['fields']['field_oc_sponsor_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_oc_sponsor_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_sponsor_url']['click_sort_column'] = 'url';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_oc_logo']['id'] = 'field_oc_logo';
  $handler->display->display_options['fields']['field_oc_logo']['table'] = 'field_data_field_oc_logo';
  $handler->display->display_options['fields']['field_oc_logo']['field'] = 'field_oc_logo';
  $handler->display->display_options['fields']['field_oc_logo']['label'] = '';
  $handler->display->display_options['fields']['field_oc_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_oc_logo']['alter']['path'] = '[field_oc_sponsor_url]';
  $handler->display->display_options['fields']['field_oc_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_oc_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_oc_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
    'oc_sponsor' => 'oc_sponsor',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'OpenCivic Sponsors';
  $export['opencivic_sponsor'] = $view;

  return $export;
}
