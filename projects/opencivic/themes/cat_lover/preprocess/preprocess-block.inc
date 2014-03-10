<?php

$block = $vars['elements']['#block'];

// Generate block classes based on block conditions
// Add more conditions here as needed

// Example for "Add to marketplace" - created using standard block admin interface (Drupal's core Block module)
if($block->module == 'block' && $block->delta == 24){
	$vars['classes_array'][] = 'add-to-marketplace';
}

// After all classes are generated, add them to block attributes
$vars['attributes_array']['class'] = $vars['classes_array'];

// Uncomment below to debug/output all available block variables for each block on the page.
// Note: will be generated for each block on the page. Rewuires DEVEL module enabled - so comment before pushing to PROD, otherwise site will crash.

//dpm($vars);

