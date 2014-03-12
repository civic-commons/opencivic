<?php

/**
 * @file
 * CCK Field for Canada phone numbers.
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
function ca_validate_number($number, $ext = '', &$error) {
  return us_validate_number($number, $ext = '', $error);
}

/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function ca_sanitize_number(&$number) {
  us_sanitize_number($number);
}

/**
 * Default formatter for international phone number.
 *
 * @param $element
 *   $element['#item']['country_codes']: alpha-2 country code
 *   $element['#item']['number']: phone number
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC
 *   - "%phone_input": the original number input by user (could be invalid)
 *   - "%max_length": allowed maximum length of the phone number
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function ca_formatter_default($element) {
  return us_formatter_default($element);
}

/**
 * Local formatter for local phone number.
 *
 * @param $element
 *   $element['#item']['country_codes']: alpha-2 country code
 *   $element['#item']['number']: phone number
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC
 *   - "%phone_input": the original number input by user (could be invalid)
 *   - "%max_length": allowed maximum length of the phone number
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function ca_formatter_local($element) {
  return us_formatter_local($element);
}