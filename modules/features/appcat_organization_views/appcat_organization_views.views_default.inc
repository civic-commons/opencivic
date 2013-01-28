<?php
/**
 * @file
 * appcat_organization_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function appcat_organization_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organization_at_a_glance';
  $view->description = 'Defines the At a Glance block for Organizations.';
  $view->tag = 'Organization';
  $view->base_table = 'node';
  $view->human_name = 'Organization At a Glance';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Civic Categories';
  $handler->display->display_options['fields']['view_1']['view'] = 'organization_categories';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: Content: Civic subcategory */
  $handler->display->display_options['fields']['field_civic_sub_cate']['id'] = 'field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['table'] = 'field_data_field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['field'] = 'field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['label'] = 'Civic subcategories';
  $handler->display->display_options['fields']['field_civic_sub_cate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civic_sub_cate']['delta_offset'] = '0';
  /* Field: Content: Related applications */
  $handler->display->display_options['fields']['field_related_applications']['id'] = 'field_related_applications';
  $handler->display->display_options['fields']['field_related_applications']['table'] = 'field_data_field_related_applications';
  $handler->display->display_options['fields']['field_related_applications']['field'] = 'field_related_applications';
  $handler->display->display_options['fields']['field_related_applications']['label'] = 'Apps expertise';
  $handler->display->display_options['fields']['field_related_applications']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_related_applications']['delta_offset'] = '0';
  /* Field: Content: Organization type */
  $handler->display->display_options['fields']['field_additional_type']['id'] = 'field_additional_type';
  $handler->display->display_options['fields']['field_additional_type']['table'] = 'field_data_field_additional_type';
  $handler->display->display_options['fields']['field_additional_type']['field'] = 'field_additional_type';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Organization At a Glance';
  $export['organization_at_a_glance'] = $view;

  $view = new view();
  $view->name = 'organization_categories';
  $view->description = 'Defines icon-based category listings for the Organization content type';
  $view->tag = 'Organization';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Organization categories';
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
    'field_small_icon' => 'field_small_icon',
    'name' => 'name',
  );
  /* Relationship: Taxonomy term: Content using Application category */
  $handler->display->display_options['relationships']['reverse_field_application_category_node']['id'] = 'reverse_field_application_category_node';
  $handler->display->display_options['relationships']['reverse_field_application_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_application_category_node']['field'] = 'reverse_field_application_category_node';
  $handler->display->display_options['relationships']['reverse_field_application_category_node']['required'] = TRUE;
  /* Field: Taxonomy term: Small icon */
  $handler->display->display_options['fields']['field_small_icon']['id'] = 'field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['table'] = 'field_data_field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['field'] = 'field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['label'] = '';
  $handler->display->display_options['fields']['field_small_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_icon']['settings'] = array(
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_application_category_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'application_category' => 'application_category',
  );

  /* Display: Civic categories */
  $handler = $view->new_display('block', 'Civic categories', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Civic categories';
  $handler->display->display_options['display_description'] = 'Small icons and names of civic categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Civic category */
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['id'] = 'reverse_field_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['field'] = 'reverse_field_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_civic_category_node';
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
    'civic_category' => 'civic_category',
  );
  $handler->display->display_options['block_description'] = 'Organization/Civic categories';

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
    'field_small_icon' => 'field_small_icon',
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Content using Civic category */
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['id'] = 'reverse_field_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['field'] = 'reverse_field_civic_category_node';
  $handler->display->display_options['relationships']['reverse_field_civic_category_node']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Small icon */
  $handler->display->display_options['fields']['field_small_icon']['id'] = 'field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['table'] = 'field_data_field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['field'] = 'field_small_icon';
  $handler->display->display_options['fields']['field_small_icon']['label'] = '';
  $handler->display->display_options['fields']['field_small_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_small_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_small_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_civic_category_node';
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
    'civic_category' => 'civic_category',
  );
  $handler->display->display_options['block_description'] = 'Organization/Civic categories icons';
  $export['organization_categories'] = $view;

  $view = new view();
  $view->name = 'organization_related_deployments';
  $view->description = 'Defines the "Related deployments" block for Application detail pages';
  $view->tag = 'Application';
  $view->base_table = 'node';
  $view->human_name = 'Organization related deployments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related deployments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Members (field_member) */
  $handler->display->display_options['arguments']['field_member_target_id']['id'] = 'field_member_target_id';
  $handler->display->display_options['arguments']['field_member_target_id']['table'] = 'field_data_field_member';
  $handler->display->display_options['arguments']['field_member_target_id']['field'] = 'field_member_target_id';
  $handler->display->display_options['arguments']['field_member_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_member_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_member_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_member_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_member_target_id']['summary_options']['items_per_page'] = '25';
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
    'deployment' => 'deployment',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Organization related deployments';
  $export['organization_related_deployments'] = $view;

  return $export;
}
