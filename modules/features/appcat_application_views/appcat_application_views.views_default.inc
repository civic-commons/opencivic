<?php
/**
 * @file
 * appcat_application_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function appcat_application_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'application_at_a_glance';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Application At a Glance';
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
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Application Categories';
  $handler->display->display_options['fields']['view']['view'] = 'application_categories';
  $handler->display->display_options['fields']['view']['display'] = 'block';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Application subcategory */
  $handler->display->display_options['fields']['field_application_sub_cate']['id'] = 'field_application_sub_cate';
  $handler->display->display_options['fields']['field_application_sub_cate']['table'] = 'field_data_field_application_sub_cate';
  $handler->display->display_options['fields']['field_application_sub_cate']['field'] = 'field_application_sub_cate';
  $handler->display->display_options['fields']['field_application_sub_cate']['label'] = 'Application subcategories';
  $handler->display->display_options['fields']['field_application_sub_cate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_sub_cate']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Civic Categories';
  $handler->display->display_options['fields']['view_1']['view'] = 'application_categories';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: Content: Civic subcategory */
  $handler->display->display_options['fields']['field_civic_sub_cate']['id'] = 'field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['table'] = 'field_data_field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['field'] = 'field_civic_sub_cate';
  $handler->display->display_options['fields']['field_civic_sub_cate']['label'] = 'Civic subcategories';
  $handler->display->display_options['fields']['field_civic_sub_cate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_civic_sub_cate']['delta_offset'] = '0';
  /* Field: Content: Creator */
  $handler->display->display_options['fields']['field_creator']['id'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['table'] = 'field_data_field_creator';
  $handler->display->display_options['fields']['field_creator']['field'] = 'field_creator';
  $handler->display->display_options['fields']['field_creator']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_creator']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Host */
  $handler->display->display_options['fields']['field_download_url']['id'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['table'] = 'field_data_field_download_url';
  $handler->display->display_options['fields']['field_download_url']['field'] = 'field_download_url';
  $handler->display->display_options['fields']['field_download_url']['label'] = 'Host website';
  $handler->display->display_options['fields']['field_download_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_download_url']['click_sort_column'] = 'url';
  /* Field: Content: Demo url */
  $handler->display->display_options['fields']['field_install_url']['id'] = 'field_install_url';
  $handler->display->display_options['fields']['field_install_url']['table'] = 'field_data_field_install_url';
  $handler->display->display_options['fields']['field_install_url']['field'] = 'field_install_url';
  $handler->display->display_options['fields']['field_install_url']['label'] = 'Demo Website';
  $handler->display->display_options['fields']['field_install_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_install_url']['click_sort_column'] = 'url';
  /* Field: Content: License */
  $handler->display->display_options['fields']['field_license']['id'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['table'] = 'field_data_field_license';
  $handler->display->display_options['fields']['field_license']['field'] = 'field_license';
  $handler->display->display_options['fields']['field_license']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_license']['delta_offset'] = '0';
  /* Field: Content: Release Notes */
  $handler->display->display_options['fields']['field_release_notes']['id'] = 'field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['table'] = 'field_data_field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['field'] = 'field_release_notes';
  $handler->display->display_options['fields']['field_release_notes']['element_label_colon'] = FALSE;
  /* Field: Content: Requirements */
  $handler->display->display_options['fields']['field_requirements']['id'] = 'field_requirements';
  $handler->display->display_options['fields']['field_requirements']['table'] = 'field_data_field_requirements';
  $handler->display->display_options['fields']['field_requirements']['field'] = 'field_requirements';
  $handler->display->display_options['fields']['field_requirements']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_requirements']['delta_offset'] = '0';
  /* Field: Content: Software type */
  $handler->display->display_options['fields']['field_software_type']['id'] = 'field_software_type';
  $handler->display->display_options['fields']['field_software_type']['table'] = 'field_data_field_software_type';
  $handler->display->display_options['fields']['field_software_type']['field'] = 'field_software_type';
  $handler->display->display_options['fields']['field_software_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_software_type']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_keywords']['id'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['table'] = 'field_data_field_keywords';
  $handler->display->display_options['fields']['field_keywords']['field'] = 'field_keywords';
  $handler->display->display_options['fields']['field_keywords']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_keywords']['delta_offset'] = '0';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_aggregate_rating']['id'] = 'field_aggregate_rating';
  $handler->display->display_options['fields']['field_aggregate_rating']['table'] = 'field_data_field_aggregate_rating';
  $handler->display->display_options['fields']['field_aggregate_rating']['field'] = 'field_aggregate_rating';
  $handler->display->display_options['fields']['field_aggregate_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aggregate_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_aggregate_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'profiles/apps_catalog/modules/custom/fivestar_green/greenstar/greenstar.css',
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
    'application' => 'application',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'At a Glance';
  $export['application_at_a_glance'] = $view;

  $view = new view();
  $view->name = 'application_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Application categories';
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

  /* Display: Application categories */
  $handler = $view->new_display('block', 'Application categories', 'block');
  $handler->display->display_options['display_description'] = 'Small icons and names of application categories';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

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
    'field_small_icon' => 'field_small_icon',
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
  $export['application_categories'] = $view;

  $view = new view();
  $view->name = 'related_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Related applications (field_related_applications) */
  $handler->display->display_options['arguments']['field_related_applications_target_id']['id'] = 'field_related_applications_target_id';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['table'] = 'field_data_field_related_applications';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['field'] = 'field_related_applications_target_id';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_applications_target_id']['summary_options']['items_per_page'] = '25';
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
    'application' => 'application',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Related applications';
  $handler->display->display_options['block_caching'] = '8';
  $export['related_applications'] = $view;

  return $export;
}