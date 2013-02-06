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
        'facetapi-H65Q2aZGSwg0NjuAs0L4Lat4SpOTTWTt' => array(
          'module' => 'facetapi',
          'delta' => 'H65Q2aZGSwg0NjuAs0L4Lat4SpOTTWTt',
          'region' => 'sidebar_second',
          'weight' => '-9',
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
        'facetapi-PIpm1F2SslOJoWG1ygdwJq69x5l0Sto8' => array(
          'module' => 'facetapi',
          'delta' => 'PIpm1F2SslOJoWG1ygdwJq69x5l0Sto8',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-kvkqXO0AYWXN4IfCM0gcypUURoVeDdwa' => array(
          'module' => 'facetapi',
          'delta' => 'kvkqXO0AYWXN4IfCM0gcypUURoVeDdwa',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'facetapi-zJ8Cbklh6Lz1M1mblPUBuhgT05r4yNPr' => array(
          'module' => 'facetapi',
          'delta' => 'zJ8Cbklh6Lz1M1mblPUBuhgT05r4yNPr',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'facetapi-EVy8XrZmImxuPtoV31YhMUT8AqEmKQEV' => array(
          'module' => 'facetapi',
          'delta' => 'EVy8XrZmImxuPtoV31YhMUT8AqEmKQEV',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'facetapi-SmJF4TwRocwMk72yqCn6yn05Jat7TLSF' => array(
          'module' => 'facetapi',
          'delta' => 'SmJF4TwRocwMk72yqCn6yn05Jat7TLSF',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'facetapi-0KucCp82G94283XM1LD00j19lNmGfBfA' => array(
          'module' => 'facetapi',
          'delta' => '0KucCp82G94283XM1LD00j19lNmGfBfA',
          'region' => 'sidebar_second',
          'weight' => '-1',
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
        'facetapi-82yKIzQWgInCdObjDOd2D5WqW4CpGp45' => array(
          'module' => 'facetapi',
          'delta' => '82yKIzQWgInCdObjDOd2D5WqW4CpGp45',
          'region' => 'sidebar_second',
          'weight' => '2',
        ),
        'facetapi-wr0XiuOVjVSefBe0HbGvve01FFfxUYm3' => array(
          'module' => 'facetapi',
          'delta' => 'wr0XiuOVjVSefBe0HbGvve01FFfxUYm3',
          'region' => 'sidebar_second',
          'weight' => '3',
        ),
        'facetapi-rF6mBsrpInxZ0mPtD8e0ZC0NAQjqhdBR' => array(
          'module' => 'facetapi',
          'delta' => 'rF6mBsrpInxZ0mPtD8e0ZC0NAQjqhdBR',
          'region' => 'sidebar_second',
          'weight' => '4',
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
  $context->description = 'This is a sitewide context that gives';
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
  t('This is a sitewide context that gives');
  $export['search_sitewide'] = $context;

  return $export;
}
