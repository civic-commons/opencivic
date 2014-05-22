<?php
/**
 * @file
 * opencivic_blog.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function opencivic_blog_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oc_blog:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oc_blog';
  $panelizer->no_blocks = TRUE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array(
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => 'Blog
%node:title',
    'panels_breadcrumbs_paths' => 'blog',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'ef11d366-9fd7-472b-8f97-e832cc0a0e9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6efe0aa9-e0dc-4db4-9117-b40c46760dbc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => '',
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6efe0aa9-e0dc-4db4-9117-b40c46760dbc';
    $display->content['new-6efe0aa9-e0dc-4db4-9117-b40c46760dbc'] = $pane;
    $display->panels['center'][0] = 'new-6efe0aa9-e0dc-4db4-9117-b40c46760dbc';
    $pane = new stdClass();
    $pane->pid = 'new-60658b49-c219-4a30-8cf4-f398023bd62d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '60658b49-c219-4a30-8cf4-f398023bd62d';
    $display->content['new-60658b49-c219-4a30-8cf4-f398023bd62d'] = $pane;
    $display->panels['center'][1] = 'new-60658b49-c219-4a30-8cf4-f398023bd62d';
    $pane = new stdClass();
    $pane->pid = 'new-7b3f9d94-bf8e-4045-baf4-ce0af8c7c938';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b3f9d94-bf8e-4045-baf4-ce0af8c7c938';
    $display->content['new-7b3f9d94-bf8e-4045-baf4-ce0af8c7c938'] = $pane;
    $display->panels['center'][2] = 'new-7b3f9d94-bf8e-4045-baf4-ce0af8c7c938';
    $pane = new stdClass();
    $pane->pid = 'new-857a01b3-22db-4dc4-95e7-d2ca6c840f93';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '857a01b3-22db-4dc4-95e7-d2ca6c840f93';
    $display->content['new-857a01b3-22db-4dc4-95e7-d2ca6c840f93'] = $pane;
    $display->panels['center'][3] = 'new-857a01b3-22db-4dc4-95e7-d2ca6c840f93';
    $pane = new stdClass();
    $pane->pid = 'new-1ef3a187-7cd6-4acd-9962-769753c81523';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '1ef3a187-7cd6-4acd-9962-769753c81523';
    $display->content['new-1ef3a187-7cd6-4acd-9962-769753c81523'] = $pane;
    $display->panels['center'][4] = 'new-1ef3a187-7cd6-4acd-9962-769753c81523';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6efe0aa9-e0dc-4db4-9117-b40c46760dbc';
  $panelizer->display = $display;
  $export['node:oc_blog:default'] = $panelizer;

  return $export;
}
