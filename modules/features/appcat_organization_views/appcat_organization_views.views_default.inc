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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Civic sector */
  $handler->display->display_options['fields']['field_civic_category']['id'] = 'field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['table'] = 'field_data_field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['field'] = 'field_civic_category';
  $handler->display->display_options['fields']['field_civic_category']['delta_offset'] = '0';
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
  $translatables['organization_at_a_glance'] = array(
    t('Master'),
    t('At a Glance'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Civic sector'),
    t('Apps expertise'),
    t('Organization type'),
    t('Tags'),
    t('All'),
    t('Block'),
    t('Organization At a Glance'),
  );
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
  /* Relationship: Taxonomy term: Content using Application function */
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
  /* Relationship: Taxonomy term: Content using Civic sector */
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
  /* Relationship: Taxonomy term: Content using Civic sector */
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
  $translatables['organization_categories'] = array(
    t('Master'),
    t('Application categories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_application_category'),
    t('All'),
    t('Civic categories'),
    t('Small icons and names of civic categories'),
    t('field_civic_category'),
    t('Organization/Civic categories'),
    t('Civic categories icons'),
    t('Small icons of civic categories'),
    t('.'),
    t(','),
    t('Organization/Civic categories icons'),
  );
  $export['organization_categories'] = $view;

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
  $handler->display->display_options['title'] = 'Organizations';
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
  /* Field: Content: Url */
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
  $handler->display->display_options['display_description'] = 'Organizations listing page.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'orgs';
  $translatables['organization_list'] = array(
    t('Master'),
    t('Organizations'),
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
    t('Url'),
    t('Org type'),
    t('App experience'),
    t('Services'),
    t('Civic Focus'),
    t('Organizations list'),
    t('Organizations listing page.'),
  );
  $export['organization_list'] = $view;

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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'organization_map';
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

  /* Display: Organization map */
  $handler = $view->new_display('block', 'Organization map', 'block');
  $handler->display->display_options['display_description'] = 'Defines the map that appears on the Organization detail page';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Organization/Map on detail page';

  /* Display: Organization Data Overlay */
  $handler = $view->new_display('openlayers', 'Organization Data Overlay', 'openlayers_org');
  $handler->display->display_options['display_description'] = 'Map of a single organization';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_coordinates',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_location',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['organization_map'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Nid'),
    t('All'),
    t('Organization map'),
    t('Defines the map that appears on the Organization detail page'),
    t('Organization/Map on detail page'),
    t('Organization Data Overlay'),
    t('Map of a single organization'),
  );
  $export['organization_map'] = $view;

  $view = new view();
  $view->name = 'organization_related_deployments';
  $view->description = 'Defines the "Related deployments" block for Organization detail pages';
  $view->tag = 'Organization';
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
  /* Field: Content: Url */
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
  /* Contextual filter: Content: Developers (field_member) */
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
  $translatables['organization_related_deployments'] = array(
    t('Master'),
    t('Related deployments'),
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
    t('All'),
    t('Block'),
    t('Organization related deployments'),
  );
  $export['organization_related_deployments'] = $view;

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

  /* Display: Organizations map */
  $handler = $view->new_display('block', 'Organizations map', 'block');
  $handler->display->display_options['display_description'] = 'Defines the map of Organizations';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['block_description'] = 'Organizations/Map on orgs listing page';

  /* Display: Organizations Data Overlay */
  $handler = $view->new_display('openlayers', 'Organizations Data Overlay', 'openlayers_orgs');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_coordinates',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_address',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
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
    t('Organizations map'),
    t('Defines the map of Organizations'),
    t('Organizations/Map on orgs listing page'),
    t('Organizations Data Overlay'),
  );
  $export['organizations_map'] = $view;

  return $export;
}
