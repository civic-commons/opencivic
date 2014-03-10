<?php
/**
 * @file
 * opencivic_home.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function opencivic_home_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Home Page/Participate';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'appcat_participate';
  $fe_block_boxes->body = '<p><a class="button" href="node/add/application">Add an App</a><br /><a class="button" href="node/add/organization">Add an Organization</a><br /><a class="button" href="node/add/article">Write a Story</a></p>';

  $export['appcat_participate'] = $fe_block_boxes;

  return $export;
}
