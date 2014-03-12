<?php

/**
 * @file
 * CCK Field for Polish phone numbers.
 */

/**
 * Polish phone number regex helper.
 */
function _pl_regex() {
  return '/^
    ([1-9]\d) # 2-digit area code
    ([1-9]\d{2}) # 3-digit phone prefix (cannot start with 0)
    (\d{4})
    $/x';
}

/**
 * Verifies that $number is a valid 9-digit Polish phone number.
 */
function pl_validate_number($number, $ext = '', &$error) {
  $number = cck_phone_clean_number($number);
  $regex = _pl_regex();

  $result = preg_match($regex, $number, $matches);

  if ($result) {
    return TRUE;
  }
  else {
    $error = '"%phone_input" is not a valid Polish phone number, it should be a 9-digit
      number like "99 999 99 99".';
    return FALSE;
  }
}

/**
 * Helper for formatting output.
 * Output as +48 (AA) BBB CCCC
 */
function _pl_formatter($element) {
  $phone = '';

  $regex = _pl_regex();

  $result = preg_match($regex, $element['number'], $matches);

  if ($result) {
    $phone = '(' . $matches[1] . ') ' . $matches[2] . ' ' . $matches[3];
  }
  return $phone;
}

/**
 * Default formatter for international phone number.
 */
function pl_formatter_default($element) {
  $cc = cck_phone_countrycodes($element['country_codes']);
  $number = _pl_formatter($element);
  return $cc['code'] . ' ' . $number;
}

/**
 * Local formatter for local phone number.
 */
function pl_formatter_local($element) {
  return _pl_formatter($element);
}
