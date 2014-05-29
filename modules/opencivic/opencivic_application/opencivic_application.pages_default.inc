<?php
/**
 * @file
 * opencivic_application.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function opencivic_application_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'apps';
  $page->task = 'page';
  $page->admin_title = 'Apps';
  $page->admin_description = '';
  $page->path = 'apps/!keywords';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Apps',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array(
    'keywords' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_apps_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'apps';
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
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Apps search list',
        'keyword' => 'view',
        'name' => 'view:apps_search_list-ctools_context_1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bryant_flipped_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Applications';
  $display->uuid = 'd08f840b-70dd-4967-9079-8e1ab8ac0859';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0abf7372-16af-4eec-9c28-8d06cfb757fa';
    $pane->panel = 'contentmain';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'uuid:e9cf9252-6f6e-4f24-b2eb-a3897a2c53a7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0abf7372-16af-4eec-9c28-8d06cfb757fa';
    $display->content['new-0abf7372-16af-4eec-9c28-8d06cfb757fa'] = $pane;
    $display->panels['contentmain'][0] = 'new-0abf7372-16af-4eec-9c28-8d06cfb757fa';
    $pane = new stdClass();
    $pane->pid = 'new-f164c4ed-a45c-4465-bc83-abc61509a315';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'apps_search_list-panel_pane_1';
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
    $pane->uuid = 'f164c4ed-a45c-4465-bc83-abc61509a315';
    $display->content['new-f164c4ed-a45c-4465-bc83-abc61509a315'] = $pane;
    $display->panels['contentmain'][1] = 'new-f164c4ed-a45c-4465-bc83-abc61509a315';
    $pane = new stdClass();
    $pane->pid = 'new-d27d70b3-3fe5-4c24-9ebc-e60115b7851a';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'opencivic_application_facet_search-panel_pane_1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd27d70b3-3fe5-4c24-9ebc-e60115b7851a';
    $display->content['new-d27d70b3-3fe5-4c24-9ebc-e60115b7851a'] = $pane;
    $display->panels['contentmain'][2] = 'new-d27d70b3-3fe5-4c24-9ebc-e60115b7851a';
    $pane = new stdClass();
    $pane->pid = 'new-d478da8e-fdf7-4c7c-8f35-21ea36efa5ca';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'deployments_map-panel_pane_1';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd478da8e-fdf7-4c7c-8f35-21ea36efa5ca';
    $display->content['new-d478da8e-fdf7-4c7c-8f35-21ea36efa5ca'] = $pane;
    $display->panels['contentmain'][3] = 'new-d478da8e-fdf7-4c7c-8f35-21ea36efa5ca';
    $pane = new stdClass();
    $pane->pid = 'new-d9acd987-2f25-46ba-a8b9-b947372fa939';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-CYD2Cu94E1JmyRCgAan7cW0tZkzM7n4X';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
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
    $pane->uuid = 'd9acd987-2f25-46ba-a8b9-b947372fa939';
    $display->content['new-d9acd987-2f25-46ba-a8b9-b947372fa939'] = $pane;
    $display->panels['sidebar'][0] = 'new-d9acd987-2f25-46ba-a8b9-b947372fa939';
    $pane = new stdClass();
    $pane->pid = 'new-8b8a536f-7d0b-4f4f-8857-715c324c31f2';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-OJUJxzfYb0cUBKO8191iNWzX0y80x20Y';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8b8a536f-7d0b-4f4f-8857-715c324c31f2';
    $display->content['new-8b8a536f-7d0b-4f4f-8857-715c324c31f2'] = $pane;
    $display->panels['sidebar'][1] = 'new-8b8a536f-7d0b-4f4f-8857-715c324c31f2';
    $pane = new stdClass();
    $pane->pid = 'new-d5043bc8-c0fb-497d-8c1b-840766497bc0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-w6hEFS6f9EX6AwseTEAdKAFj1MJUJBI4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd5043bc8-c0fb-497d-8c1b-840766497bc0';
    $display->content['new-d5043bc8-c0fb-497d-8c1b-840766497bc0'] = $pane;
    $display->panels['sidebar'][2] = 'new-d5043bc8-c0fb-497d-8c1b-840766497bc0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['apps'] = $page;

  return $pages;

}
