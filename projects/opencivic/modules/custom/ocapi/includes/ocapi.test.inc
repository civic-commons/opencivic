<?php

/**
 * Form function
 */
function ocapi_test($form, &$form_state) {
  $form['intro'] = array(
    '#type' => 'item',
    '#markup' => t('This page is to test some of the API methods.  It uses CURL so will not use your current sessions credentials.  This should not affect any of the real data on the site, but it will affect the database in the sense of incrementing IDs.'),
  );
  $form['action'] = array(
    '#type' => 'select',
    '#title' => t('Action'),
    '#description' => t('Determine the action to take'),
    '#required' => TRUE,
    '#options' => array(
      'create_delete_node' => t('Create and Delete node.'),
    ),
  );
  $form['username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#description' => t('If a user is needed for the call, the username to use.'),
  );
  $form['password'] = array(
    '#type' => 'password',
    '#title' => t('Password'),
    '#description' => t('If a user is needed for the call, the password to use.'),
  );
  
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );
  
  return $form;
}

/**
 * Submit function for form.
 */
function ocapi_test_submit($form, &$form_state) {
  $params = $form_state['values'];
  $output = array();

  if ($params['action'] == 'create_delete_node') {
    ocapi_test_call_login($params, $output);
    ocapi_test_call_node_create($params, $output);
    ocapi_test_call_node_delete($params, $output);
  }
  
  // Output
  foreach ($output as $o => $out) {
    if (function_exists('dpm')) {
      dpm($out);
    }
    else {
      drupal_set_message(var_export($out, TRUE));
    }
  }
  
  drupal_Set_message(t('Done'));
}

/**
 * Server REST - user.login
 * Borrowed from http://drupal.org/node/1334758
 */
function ocapi_test_call_login(&$params, &$output) {
  // REST Server URL
  $request_url = 'http://localhost/oc/api/v1/user/login';
  
  // User data
  $user_data = array(
    'username' => $params['username'],
    'password' => $params['password'],
  );
  $user_data = http_build_query($user_data);
  
  // cURL
  $curl = curl_init($request_url);
  curl_setopt($curl, CURLOPT_HTTPHEADER, array('Accept: application/json')); // Accept JSON response
  curl_setopt($curl, CURLOPT_POST, 1); // Do a regular HTTP POST
  curl_setopt($curl, CURLOPT_POSTFIELDS, $user_data); // Set POST data
  //curl_setopt($curl, CURLOPT_HEADER, FALSE);  // Ask to not return Header
  curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
  curl_setopt($curl, CURLOPT_FAILONERROR, TRUE);
  
  $response = curl_exec($curl);
  $http_code = curl_getinfo($curl, CURLINFO_HTTP_CODE);
  
  // Check if login was successful
  if ($http_code == 200) {
    // Convert json response as array
    $logged_user = json_decode($response);
    $params['logged_in'] = $logged_user;
    $output[] = t('Logged in!');
    $output[] = $logged_user;
  }
  else {
    // Get error msg
    $http_message = curl_error($curl);
    $output[] = $http_message;
  }
}

/**
 * Server REST - node.create
 * Borrowed from http://drupal.org/node/1334758
 */
function ocapi_test_call_node_create(&$params, &$output) {
  $logged_user = $params['logged_in'];

  // REST Server URL
  $request_url = 'http://localhost/oc/api/v1/node';
  
  // Node data
  $node_data = array(
    'title' => 'A node created with services 3.x and REST server',
    'type' => 'page',
    'body[und][0][value]' => '<p>Body</p>',
  );
  $node_data = http_build_query($node_data);
  
  // Define cookie session
  $cookie_session = $logged_user->session_name . '=' . $logged_user->sessid;
  
  // cURL
  $curl = curl_init($request_url);
  curl_setopt($curl, CURLOPT_HTTPHEADER, array('Accept: application/json')); // Accept JSON response
  curl_setopt($curl, CURLOPT_POST, 1); // Do a regular HTTP POST
  curl_setopt($curl, CURLOPT_POSTFIELDS, $node_data); // Set POST data
  curl_setopt($curl, CURLOPT_HEADER, FALSE);  // Ask to not return Header
  curl_setopt($curl, CURLOPT_COOKIE, "$cookie_session"); // use the previously saved session
  curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
  curl_setopt($curl, CURLOPT_FAILONERROR, TRUE);
  
  $response = curl_exec($curl);
  $http_code = curl_getinfo($curl, CURLINFO_HTTP_CODE);
  
  // Check if login was successful
  if ($http_code == 200) {
    // Convert json response as array
    $node = json_decode($response);
    $params['created_node'] = $node;
    $output[] = t('Created node!');
    $output[] = $node;
  }
  else {
    // Get error msg
    $http_message = curl_error($curl);
    $output[] = $http_message;
  }
}

/**
 * Server REST - node.create
 * Borrowed from http://drupal.org/node/1334758
 */
function ocapi_test_call_node_delete(&$params, &$output) {
  $logged_user = $params['logged_in'];

  // REST Server URL
  $request_url = $params['created_node']->uri;
  
  // Define cookie session
  $cookie_session = $logged_user->session_name . '=' . $logged_user->sessid;
  
  // cURL
  $curl = curl_init($request_url);
  curl_setopt($curl, CURLOPT_HTTPHEADER, array('Accept: application/json')); // Accept JSON response
  curl_setopt($curl, CURLOPT_CUSTOMREQUEST, 'DELETE');
  curl_setopt($curl, CURLOPT_HEADER, FALSE);  // Ask to not return Header
  curl_setopt($curl, CURLOPT_COOKIE, "$cookie_session"); // use the previously saved session
  curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);
  curl_setopt($curl, CURLOPT_FAILONERROR, TRUE);
  
  $response = curl_exec($curl);
  $http_code = curl_getinfo($curl, CURLINFO_HTTP_CODE);
  
  // Check if login was successful
  if ($http_code == 200) {
    // Convert json response as array
    $node = json_decode($response);
    $params['delete_node'] = $node;
    $output[] = t('Deleted node!');
    $output[] = $node;
  }
  else {
    // Get error msg
    $http_message = curl_error($curl);
    $output[] = $http_message;
  }
}