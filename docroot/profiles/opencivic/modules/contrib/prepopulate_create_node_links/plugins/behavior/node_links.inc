<?php
/**
 * @file
 * Behavior plugin definition
 */

$plugin = array(
  'title' => t('Prepopulate create node links'),
  'description' => t('Creates links on nodes to node/add with a proper query arg for prepopulate.'),
  'class' => 'PrepopulateCreateNodeLinksInstanceBehavior',
  'behavior type' => 'instance',
);
