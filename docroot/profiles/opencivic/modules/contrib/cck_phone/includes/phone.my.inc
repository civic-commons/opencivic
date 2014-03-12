<?php

/**
 * @file
 * CCK Field for Malaysia phone numbers.
 */

function _my_phone_rules() {
  $rules = array();

  // rule: 'area code, min length, max length'
  // Geographic land line number
  $rules[] = array("2", 7);    // Domestic access code to Singapore
  $rules[] = array("3", 8);    // Selangor & Federal Territories of Kuala Lumpur & Putrajaya
  $rules[] = array("4", 7);    // Kedah, Penang & Perlis
  $rules[] = array("5", 7);    // Perak & Cameron Highlands (Pahang)
  $rules[] = array("6", 7);    // Melaka, Negeri Sembilan & Muar (Johor)
  $rules[] = array("7", 7);    // Johor (except Muar)
  $rules[] = array("80", 6);   // Domestic access code to Brunei (East Malaysia only)
//  $rules[] = array("81", 6);    // reserved
  $rules[] = array("82", 6);   // Kuching (Sarawak)
  $rules[] = array("83", 6);   // Sri Aman (Sarawak)
  $rules[] = array("84", 6);   // Sarikei, Bintangor, Sibu, Kanowit, Song, & Kapit (Sarawak)
  $rules[] = array("85", 6);   // Lawas, Limbang, Miri (Sarawak)
  $rules[] = array("86", 6);   // Bintulu, Belaga (Sarawak)
  $rules[] = array("87", 6);   // Inner District (Sabah) & Federal Territory of Labuan
  $rules[] = array("88", 6);   // Kota Kinabalu, Kudat (Sabah)
  $rules[] = array("89", 6);   // Lahad Datu, Sandakan, Tawau (Sabah)
  $rules[] = array("9", 7);    // Kelantan, Pahang (except Cameron Highlands) & Terengganu

  // Mobile number structure
  $rules[] = array("10", 7);
  $rules[] = array("11", 7);
  $rules[] = array("12", 7);
  $rules[] = array("13", 7);
  $rules[] = array("14", 7);
  $rules[] = array("15", 7);
  $rules[] = array("16", 7);
  $rules[] = array("17", 7);
  $rules[] = array("18", 7);
  $rules[] = array("19", 7);

  return $rules;
}

/**
 * Verifies that $number is a valid Malaysia phone number.
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
function my_validate_number($number, $ext = '', &$error) {
  // We don't want to worry about separators
  $number = cck_phone_clean_number($number);

  foreach (_my_phone_rules() as $rule) {
    // define regular expression
    $regex = '/^
      ([0]*)                             # an optional 0
      (' . $rule[0] . ')                   # area code
      \d{' . $rule[1] . '}                 # local number within length $rule[1] & $rule[2]
      $/x';

    $result = preg_match($regex, $number, $matches);

    if ($result) {
      return TRUE;
    }
  }

  // t() is no needed
  $error = '"%phone_input" is not a valid Malaysia phone number, it should be a 9-10 digit number like "03-2222 2222", "0" is optional and will be removed.';
  return FALSE;
}

/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function my_sanitize_number(&$number) {
  // Remove trunk prefix '0'

  $number = preg_replace('/^([0]*)/', '', $number);
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
function my_formatter_default($element) {
  $phone = '';

  // Display a global phone number with country code.
  $cc = cck_phone_countrycodes($element['country_codes']);

  // Format the phone number however you like, this is the default
  foreach (_my_phone_rules() as $rule) {
    // define regular expression
    $regex = '/^
      (' . $rule[0] . ')                   # area code
      (\d{3,4})
      (\d{4})
      $/x';

    $result = preg_match($regex, $element['number'], $matches);

    if ($result) {
      // output as +60A-BBB CCCC or +60A-BBBB CCCC
      $phone =  $cc['code'] . $matches[1] . '-' . $matches[2] . ' ' . $matches[3];

      continue;
    }
  }

  return $phone;
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
function my_formatter_local($element) {
  // Display a local phone number without country code.
  $phone = $element['number'];

  foreach (_my_phone_rules() as $rule) {
    // define regular expression
    $regex = '/^
      (' . $rule[0] . ')                   # area code
      (\d{3,4})
      (\d{4})
      $/x';

    $result = preg_match($regex, $phone, $matches);

    if ($result) {
      // output as 0A-BBB CCCC or 0A-BBBB CCCC
      $phone = '0' . $matches[1] . '-' . $matches[2] . ' ' . $matches[3];
      continue;
    }
  }

  return $phone;
}
