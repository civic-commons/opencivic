<?php

/**
 * @file
 * CCK Field for Australia phone numbers.
 */

/**
 * Patterns generated from Telecommunications Numbering Plan 1997
 * http://www.comlaw.gov.au/comlaw/management.nsf/lookupindexpagesbyid/IP200506356?OpenDocument
 */
function _cck_phone_au_number_patterns() {
  $valid_patterns = array(
    // Geographic numbers (10 digits) - Central East Region (NSW, ACT, Northern VIC).
    '/^02[4,6-9][0-9]{7}$/',
    '/^023[3,8][0-9]{6}$/',
    '/^025[0-3,5-9][0-9]{6}$/',

    // Geographic numbers (10 digits) - South East Region (TAS, Southern NSW, VIC).
    '/^03[5,7-9][0-9]{7}$/',
    '/^034[0-5,7-9][0-9]{6}$/',
    '/^036[1-5,7][0-9]{6}$/',

    // Geographic numbers (10 digits) - North East Region (QLD).
    '/^07[2-4][0-9]{7}$/',
    '/^075[2-7][0-9]{6}$/',
    '/^0776[0-9]{6}$/',

    // Geographic numbers (10 digits) - Central and West Region (WA, SA, NT and Western NSW).
    '/^08[7-9][0-9]{7}$/',
    '/^085[1-4][0-9]{6}$/',
    '/^086[0-8][0-9]{6}$/',

    // Mobile numbers (10 digits).
    '/^04[0-9]{8}$/',

    // Local rate special numbers (10 digits).
    '/^130[0-9]{7}$/',

    // Local rate special numbers (6 digits).
    '/^13[1-3,5-9][0-9]{3}$/',
    '/^134[0-4,6-9][0-9]{2}$/',

    // Free phone numbers (10 digits).
    '/^180[0-1][0-9]{6}$/',

    // Satelite telephone numbers (10 digits).
    '/^014[1-3,5,7][0-9]{6}$/',

    // Satelite telephone numbers (9 digits).
    '/^014[0,4,6,8-9][0-9]{5}$/',
    '/^015[0-9]{6}$/',
    '/^017[1,2,8,9][0-9]{5}$/',
    '/^018[0-9]{6}$/',
  );

  $invalid_patterns = array(
    // Invalid geographic phone numbers.
    '/^0[2,3,7]5550[0-9]{4}$/',
  );

  $format_search_patterns = array(
    // Geographic numbers (10 digits).
    '/^(0)([2,3,7,8])([0-9]{4})([0-9]{4})$/',

    // Mobile numbers (10 digits).
    '/^(0)(4[0-9]{2})([0-9]{3})([0-9]{3})$/',

    // 1300 numbers, 1800 numbers (10 digits).
    '/^(1[3,8][0-9]{2})([0-9]{3})([0-9]{3})$/',

    // 13 numbers (6 digits).
    '/^(13)([0-9]{2})([0-9]{2})$/',

    // Satelite telephone numbers (10 digits).
    '/^(0)(14)([0-9])([0-9]{3})([0-9]{3})$/',

    // Satelite telephone numbers (9 digits).
    '/^(0)(1[4,5,7,8])([0-9]{3})([0-9]{3})$/',
  );

  $format_replace_patterns = array(
    // Geographic numbers (10 digits).
    '($1$2) $3 $4',

    // Mobile numbers (10 digits).
    '$1$2 $3 $4',

    // 1300 numbers, 1800 numbers (10 digits).
    '$1 $2 $3',

    // 13 numbers (6 digits).
    '$1 $2 $3',

    // Satelite telephone numbers (10 digits).
    '$1$2 $3 $4 $5',

    // Satelite telephone numbers (9 digits).
    '$1$2 $3 $4',
  );

  $format_replace_patterns_international = array(
    // Geographic numbers (10 digits).
    '$2 $3 $4',

    // Mobile numbers (10 digits).
    '$2 $3 $4',

    // 1300 numbers, 1800 numbers (10 digits).
    '$1 $2 $3',

    // 13 numbers (6 digits).
    '$1 $2 $3',

    // Satelite telephone numbers (10 digits).
    '$2 $3 $4 $5',

    // Satelite telephone numbers (9 digits).
    '$2 $3 $4',
  );

  return array($valid_patterns, $invalid_patterns, $format_search_patterns, $format_replace_patterns, $format_replace_patterns_international);
}

/**
 * Verifies that $number is a valid Australian phone number.
 */
function au_validate_number($number, $ext = '', &$error) {
  // Don't need to check for extension because it has been checked by generic validation as all digits, unless has special format/requirements
  // We don't want to worry about separators
  $number = cck_phone_clean_number($number);

  if (empty($number)) {
    return TRUE;
  }

  list($valid_patterns, $invalid_patterns, $format_search_patterns, $format_replace_patterns, $format_replace_patterns_international) = _cck_phone_au_number_patterns();

  $invalid_number = preg_replace($invalid_patterns, '', $number);
  $correct_number = preg_replace($valid_patterns, '', $number);

  if (empty($invalid_number)) {
    $error = 'The phone number you have entered is classified as unusable by the Australian telecommunications authority.';
    return FALSE;
  }
  elseif (!empty($correct_number)) {
    $error = 'You have not entered a valid australian phone number. Please enter a 10 digit phone number including the area code, but not including the 61 international prefix. Valid 1800, 1300, and 13 numbers are accepted, as are satilite and AMPS numbers.';
    return FALSE;
  }

  return TRUE;
}

/**
 * Default formatter for Australian phone number.
 */
function au_formatter_default($element) {
  // Display a global phone number with country code.
  $cc = cck_phone_countrycodes($element['country_codes']);

  list($valid_patterns, $invalid_patterns, $format_search_patterns, $format_replace_patterns, $format_replace_patterns_international) = _cck_phone_au_number_patterns();

  return $cc['code'] .' '. preg_replace($format_search_patterns, $format_replace_patterns_international, $element['number']);
}

/**
 * Local formatter for local Australian phone number.
 */
function au_formatter_local($element) {
  list($valid_patterns, $invalid_patterns, $format_search_patterns, $format_replace_patterns, $format_replace_patterns_international) = _cck_phone_au_number_patterns();

  return preg_replace($format_search_patterns, $format_replace_patterns, $element['number']);
}
