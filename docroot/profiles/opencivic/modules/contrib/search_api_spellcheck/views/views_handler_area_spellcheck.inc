<?php
/**
 * @file
 * Views Search API area handler
 */

/**
 * Area handlers are available to be placed in a views header and footer.
 * Spelling suggestions will only display if some are returned with the results.
 */
class views_handler_area_spellcheck extends views_handler_area {
  function pre_query() {
    $this->query->setOption('search_api_spellcheck', TRUE);
  }

  function render($empty = FALSE) {
    $results = $this->query->getSearchApiResults();

    // if no spellcheck results are returned then return
    if (!isset($results['search_api_spellcheck'])) {
      return '';
    }

    // Loop through the filters and find any text searches as these may be
    // related to the returned spelling suggestions
    $get = array();
    foreach ($this->view->filter as $key => $filter) {
      if ($filter instanceof SearchApiViewsHandlerFilterFulltext) {
        // We need to pass the key names to the theme function.

        // theme_search_api_spellcheck() can return one or more links with
        // spelling suggestions. These links need to direct the to user back to
        // the same filtered page but with only the origional filter key changed
        // to the suggestion.
        $get[] = $filter->options['expose']['identifier'];
      }
    }

    $variables = array(
      'spellcheck' => $results['search_api_spellcheck'],
      'options' => array(
        'get' => $get,
      ),
    );
    return theme('search_api_spellcheck', $variables);
  }
}

