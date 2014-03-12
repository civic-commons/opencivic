<?php

/**
 * @file
 * CCK Field for North American phone numbers.
 */

/**
 * Verifies that $number is a valid ten-digit North American phone number.
 *
 * @param $number
 *   Digits only value.
 * @param $ext
 *   Digits only value.
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC
 *   - "%phone_input": the original number input by user (could be invalid)
 *   - "%max_length": allowed maximum length of the phone number
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function us_validate_number($number, $ext = '', &$error) {
  // Don't need to check for extension because it has been checked by generic validation as all digits, unless has special format/requirements
  // We don't want to worry about separators
  $number = cck_phone_clean_number($number);

  // define regular expression
  $regex = '/^
    ([1]*)        # an optional 1
    [2-9][0-8]\d  # area code (Allowed range of [2-9] for the first digit, [0-8] for the second, and [0-9] for the third digit)
    [2-9]\d{2}    # 3-digit prefix (cannot start with 0 or 1)
    \d{4}         # 4-digit line number
    $/x';

  $result = preg_match($regex, $number, $matches);

  if ($result && $matches[1] == '') {
    return TRUE;
  }
  elseif ($result && $matches[1] == '1') {
    // t() is no needed
    $error = 'Please enter a 10 digit North American phone number like "999 999 9999", without the country code "1" or "+1"';
    return FALSE;
  }
  else {
    // t() is no needed
    $error = '"%phone_input" is not a valid North American phone number, it should be a 10 digit number like "999 999 9999"';
    return FALSE;
  }
}


/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function us_sanitize_number(&$number) {
  // Remove prefix '1'

  $number = preg_replace('/^([1]*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $element
 *   $element['country_codes']: alpha-2 country code
 *   $element['number']: phone number
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC
 *   - "%phone_input": the original number input by user (could be invalid)
 *   - "%max_length": allowed maximum length of the phone number
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function us_formatter_default($element) {
  $phone = '';

  // Display a global phone number with country code.
  $cc = cck_phone_countrycodes($element['country_codes']);

  // Format the phone number however you like, this is the default
  // define regular expression
  $regex = '/^
    ([2-9][0-8]\d)  # area code (Allowed range of [2-9] for the first digit, [0-8] for the second, and [0-9] for the third digit)
    ([2-9]\d{2})    # 3-digit prefix (cannot start with 0 or 1)
    (\d{4})         # 4-digit line number
    /x';

  $result = preg_match($regex, $element['number'], $matches);

  if ($result) {
    // output as +1 (AAA) BBB-CCCC
    $phone =  $cc['code'] . ' (' . $matches[1] . ') ' . $matches[2] . '-' . $matches[3];
  }

  return $phone;
}

/**
 * Local formatter for local phone number.
 *
 * @param $element
 *   $element['country_codes']: alpha-2 country code
 *   $element['number']: phone number
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC
 *   - "%phone_input": the original number input by user (could be invalid)
 *   - "%max_length": allowed maximum length of the phone number
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function us_formatter_local($element) {
  $phone = '';

  // Display a local phone number without country code.
  $regex = '/^
    ([2-9][0-8]\d)  # area code (Allowed range of [2-9] for the first digit, [0-8] for the second, and [0-9] for the third digit)
    ([2-9]\d{2})    # 3-digit prefix (cannot start with 0 or 1)
    (\d{4})         # 4-digit line number
    /x';

  $result = preg_match($regex, $element['number'], $matches);

  if ($result) {
    // output as (AAA) BBB CCCC
    $phone =  '(' . $matches[1] . ') ' . $matches[2] . '-' . $matches[3];
  }

  return $phone;
}
