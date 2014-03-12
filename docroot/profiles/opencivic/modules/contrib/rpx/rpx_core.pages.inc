<?php

/**
 * @file
 * User page callbacks for the rpx_core module.
 */

/**
 * The Engage Sign-in transaction end point. Engage redirects the user to this
 * URL upon successful authentication by a 3rd party.
 *
 * See @link http://developers.janrain.com/documentation/engage/getting-started/engage-flow/ Janrain Engage Flow @endlink for a
 * detailed decription of this process.
 */
function rpx_token_handler() {
  global $user;

  // are we completing an Engage sign-in transaction?
  $token = isset($_REQUEST['token']) ? $_REQUEST['token'] : '';
  $add_to_account = isset($_REQUEST['add_to_account']) ? TRUE : FALSE;

  if ($token) {
    $rpx_data = RPX::auth_info($token, variable_get('rpx_apikey', ''), variable_get('rpx_extended_authinfo', FALSE));

    if (!$rpx_data) {
      drupal_goto();
    }
    // auth_info() stat should be ok
    if ($rpx_data['stat'] != 'ok') {
      drupal_set_message(t('We were unable to complete your request.'), 'error');
      watchdog('rpx_core', 'Failed to obtain a 3rd party identifier for user ID %id: auth_info() returned error: %err', array('%id' => $user->uid, '%err' => $rpx_data['err']['msg']), WATCHDOG_ERROR);
      drupal_goto();
    }

    rpx_core_save_rpx_session($rpx_data);

    // Possible leftover from previous attempt to sign in.
    if (isset($_SESSION['rpx_signup_failed'])) {
      unset($_SESSION['rpx_signup_failed']);
    }

    $rpx_id = $rpx_data['profile']['identifier'];
    $provider_title = $rpx_data['profile']['providerName'];

    // Save provider info (for token replacement and account linking).
    $_SESSION['rpx_last_provider_info'] = array(
      'name' => _rpx_get_provider_machine_name($provider_title),
      'title' => $provider_title,
    );

    // Are we adding a new identity to an existing account?
    if ($add_to_account) {
      if (user_is_logged_in()) {
        // the identifier returned by auth_info() should not be already
        // mapped to an existing account
        if (user_get_authmaps($rpx_id)) {
          $message = array(
            'text' => t('We were unable to complete your request.  That account ID is already linked to a user on our site.'),
            'type' => 'error',
          );
        }
        else {
          $txn = db_transaction();
          try {
            // Can't use user_set_authmaps() here, since it doesn't support
            // multiple authnames per user via same module
            $result1 = $aid = db_insert('authmap')
              ->fields(array(
                'uid' => $user->uid,
                'authname' => $rpx_id,
                'module' => 'rpx_core',
              ))
            ->execute();
            // rpx_linked_account table is created by the rpx_ui module.
            if (module_exists('rpx_ui')) {
              $result2 = db_insert('rpx_linked_account')
                ->fields(array(
                  'aid' => $aid,
                  'provider_name' => $_SESSION['rpx_last_provider_info']['name'],
                  'provider_title' => $_SESSION['rpx_last_provider_info']['title'],
                ))
                ->execute();
            }
          }
          catch (Exception $e) {
            $txn->rollback();
            watchdog_exception('rpx_core', $e);
          }

          // Default (error) message.
          $message = array(
            'text' => t('We were unable to link your %provider account.', array('%provider' => $provider_title)),
            'type' => 'error',
          );
          if (isset($result1) && isset($result2)) {
            $message = array(
              'text' => t('We have successfully linked your %provider account.', array('%provider' => $provider_title)),
              'type' => 'status',
            );
            // Let other modules (e.g. rpx_rules) know that a linked account has been
            // added.
            $account = array(
              'user' => $user,
              'id' => $rpx_id,
              'provider_machinename' => $_SESSION['rpx_last_provider_info']['name'],
              'provider_title' => $_SESSION['rpx_last_provider_info']['title'],
            );
            module_invoke_all('rpx_linked_account', 'added', $account);
            _rpx_import_user_data($user);
            _rpx_update_engage_mapping($user->uid);
          }
        }
        rpx_core_delete_rpx_session();
        // Redirect the user back to original overlay if possible.
        // @see rpx_user_identities().
        if (isset($_SESSION['rpx_overlay_uri'])) {
          $_GET['destination'] = $_SESSION['rpx_overlay_uri'];
          // Store the message for rpx_user_identities() so that it
          // can be shown in overlay instead of the parent window.
          $_SESSION['rpx_overlay_message'] = $message;
          drupal_goto();
        }
        else {
          unset($_SESSION['rpx_overlay_message']);
          drupal_set_message($message['text'], $message['type']);
          drupal_goto('user/' . $user->uid . '/rpx');
        }
      }
      else {
        rpx_core_delete_rpx_session();
        drupal_set_message(t('Please sign in before linking additional accounts.'), 'error');
        return MENU_ACCESS_DENIED;
      }
    }

    $account = user_external_load($rpx_id);

    // Is this a registered user?
    if (isset($account->uid)) {
      if (!variable_get('user_email_verification', TRUE) ||
          $account->login ||
          !empty($account->data['rpx_data']['profile']['verifiedEmail']) &&
          strtolower($account->data['rpx_data']['profile']['verifiedEmail']) == strtolower($account->mail)) {
        // IF settings do not require email verification
        // OR
        // it's not the first login for the user (which means the email has
        // already been verified)
        // OR
        // they are using an email the ID provider has already verified
        //
        // then we can skip the email verification process

        // Check that the user has not been blocked.
        $state['values']['name'] = $account->name;
        user_login_name_validate(array(), $state);
        if (!form_get_errors()) {
          // Load global $user and perform final login tasks.
          $form_state['uid'] = $account->uid;
          _rpx_import_user_data($account);
          _rpx_update_engage_mapping($account->uid);
          rpx_core_delete_rpx_session();
          // Since the user is cleared for login, there's no need to keep
          // Engage data on the user object anymore.
          if (isset($account->data['rpx_data'])) {
            unset($account->data['rpx_data']);
            user_save($account);
          }
          user_login_submit(array(), $form_state);
        }
      }
      else {
        rpx_core_delete_rpx_session();
        drupal_set_message(t('You must validate your email address for this account before logging in with it.'), 'error');
      }
      drupal_goto();
    }
    // New user.
    else {
      // Check that users are allowed to register on their own.
      if (variable_get('user_register', 1)) {
        if (!variable_get('rpx_force_registration_form', FALSE)) {
          $form_state['values'] = array();
          $form_state['values']['op'] = t('Create new account');
          drupal_form_submit('user_register_form', $form_state);
          // See if the user was successfully registered.
          if (!empty($form_state['user'])) {
            // Let other modules (e.g. rpx_rules) know that a linked account has been
            // added.
            $account = array(
              'user' => $user,
              'id' => $rpx_id,
              'provider_machinename' => $_SESSION['rpx_last_provider_info']['name'],
              'provider_title' => $_SESSION['rpx_last_provider_info']['title'],
            );
            module_invoke_all('rpx_linked_account', 'added', $account);
            // Nothing more to do.
            drupal_goto();
          }
          // get the error messages and clear the messages queue
          $messages = drupal_get_messages('error');

          if (empty($form_state['values']['mail'])) {
            // If the idenitity provider did not provide an email address, ask
            // the user to complete (and submit) the form manually instead of
            // showing the error messages about the missing values generated by
            // FAPI.
            drupal_set_message(t('Although we have verified your account, @provider did not provide us with your e-mail address.  Please enter one below to complete your registration.  (If you\'ve previously registered with us, please <a href="@login">log in</a> and add your @provider account under "Linked accounts.")', array('@provider' => $_SESSION['rpx_last_provider_info']['title'], '@login' => url('user/login'))), 'warning');
          }
          else {
            drupal_set_message(t('Although we have verified your account, registration using the information provided by @provider failed due to the reasons listed below. Please complete the registration by filling out the form below. (If you\'ve previously registered with us, please <a href="@login">log in</a> and add your @provider account under "Linked accounts.")', array('@provider' => $_SESSION['rpx_last_provider_info']['title'], '@login' => url('user/login'))), 'warning');
            // Append form validation errors below the above warning.
            foreach ($messages['error'] as $message) {
              drupal_set_message($message, 'error');
            }
          }
        }
        else {
          drupal_set_message(t('Please complete the registration by filling out the form below.  (If you\'ve previously registered with us, please <a href="@login">log in</a> and add your @provider account under "Linked accounts.")', array('@provider' => $_SESSION['rpx_last_provider_info']['title'], '@login' => url('user/login'))), 'warning');
        }

        // Redirect to the normal registration page and prefill with the values
        // we received from Engage (see rpx_core_form_user_register_form_alter()).
        // Signal our registration form alter function that automatic user
        // registration failed and we want to keep the captcha (if any) this
        // time around.
        $_SESSION['rpx_signup_failed'] = TRUE;
        $destination = drupal_get_destination();
        unset($_GET['destination']);
        drupal_goto('user/register', array('query' => $destination));
      }
      else {
        rpx_core_delete_rpx_session();
        drupal_set_message(t('Only site administrators can create new user accounts.'), 'error');
        drupal_goto();
      }
    }
  }
  else {
    drupal_set_message(t('You need a token to be here!'), 'error');
    return MENU_ACCESS_DENIED;
  }
}

