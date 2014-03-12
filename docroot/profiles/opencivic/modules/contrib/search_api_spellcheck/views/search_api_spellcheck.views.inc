<?php
/**
 * @file
 * search_api_spellcheck Views hooks
 *
 * Views automatically includes this file because
 * search_api_spellcheck_views_api() in search_api_spellcheck.module is
 * declared and returns settings including a path to this views subdirectory.
 * Views then looks for a file with the name [module_name].views.inc.
 *
 * Keeping views hooks in an include reduces the size of Drupal's bootstrap.
 */

/**
 * Implements hook_views_data_alter().
 *
 * search_api_views already exposes each index as a data sources. This hook
 * gives us the oppotunity to refine the data specification by asking each
 * index's server if it supports search_api_spellcheck. For those that do we
 * attach a new area handler to display spelling suggestions.
 *
 * Because the field extends views_handler_area it can optionally be added to
 * views Headers and Footers.
 * It only displays if spelling suggestions are returned.
 */
function search_api_spellcheck_views_data_alter(&$data) {
  foreach (search_api_index_load_multiple(FALSE) as $index) {
    // construct the same key search_api_views used
    $key = 'search_api_index_' . $index->machine_name;

    // Not every $index returned is complete and may not have a server
    if ($index->server() && $index->server()->supportsFeature('search_api_spellcheck')){
      $data[$key]['search_api_spellcheck'] = array(
        'title' => t('Spellcheck'),
        'group' => t('Search'),
        'help' => t('Suggestions for spellings.'),
        'area' => array(
          'handler' => 'views_handler_area_spellcheck',
        ),
      );
    }
  }
}

