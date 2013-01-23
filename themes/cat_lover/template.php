<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */ 

/**
 * Implements hook_form_alter().
 */
function cat_lover_form_alter(&$form, &$form_state, $form_id) {
  // Add some cool text to the search block form
  if ($form_id == 'search_block_form') {
    // HTML5 placeholder attribute
    $form['search_block_form']['#attributes']['placeholder'] = t('Enter Keyword');
    // Change the text on the submit button and replace with
    // image.
    $form['actions']['submit']['#value'] = t('');
    $form['actions']['submit'] = array('#type' => 'image_button', 
      '#src' => base_path() . path_to_theme() . '/images/search_btn.png');
  }
  
  // Get search term from URL if available and put into custom
  // search forms.  This is a fairly hackish way to do this, but
  // not sure if there is a better way.
  $path = current_path();
  if (strpos($form_id, 'custom_search_blocks_form') !== FALSE &&
    strpos($path, 'search/node') !== FALSE) {
    if (isset($form['delta']['#value'])) {
      $query = str_replace('search/node/', '', $path);
      $textfield = 'custom_search_blocks_form_' . $form['delta']['#value'];
      $form[$textfield]['#default_value'] = check_plain($query); 
    }
  }
}

/**
 * Preprocessor for page.tpl.php template file.
 */
/*
function cat_lover_preprocess_page(&$vars, $hook) {
  $options = array('type' => 'file', 'scope' => 'footer', 'weight' => 5, 'cache' => FALSE);
  drupal_add_js(drupal_get_path('theme', 'cat_lover') .'/js/chartbeat.js', $options);
}
*/

/* Search */
function cat_lover_preprocess_search_result (&$vars) {
  $vars['nodetype'] = $vars['result']['type'];
}


function cat_lover_process_region(&$vars) {
  if(isset($vars['elements']['#region']['branding'])){
    $theme = alpha_get_theme();
    $vars['site_name'] = $theme->page['site_name'];
    $vars['linked_site_name'] = l($vars['site_name'], '<front>', array('attributes' => array('rel' => 'home', 'title' => t('Home')), 'html' => TRUE));
    $vars['site_slogan'] = $theme->page['site_slogan'];      
    $vars['site_name_hidden'] = $theme->page['site_name_hidden'];
    $vars['site_slogan_hidden'] = $theme->page['site_slogan_hidden'];
    $vars['logo'] = $theme->page['logo'];
    $vars['logo_img'] = $vars['logo'] ? '<img src="' . $vars['logo'] . '" alt="' . $vars['site_name'] . '" id="logo" />' : '';
    $vars['linked_logo_img'] = $vars['logo'] ? l($vars['logo_img'], '<front>', array('attributes' => array('title' => t($vars['site_name'])), 'html' => TRUE)) : '';
  }
}


function cat_lover_preprocess_region(&$vars) {
  if (isset($vars['elements']['#page']['node']) && $vars['elements']['#region'] == 'content') {
    $vars['theme_hook_suggestions'][] = 'region__content__'. $vars['elements']['#page']['node']->type;
  }

}

function cat_lover_menu_local_tasks(&$variables) {
  $output = '';
  if (!empty($variables['primary'])) {
    $variables['primary']['#prefix'] = '<h2 class="element-invisible">' . t('Primary tabs') . '</h2>';
    $variables['primary']['#prefix'] .= '<ul class="tabs primary">';
    $variables['primary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['primary']);
  }
  if (!empty($variables['secondary'])) {
    $variables['secondary']['#prefix'] = '<h2 class="element-invisible">' . t('Secondary tabs') . '</h2>';
    $variables['secondary']['#prefix'] .= '<ul class="tabs secondary">';
    $variables['secondary']['#suffix'] = '</ul>';
    $output .= drupal_render($variables['secondary']);
  }
  return $output;
}

/**
 * Implements hook_breadcrumb().
 */
function cat_lover_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {
    $breadcrumb[] = drupal_get_title();
    $output = '<h2 class="element-invisible">' . t('You are here') . '</h2>';

    $output .= '<div class="breadcrumb">' . implode(' » ', $breadcrumb) . '</div>';
    return $output;
  }
}

