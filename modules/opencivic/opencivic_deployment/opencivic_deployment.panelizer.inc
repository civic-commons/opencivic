<?php
/**
 * @file
 * opencivic_deployment.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function opencivic_deployment_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:oc_deployment:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'oc_deployment';
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
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'burr_flipped';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '2291936c-3684-4eed-8f05-9bb5e16ba5d1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef466a78-898e-498d-b17b-8ba55593881b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_deploy_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef466a78-898e-498d-b17b-8ba55593881b';
    $display->content['new-ef466a78-898e-498d-b17b-8ba55593881b'] = $pane;
    $display->panels['contentmain'][0] = 'new-ef466a78-898e-498d-b17b-8ba55593881b';
    $pane = new stdClass();
    $pane->pid = 'new-b189b779-d6ab-43e0-bc21-a0792f122e2d';
    $pane->panel = 'contentmain';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b189b779-d6ab-43e0-bc21-a0792f122e2d';
    $display->content['new-b189b779-d6ab-43e0-bc21-a0792f122e2d'] = $pane;
    $display->panels['contentmain'][1] = 'new-b189b779-d6ab-43e0-bc21-a0792f122e2d';
    $pane = new stdClass();
    $pane->pid = 'new-ed5d5cf5-86e3-4650-8dcc-c6da49a72c68';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_deploy_location';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_handlers' => array(
          'address' => 'address',
        ),
        'use_widget_handlers' => 0,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ed5d5cf5-86e3-4650-8dcc-c6da49a72c68';
    $display->content['new-ed5d5cf5-86e3-4650-8dcc-c6da49a72c68'] = $pane;
    $display->panels['contentmain'][2] = 'new-ed5d5cf5-86e3-4650-8dcc-c6da49a72c68';
    $pane = new stdClass();
    $pane->pid = 'new-fe2db3ae-c14a-4da1-9744-d56d4d764686';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_deploy_deployment_of';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fe2db3ae-c14a-4da1-9744-d56d4d764686';
    $display->content['new-fe2db3ae-c14a-4da1-9744-d56d4d764686'] = $pane;
    $display->panels['contentmain'][3] = 'new-fe2db3ae-c14a-4da1-9744-d56d4d764686';
    $pane = new stdClass();
    $pane->pid = 'new-ccfdd44e-4dff-4cdb-9203-485c6d3a1d89';
    $pane->panel = 'contentmain';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ccfdd44e-4dff-4cdb-9203-485c6d3a1d89';
    $display->content['new-ccfdd44e-4dff-4cdb-9203-485c6d3a1d89'] = $pane;
    $display->panels['contentmain'][4] = 'new-ccfdd44e-4dff-4cdb-9203-485c6d3a1d89';
    $pane = new stdClass();
    $pane->pid = 'new-6e50c92f-6243-41ca-a15c-88ccdf9261c2';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_oc_deploy_member';
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
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6e50c92f-6243-41ca-a15c-88ccdf9261c2';
    $display->content['new-6e50c92f-6243-41ca-a15c-88ccdf9261c2'] = $pane;
    $display->panels['sidebar'][0] = 'new-6e50c92f-6243-41ca-a15c-88ccdf9261c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b189b779-d6ab-43e0-bc21-a0792f122e2d';
  $panelizer->display = $display;
  $export['node:oc_deployment:default'] = $panelizer;

  return $export;
}
