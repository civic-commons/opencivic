<?php
// Plugin definition
$plugin = array(
  'title' => t('CFR Pond'),
  'icon' => 'cfr-pond.png',
  'category' => t('Panopoly'),
  'theme' => 'cfr-pond',
  'css' => 'cfr-pond.css',
  'regions' => array(
    'header' => t('Header'),
    'middle' => t('Middle'),
    'column1' => t('Row 1: First Column'),
    'column2' => t('Row 1: Second Column'),
    'column3' => t('Row 1: Third Column'),
    'secondarycolumn1' => t('Row 2: First Column'),
    'secondarycolumn2' => t('Row 2: Second Column'),
    'secondarycolumn3' => t('Row 2: Third Column'),
    'footer' => t('Footer'),
  ),
);
