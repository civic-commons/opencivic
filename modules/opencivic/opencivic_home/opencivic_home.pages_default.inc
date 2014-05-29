<?php
/**
 * @file
 * opencivic_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function opencivic_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'frontpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'pond';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'column3' => NULL,
      'secondarycolumn1' => NULL,
      'secondarycolumn2' => NULL,
      'secondarycolumn3' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '8e31e762-f897-4215-88d2-b7e176a0d6fd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-935ca9a8-e93b-4b53-8375-62e0538b50db';
    $pane->panel = 'column1';
    $pane->type = 'views_panes';
    $pane->subtype = 'application_list-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '935ca9a8-e93b-4b53-8375-62e0538b50db';
    $display->content['new-935ca9a8-e93b-4b53-8375-62e0538b50db'] = $pane;
    $display->panels['column1'][0] = 'new-935ca9a8-e93b-4b53-8375-62e0538b50db';
    $pane = new stdClass();
    $pane->pid = 'new-37c0a209-ae19-4b50-a910-f47bedfa5b45';
    $pane->panel = 'column2';
    $pane->type = 'views_panes';
    $pane->subtype = 'deployments_list-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '37c0a209-ae19-4b50-a910-f47bedfa5b45';
    $display->content['new-37c0a209-ae19-4b50-a910-f47bedfa5b45'] = $pane;
    $display->panels['column2'][0] = 'new-37c0a209-ae19-4b50-a910-f47bedfa5b45';
    $pane = new stdClass();
    $pane->pid = 'new-f11615b8-f4b8-403d-8a0e-d3995a1e54ed';
    $pane->panel = 'column3';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f11615b8-f4b8-403d-8a0e-d3995a1e54ed';
    $display->content['new-f11615b8-f4b8-403d-8a0e-d3995a1e54ed'] = $pane;
    $display->panels['column3'][0] = 'new-f11615b8-f4b8-403d-8a0e-d3995a1e54ed';
    $pane = new stdClass();
    $pane->pid = 'new-9fdac4b6-6513-4d0d-95f0-1499defe94b5';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'home_page_map-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9fdac4b6-6513-4d0d-95f0-1499defe94b5';
    $display->content['new-9fdac4b6-6513-4d0d-95f0-1499defe94b5'] = $pane;
    $display->panels['footer'][0] = 'new-9fdac4b6-6513-4d0d-95f0-1499defe94b5';
    $pane = new stdClass();
    $pane->pid = 'new-f59bc1b5-fc2b-4b03-b2de-8efe9d470dab';
    $pane->panel = 'footer';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f59bc1b5-fc2b-4b03-b2de-8efe9d470dab';
    $display->content['new-f59bc1b5-fc2b-4b03-b2de-8efe9d470dab'] = $pane;
    $display->panels['footer'][1] = 'new-f59bc1b5-fc2b-4b03-b2de-8efe9d470dab';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
