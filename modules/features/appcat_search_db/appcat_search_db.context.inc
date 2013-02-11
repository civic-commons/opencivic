<?php
/**
 * @file
 * appcat_search_db.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function appcat_search_db_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page';
  $context->description = 'Search page';
  $context->tag = 'Search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search' => 'search',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-PilZ3YNEX1VpkXQDoB4j6AS8jaSnbvTk' => array(
          'module' => 'facetapi',
          'delta' => 'PilZ3YNEX1VpkXQDoB4j6AS8jaSnbvTk',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-xnST5yTdCMHMVNc6VGXQ6HEzlmu5DHOQ' => array(
          'module' => 'facetapi',
          'delta' => 'xnST5yTdCMHMVNc6VGXQ6HEzlmu5DHOQ',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-Vn8grOhiXtX9JCJ1vhG3JbaHJ1avhwkV' => array(
          'module' => 'facetapi',
          'delta' => 'Vn8grOhiXtX9JCJ1vhG3JbaHJ1avhwkV',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-AiS11Yq1KpRaXszcfPq4beqTqRwtn1VO' => array(
          'module' => 'facetapi',
          'delta' => 'AiS11Yq1KpRaXszcfPq4beqTqRwtn1VO',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'facetapi-uSb0zDxvVG4IwGx04BDjgoyKFCQGyb2O' => array(
          'module' => 'facetapi',
          'delta' => 'uSb0zDxvVG4IwGx04BDjgoyKFCQGyb2O',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
        'facetapi-wr0XiuOVjVSefBe0HbGvve01FFfxUYm3' => array(
          'module' => 'facetapi',
          'delta' => 'wr0XiuOVjVSefBe0HbGvve01FFfxUYm3',
          'region' => 'sidebar_second',
          'weight' => '3',
        ),
        'facetapi-Uky1JHXkhxZfH60IAVDpR3ECxq9kEgi2' => array(
          'module' => 'facetapi',
          'delta' => 'Uky1JHXkhxZfH60IAVDpR3ECxq9kEgi2',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
        'facetapi-qF7pwan8Rf3k0RALd2zIQl00QdtEKzbu' => array(
          'module' => 'facetapi',
          'delta' => 'qF7pwan8Rf3k0RALd2zIQl00QdtEKzbu',
          'region' => 'sidebar_second',
          'weight' => '6',
        ),
        'facetapi-lNSRQwBhJ5su6nIx0NPRuMqVMRLiw44c' => array(
          'module' => 'facetapi',
          'delta' => 'lNSRQwBhJ5su6nIx0NPRuMqVMRLiw44c',
          'region' => 'sidebar_second',
          'weight' => '7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Search');
  t('Search page');
  $export['search_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_sitewide';
  $context->description = 'This is a sitewide context that defines the search block.';
  $context->tag = 'Sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search-page' => array(
          'module' => 'views',
          'delta' => '-exp-search-page',
          'region' => 'search_bar',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide');
  t('This is a sitewide context that defines the search block.');
  $export['search_sitewide'] = $context;

  return $export;
}
