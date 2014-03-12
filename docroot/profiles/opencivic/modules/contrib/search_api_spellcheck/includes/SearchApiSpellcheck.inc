<?php
/**
 * @file
 * Spellcheck Service Interface and Class.
 */

interface SearchApiSpellcheckInterface {
  /**
   * Takes a string and returns either the string with spelling suggestions or
   * FALSE if none could be found.
   *
   * @param string $original_string
   *   A single word or full sentance.
   *
   * @return 
   *   A string if any suggestions could be applied or FALSE if none could be
   *   applied.
   */
  public function suggestString($original_string);
}

/*
 * Maintains both a list of suggestions and and list of sub spellcheck services.
 */
class SearchApiSpellcheck implements SearchApiSpellcheckInterface{
  protected $suggestions = array();
  protected $spellchecks = array();

  /**
   * Add a suggestion object to the class which is stored and then checked when
   * getSuggestion() is called.
   *
   * @param SearchApiSpellcheckSuggestion $suggestion
   *   A suggestion instance to be stored and used by this service.
   */
  public function addSuggestion(SearchApiSpellcheckSuggestion $suggestion) {
    $this->suggestions[] = $suggestion;
  }

  /**
   * This call also maintains a list of sub interances using the same interface.
   * These services are then also check when getSuggestion() is called.
   *
   * @param SearchApiSpellcheck $spellcheck
   *   A service which should also be queried for spelling suggestions.
   */
  public function addSpellcheck(SearchApiSpellcheckInterface $spellcheck) {
    $this->spellchecks[] = $spellcheck;
  }

  /**
   * Check if any of the added spellcheck suggestions match either all or part
   * of the string.
   *
   * This is a simple method which at best only returns a string. You might be
   * better of using getSuggestion() which returns a
   * SearchApiSpellcheckSuggestion.
   *
   * @param string $original_string
   *   A single word or full sentance.
   *
   * @return 
   *   A string if any suggestions could be applied or FALSE if none could be
   *   applied.
   *
   * @see getSuggestion()
   */
  public function suggestString($original_string) {
    $suggest_string = $original_string;
    foreach ($this->suggestions as $ws) {
      // Use a regular expression to replace only full words and not part of a
      // word.
      $suggest_string = preg_replace(
        '/\b' . $ws->original . '\b/u',
        $ws->suggestion,
        $suggest_string
      );
    }

    // Loop through any sub services to check if they can improve our string.
    // They'll return false if no change has been made.
    foreach ($this->spellchecks as $spellcheck) {
      if ($spellcheck_suggest_string = $spellcheck->suggestString($suggest_string)) {
        $suggest_string = $spellcheck_suggest_string;
      }
    }

    // If the $suggest_string is the same as $original_string then no
    // suggestions were suitable to applied and we return FALSE. Otherwise
    // return the suggested string.
    return $suggest_string == $original_string ? FALSE : $suggest_string;
  }

  /**
   * Pass a string and if it can be improved by any of the suggestions or
   * sub-services added then return a suggesiton. If no change can be suggested
   * return FALSE.
   *
   * @param string
   *   Word or sentance.
   *
   * @return
   *   SearchApiSpellcheckSuggestion if any suggestions could be applied. If
   *   not then returns FALSE.
   */
  public function getSuggestion($original_string) {
    if ($suggestion = $this->suggestString($original_string)) {
      return new SearchApiSpellcheckSuggestion($original_string, $suggestion);
    }
    return FALSE;
  }

  /**
   * Accepts a Drupal arg number which is used to get the value submitted and
   * returns a link to the current page with whatever value is in the URL
   * argument replaced with a suggestion.
   *
   * This method is for search pages which submit the search key string as an
   * argument in a url such as:
   * /search/foo%20bar
   *
   * @param int $arg
   *   Drupal URL argument.
   *
   * @return
   *   SearchApiSpellcheckSuggestionLink if any suggestions could be applied.
   *   if not then returns FALSE.
   *
   * @see getSuggestionLinkForGet()
   */
  public function getSuggestionLinkForArg($arg) {
    if ($suggestion = $this->getSuggestion(arg($arg))) {
      return new SearchApiSpellcheckSuggestionLink($suggestion, 'arg', $arg);
    }
    return FALSE;
  }

  /**
   * Accepts a a query string key  which is used to get the value submitted and
   *
   * returns a link to the current page with whatever value is in the
   * query string replaced with a suggestion.
   *
   * This method is for search pages which submit the search key string as a
   * field in the query string such as:
   * /search/?key=foo%20bar
   *
   * @param string $get
   *   Query string field.
   *
   * @see getSuggestionLinkForArg()
   */
  public function getSuggestionLinkForGet($get) {
    if (isset($_GET[$get])) {
      $original = $_GET[$get];
      if (is_string($original) && $suggestion = $this->getSuggestion($original)) {
        return new SearchApiSpellcheckSuggestionLink($suggestion, 'get', $get);
      }
    }
    return FALSE;
  }
}
