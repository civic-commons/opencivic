<?php
/**
 * Implements theme_field();
 * 
 * Themes an address according to the default renderer.
 */
function theme_addressfield_formatter($vars) {
  $address = $vars['address'];
  $handlers = $vars['handlers'];
  
  $out = addressfield_generate($address, $handlers, array('mode' => 'render'));
  return '<div class="addressfield">' . render($out) . '</div>';
}

/**
 * Implements theme_field();
 * 
 * Themes an address field into "city state, country"
 */
function theme_addressfield_formatter__citystate($vars) {
  $loc = $vars['address'];
  
  // Determine which location components to render
  $out = array();
  if (!empty($loc['locality'])) {
    $out[] = $loc['locality'];
  }
  if (!empty($loc['administrative_area'])) {
    $out[] = $loc['administrative_area'];
  }
  if ($loc['country'] != addressfield_tokens_default_country() && $country_name = _addressfield_tokens_country($loc['country'])) {
    $out[] = $country_name;
  }
  
  // If there's no location, render an alternate
  if (empty($out)) {
    $out[] = 'Undefined';
  }
  
  // Render the location components
  $output = '<span class="addressfield-citystate">' . implode(', ', $out) . '</span>';
  
  return $output;
}

/**
 * Implements theme_field();
 * 
 * Themes an address field into "name, street1, street2, city state zip country"
 */
function theme_addressfield_formatter__linear($vars) {
  $loc = $vars['address'];
  
  // Determine which location components to render
  $out = array();
  if (!empty($loc['name_line']) && $vars['name_line']) {
    $out[] = $loc['name_line'];
  }
  if (!empty($loc['organisation_name']) && $vars['organisation_name']) {
    $out[] = $loc['organisation_name'];
  }
  if (!empty($loc['thoroughfare'])) {
    $out[] = $loc['thoroughfare'];
  }
  if (!empty($loc['premise']) && $vars['premise']) {
    $out[] = $loc['premise'];
  }
  if (!empty($loc['locality'])) {
    $out[] = $loc['locality'];
  }
  if (!empty($loc['administrative_area'])) {
    $out[] = $loc['administrative_area'];
  }
  if (!empty($loc['postal_code'])) {
    $out[] = $loc['postal_code'];
  }
  if ($loc['country'] != addressfield_tokens_default_country() && $country_name = _addressfield_tokens_country($loc['country'])) {
    $out[] = $country_name;
  }
  
  // Render the location components
  $output = implode(', ', $out);
  
  return $output;
}

function theme_addressfield_formatter__components($vars) {
  $loc = $vars['address'];
  $components = $vars['components'];
  $separator = $vars['separator'];
  
  $out = array();
  foreach ($components as $key) {
    if (!empty($loc[$key])) {
      $out[$key] = $loc[$key];
    }
    elseif ($key == 'country_full' && !empty($loc['country'])) {
      $out[$key] = _addressfield_tokens_country($loc['country']);
    }
    elseif ($key == 'administrative_area_full' && !empty($loc['country']) && !empty($loc['administrative_area'])) {
      $out[$key] = _addressfield_tokens_state($loc['country'], $loc['administrative_area']);
    }
  }
  
  return implode($separator, $out);
}