<?php
/**
 * @file
 * The class is a helpful way to provide both an updated search query link and
 * access to all the link components for themers.
 */
class SearchApiSpellcheckSuggestionLink extends SearchApiSpellcheckSuggestion {
  public $link;
  public $url;
  public $method;
  public $method_key;
  public $path;
  public $query;

  /**
   * Constructor.
   *
   * @param SearchApiSpellcheckSuggestion $suggestion
   *   Suggestion to create a link for.
   * @param string $method
   *   A value to represent where the search key is in the url:
   *   - 'get': For the query string such as /search/?key=foo%20bar
   *   - 'arg': For an argument such as /search/foo%20bar
   * @param mixed $method_key
   *   Where in the URL the search key is. This value is different depnding on
   *   $method:
   *   - For 'get' string: the query string field
   *   - For 'arg' int: the argument number
   */
  public function __construct(SearchApiSpellcheckSuggestion $suggestion, $method, $method_key) {
    $this->original = $suggestion->original;
    $this->suggestion = $suggestion->suggestion;
    $this->method = $method;
    $this->method_key = $method_key;
    $this->createPath();
    $this->createQuery();
    $this->createUrl();
    $this->createLink();
  }

  /**
   * Sets the property 'path' to the location of search results.
   *
   * If the search key is stored in an argument then this part of the path will
   * be updated with the suggested string.
   */
  public function createPath() {
    $args = arg();
    if ($this->method == 'arg') {
      $args[$this->method_key] = $this->suggestion;
    }
    $this->path = implode('/', $args);
  }

  /**
   * Sets the property 'query' to the current query plus the suggested string.
   *
   * If the search key is stored in a field in the query string then this field
   * is updated with the suggested string.
   */
  public function createQuery() {
    $query = drupal_get_query_parameters();
    if ($this->method == 'get') {
      $query[$this->method_key] = $this->suggestion;
    }
    $this->query = $query;
  }

  /**
   * Sets the property 'url' with the combined path and query to the suggested
   * search results.
   */
  public function createUrl() {
    $this->url = url($this->path, array('query' => $this->query));
  }

  /**
   * Set the property 'link' to the HTML markup for a link to the suggested
   * search results. 
   */
  public function createLink() {
    $this->link = l($this->suggestion, $this->path, array('query' => $this->query));
  }
}
