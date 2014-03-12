<?php

/**
 * @file
 * Views random seed order class.
 */

/**
 * Handle a random sort with seed.
 */
class views_random_seed_handler_sort_random extends views_handler_sort {

  function option_definition() {
    $options = parent::option_definition();

    $options['user_seed_type'] = array('default' => 'same_per_user');
    $options['reset_seed_int'] = array('default' => '3600');
    $options['reset_seed_custom'] = array('default' => '300');
    $options['custom_seed'] = array('default' => '');

    return $options;
  }

  // Options form.
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['order']['#access'] = FALSE;

    // User seed type.
    $form['user_seed_type'] = array(
      '#type' => 'radios',
      '#title' => t('User seed type'),
      '#options' => array(
        'same_per_user' => t('Use the same seed for every user'),
        'diff_per_user' => t('Use a different seed per user'),
        'custom' => t('Use custom PHP code')
      ),
      '#default_value' => isset($this->options['user_seed_type']) ? $this->options['user_seed_type'] : 'same_per_user',
    );

    // User seed type.
    $form['reset_seed_int'] = array(
      '#type' => 'radios',
      '#title' => t('Reset seed'),
      '#options' => array(
        'never' => t('Never'),
        'custom' => t('Custom'),
        '3600' => t('Every hour'),
        '28800' => t('Every day'),
      ),
      '#default_value' => isset($this->options['reset_seed_int']) ? $this->options['reset_seed_int'] : '3600',
    );
    $form['reset_seed_custom'] = array(
      '#type' => 'textfield',
      '#size' => 10,
      '#title' => t('Custom reset seed'),
      '#required' => TRUE,
      '#default_value' => isset($this->options['reset_seed_custom']) ? $this->options['reset_seed_custom'] : '300',
      '#description' => t('Define your own custom reset time, must be a number and is in seconds. Choose custom in the options above.'),
    );

    // Custom seed textarea.
    $form['custom_seed'] = array(
      '#type' => 'textarea',
      '#title' => t('Custom PHP code'),
      '#description' => t('PHP code, must return a string. Do not include <?php and ?> tags, this is passed through <code>eval()</code>.'),
      '#default_value' => isset($this->options['custom_seed']) ? $this->options['custom_seed'] : NULL,
    );

    // Caching strategy info.
    $form['cache_strategy'] = array(
      '#type' => 'item',
      '#title' => t('Cache exclude'),
      '#description' => t('If you enable page caching, anonymous users might get duplicate items depending on their seed and which pages are allready cached by Drupal. If you wish to exclude paths from getting cached for anonymous users, install <a href="!url" target="_blank">Cache exclude</a>.', array('!url' => 'http://drupal.org/project/cacheexclude')),
    );

  }

  // Perform query.
  function query() {
    $db_type = db_driver();
    $seed = views_random_seed_calculate_seed($this->options, $this->view->name, $this->view->current_display, $db_type);
    switch ($db_type) {
      case 'mysql':
      case 'mysqli':
        $formula = 'RAND(' . $seed . ')';
        break;
      case 'pgsql':
        // For PgSQL we'll run an extra query with a integer between
        // 0 and 1 which will be used by the RANDOM() function.
        db_query('select setseed(' . $seed . ')');
        db_query("select random()");
        $formula = 'RANDOM()';
        break;
    }
    if (!empty($formula)) {
      $this->query->add_orderby(NULL, $formula, $this->options['order'], '_' . $this->field);
    }
  }
}

/**
 * Calculate a seed.
 *
 * @param array $options The options for the random seed handler.
 * @param string $view_name The name of the view.
 * @param string $display The current display.
 * @param string $db_type the current database type (mysql(i) - pgsql)
 *
 * @return int $seed Seed value which is a timestamp.
 */
function views_random_seed_calculate_seed($options, $view_name, $display, $db_type) {
  $time = REQUEST_TIME;
  $seed_name = 'views_seed_name-' . $view_name . '-' . $display;
  $seed_time = 'views_seed_time-' . $view_name . '-' . $display;
  $seed = isset($_SESSION[$seed_name]) ? $_SESSION[$seed_name] : FALSE;

  if ($options['user_seed_type'] == 'custom') {
    $seed = eval($options['custom_seed']);
    return (int) $seed;
  }

  // Create a first seed if necessary.
  if ($seed == FALSE) {
    $seed = _views_random_seed_generate_seed($options['user_seed_type'], $seed_name, $seed_time, $time, $db_type);
  }

  // Reset seed or not ?
  if ($options['reset_seed_int'] != 'never') {
    $reset_time = $options['reset_seed_int'] == 'custom' ? $options['reset_seed_custom'] : $options['reset_seed_int'];
    if (($_SESSION[$seed_time] + $reset_time) < $time) {
      variable_del($seed_name);
      $seed = _views_random_seed_generate_seed($options['user_seed_type'], $seed_name, $seed_time, $time, $db_type);
    }
  }

  // Return seed.
  return $seed;
}

/**
 * Helper function to generate a seed
 *
 * @param string $user_seed_type Type of user seed.
 * @param string $seed_name Name of the seed.
 * @param string $seed_time Time of the seed.
 * @param int $time Current timestamp.
 * @param string $db_type the current database type (mysql(i) - pgsql)
 *
 * @return int seed value.
 */
function _views_random_seed_generate_seed($user_seed_type, $seed_name, $seed_time, $time, $db_type) {

  // Different per user, simply return $time.
  if ($user_seed_type == 'diff_per_user') {
    $seed = _views_random_seed_create_int($time, $db_type);
  }
  else {
    // Same for al users, get a stored variable.
    $seed = variable_get($seed_name, FALSE);
    if ($seed == FALSE) {
      $seed = _views_random_seed_create_int($time, $db_type);
      variable_set($seed_name, $seed);
    }
  }

  $_SESSION[$seed_time] = $time;
  $_SESSION[$seed_name] = $seed;
  return $seed;
}

/**
 * Helper function to create a seed based on db_type. MySQL can
 * handle any integer in the RAND() function, Postgres needs
 * an int between 0 and 1.
 *
 * @param int $time Current timestamp.
 * @param string $db_type the current database type (mysql(i) - pgsql)
 *
 * @return int $seed timestamp or int between 0 and 1.
 */
function _views_random_seed_create_int($time, $db_type) {
  switch ($db_type) {
    case 'mysql':
    case 'mysqli':
      return $time;
      break;
    case 'pgsql':
      $seed = $time / 10000000000;
      return $seed;
      break;
  }
}

