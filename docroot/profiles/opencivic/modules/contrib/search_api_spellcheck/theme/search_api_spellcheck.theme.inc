<?php
/**
 * @file
 * Theme functions for search_api_spellcheck module
 */

/**
 * Outputs 'Did you mean:' spelling suggestions with links to the current
 * search page with spelling improvements.
 *
 * @param array $variables
 *   An associative array containing:
 *   - spellcheck: SearchApiSpellcheckInterface instance
 *   - options: An associative array containing:
 *     - get: (optional) An array of query keys which should be spellchecked
 *     - arg: (optional) An array of Arg numbers which should be spellchecked
 *
 * @return string
 *   HTML for spelling suggestions.
 */
function theme_search_api_spellcheck($variables) {
  $options = $variables['options'];
  $spellcheck = $variables['spellcheck'];
  $suggestion_links = array();

  if (isset($options['get'])) {
    foreach ($options['get'] as $get) {
      if ($link = $spellcheck->getSuggestionLinkForGet($get)) {
        $suggestion_links[] = $link;
      }
    }
  }

  if (isset($options['arg'])) {
    foreach ($options['arg'] as $arg) {
      if ($link = $spellcheck->getSuggestionLinkForArg($arg)) {
        $suggestion_links[] = $link;
      }
    }
  }

  switch (count($suggestion_links)) {
    case 0:
      // return nothing if there arn't any suggestions
      return '';
    case 1:
      // A single spell suggestion can be displayed in a sentance.
      $variables = array('suggestion' => $suggestion_links[0]);
      return theme('search_api_spellcheck_single_suggestion', $variables);
    default:
      // multiple suggestions can be formated as a list
      $variables = array('suggestions' => $suggestion_links);
      return theme('search_api_spellcheck_multiple_suggestions', $variables);
  }
}
