<?php
/**
 * @file
 * Suggestion class which contains both the original search key and the
 * suggested replacement.
 */
class SearchApiSpellcheckSuggestion {
  public $original;
  public $suggestion;

  /**
   * Constructor.
   *
   * @param string $original
   *   Word, phrase or sentance which could be improved.
   *
   * @param string $suggestion
   *   Suggested replacement for the $original.
   */
  public function __construct($original, $suggestion) {
    $this->original = $original;
    $this->suggestion = $suggestion;
  }
}
