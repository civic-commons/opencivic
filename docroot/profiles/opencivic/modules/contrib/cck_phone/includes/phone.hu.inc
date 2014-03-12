<?php

/**
 * @file
 * CCK Field for Hungarian phone numbers.
 */

/**
 * Verifies and mage parts from $number
 *
 * @param $number
 *   Digits only value.
 * @return boolean
 *   Array
 *     if array['error'] is present, the validation fails
 *     else ['area'] for area number
 *          ['first'] ['second'] for the AA/BBB-CCC numbers
 *          ['first'] ['second'] ['third'] for the A(A)/BBB-CC-DD numbers
 */
function hu_parts($number) {
  /**
   * Because Hungary an telephone numbers are both in open and closed number region, the area code length may be vary. If the area code is 1, 7 more digits follow it.
   * If the area code is 20/30/70, also 7 more digits.
   * If any other 2 digits are code is appear, we want 6 more digits.
   *
   * So complecated, I know :)
   *
   */

  $result = array();
  // Last 9 digits
  $n = drupal_substr($number, -9);

  if ($n === FALSE || (drupal_substr($n, 0, 1) != 2 && drupal_substr($n, 0, 1) != 3 && drupal_substr($n, 0, 1) != 7)) {
    // No 9 digit, check for 8 digit
    if (drupal_substr($number, -8) === FALSE) {
      // No 8 digit, too short for valid telephone number
      $result['error'] = '"%phone_input" is not a valid Hungarian phone number, it should be a 9 digit number like "20/123-45-67" or a 8 digit number like "23/123-456"';
    }
    else {
      $n = drupal_substr($number, -8);
      // It is 8 digits
      if (drupal_substr($n, 0, 1) == 1) {
        // A number from Budapest
        $result['area'] = drupal_substr($n, 0, 1);
        $result['first'] = drupal_substr($n, 1, 3);
        $result['second'] = drupal_substr($n, 4, 2);
        $result['third'] = drupal_substr($n, 6, 2);
      }
      else {
        // A number from countryside
        $result['area'] = drupal_substr($n, 0, 2);
        $result['first'] = drupal_substr($n, 2, 3);
        $result['second'] = drupal_substr($n, 5, 3);
      }
    }
  }
  else {
    // Cell phone number
    $result['area'] = drupal_substr($n, 0, 2);
    $result['first'] = drupal_substr($n, 2, 3);
    $result['second'] = drupal_substr($n, 5, 2);
    $result['third'] = drupal_substr($n, 7, 2);
  }

  return $result;
}

/**
 * Verifies that $number is a valid nine digit Hungarian phone number.
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
function hu_validate_number($number, $ext = '', &$error) {
  // Don't need to check for extension because it has been checked by generic validation as all digits, unless has special format/requirements
  // We don't want to worry about separators

  $number = cck_phone_clean_number($number);

  $result = hu_parts($number);

  if (isset($result['error'])) {
    // t() is no needed
    $error = $result['error'];
    return FALSE;
  }

  return true;
}


/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function hu_sanitize_number(&$number) {
  // Remove prefix '36' or '+36'

  $number = preg_replace('/^(?:\+?36|06*)/', '', $number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $element
 *   $element['country_codes']: alpha-2 country code
 *   $element['number']: phone number
 *   $element['extension']: ext
 * @return boolean
 *   STRING The formatted number
 */
function hu_formatter_default($element) {
  $number = $element['number'];
  $ext = $element['extension'];

  $result = hu_parts($number);

  if (isset($result['error'])) {
    return $number . ($ext ? '/' . $ext : '');
  }

  // output as +36 (AA) BBB CCDD/ext or +36 (AA) BBB CCC/ext
  $phone = '+36 (' . $result['area'] . ') ' . $result['first'] . ' ' . $result['second'] . $result['third'];

  return $phone . ($ext ? '/' . $ext : '');
}

/**
 * Local formatter for local phone number.
 *
 * @param $element
 *   $element['country_codes']: alpha-2 country code
 *   $element['number']: phone number
 *   $element['extension']: ext
 * @return boolean
 *   STRING The formatted number
 */
function hu_formatter_local($element) {
  $number = $element['number'];
  $ext = $element['extension'];

  $result = hu_parts($number);

  if (isset($result['error'])) {
    return $number . ($ext ? '/' . $ext : '');
  }

  // output as AA/BBB-CC-DD or AA/BBB-CCC
  $phone =  $result['area'] . '/' . $result['first'] . '-' . $result['second'] . (isset($result['third']) ? '-' . $result['third'] : '');

  return $phone . ($ext ? '/' . $ext : '');
}
