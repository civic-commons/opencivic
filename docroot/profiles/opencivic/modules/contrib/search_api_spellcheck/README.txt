Search API Spellcheck
---------------------

This module extends Search API [1] to allow search services which can generate
spelling suggestions to do so and provide a common way for them to be
altered and themed. 

[1] http://drupal.org/project/search_api

Content:
 - Glossary
 - Information for users
 - Information for search service developers


Glossary
--------

Terms as used in this module.

- Search service:
  A search engine integrated with Search API such as Solr [1] or Xapian [2].
  [1] http://drupal.org/project/search_api_solr
  [2] http://drupal.org/project/xapian
- Suggestion class:
  A pair or words, the first being the original and the second a suggested
  alternative.
- Suggestion link class:
  An extension to a Suggestion class which also provides a HTML link and URL
  which can be used by a themer to create links to search results for a
  suggestion.
- Views:
  Views [1] is a Drupal module for displaying lists. Within the context of this
  module it will be referring to Search API Views. 

[1] http://drupal.org/project/views


Information for users
---------------------

Search API will support a growing number of search services and not all will
support spelling suggestions or may not have integrated with this module yet.

If your search service has got integration then you can add a Spellcheck field
to your Views header or footer. Which will then display spelling suggestions
if they have been returned by the service.


Information for search service developers
-----------------------------------------

There are two steps to integrate a search service with Search API Spellcheck.

 | 1
 | Update your servuice class' supportsFeature() method to return TRUE to
 | 'search_api_spellcheck'. Once this is set the new Views spellcheck field will
 | be available on any indexes for your service.

 | 2
 | In your service class' search() method, check whether the
 | 'search_api_spellcheck' key is set in $options, and contains TRUE. If it
 | does, include another key 'search_api_spellcheck' with a value of type
 | SearchApiSpellcheckInterface in the results returned from this method.
 |
 | Your class implenting SearchApiSpellcheckInterface must simply implement
 | suggestionString($string) and return an improved string or FALSE.
 |
 | Your class can have whatever constructor is most suitable for dealing with 
 | your spelling suggestions for example an array property or details to access
 | another web service.