/**
 * Menu callback; confirm email for Engage registrations that require it.
 *
 * @see rpx_core_mail()
 * @see _rpx_mail_text()
 */
function rpx_email_confirm($uid, $timestamp, $hashed_pass) {
  global $user;

  // Make sure that a user isn't already logged in.
  if ($user->uid) {
    // The user is already logged in
    if ($user->uid == $uid) {
      drupal_set_message(t('You have already used this email confirmation link and you are already logged in.'));
      drupal_goto();
    }
    // A different user is already logged in on the computer.
    else {
      $reset_link_account = user_load($uid);
      if (!empty($reset_link_account)) {
        drupal_set_message(t('Another user (%other_user) is already logged into the site on this computer, but you tried to use a one-time link for user %resetting_user. Please <a href="!logout">logout</a> and try using the link again.',
          array('%other_user' => $user->name, '%resetting_user' => $reset_link_account->name, '!logout' => url('user/logout'))));
      } else {
        // Invalid one-time link specifies an unknown user.
        drupal_set_message(t('The one-time login link you clicked is invalid.'));
      }
    }
    drupal_goto();
  }
  else {
    $user = user_load_multiple(array($uid), array('status' => 1));
    if ($account = array_shift($user)) {
      if ($account->login) {
        drupal_set_message(t('Your email address has already been confirmed and you may login at any time.'));
        drupal_goto('user');
      }
      elseif ($hashed_pass == user_pass_rehash($account->pass, $timestamp, $account->login)) {
        // Load global $user and perform final login tasks.
        $form_state['uid'] = $account->uid;
        user_login_submit(array(), $form_state);
        drupal_set_message(t('Thank you for confirming your email address.'));
        drupal_goto('user/' . $user->uid . '/edit');
      }
    }
  }
  // If all else fails, deny access.
  drupal_access_denied();
}
