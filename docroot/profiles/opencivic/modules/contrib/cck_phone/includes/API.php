<?php

/**
 * @file
 * Phone Number custom country API
 *
 * 'CC' will be used throughout this document to indicate country code
 * abbreviation. You should replace it with the correct country code
 * in the following functions name. For full list of country code
 * abbreviation, refer to the 2 alphabet list in the countries.txt.
 */

/**
 * Country field settings.
 * Country can provide additional field settings for the phone number
 * field as needed.
 *
 * @param $op
 *   The operation to be performed. Possible values:
 *   - "form": Display the field settings form.
 *   - "validate": Check the field settings form for errors.
 *   - "save": Declare which fields to save back to the database.
 *   - "database columns": Declare the columns that content.module should create
 *     and manage on behalf of the field. If the field module wishes to handle
 *     its own database storage, this should be omitted.
 *   - "filters": Declare the Views filters available for the field.
 *     (this is used in CCK's default Views tables definition)
 *     They always apply to the first column listed in the "database columns"
 *     array.
 * @param $field
 *   The field on which the operation is to be performed.
 * @return
 *   This varies depending on the operation.
 *   - "form": an array of form elements to add to
 *     the settings page.
 *   - "validate": no return value. Use form_set_error().
 *   - "save": an array of names of form elements to
 *     be saved in the database.
 *   - "database columns": an array keyed by column name, with arrays of column
 *     information as values. This column information must include "type", the
 *     MySQL data type of the column, and may also include a "sortable" parameter
 *     to indicate to views.module that the column contains ordered information.
 *     TODO: Details of other information that can be passed to the database layer can
 *     be found in the API for the Schema API.
 *   - "filters": an array of 'filters' definitions as expected by views.module
 *     (see Views Documentation).
 *     When providing several filters, it is recommended to use the 'name'
 *     attribute in order to let the user distinguish between them. If no 'name'
 *     is specified for a filter, the key of the filter will be used instead.
 */
function CC_phone_field_settings($op, $field) {
  switch ($op) {
    // Country specific field settings
    case 'form':
      // ...
      return $form;

    // Country specific field validation
    case 'validate':
      // ...
      break;

    // Country specific field save
    case 'save':
      // ...
      return $settings;
  }
}

/**
 * Validate country level phone number.
 *
 * @param $number
 *   Digits only value.
 * @param $ext
 *   Digits only value.
 * @param $error
 *   The error message to shown to user.
 *   Available parameters to use in the error message are
 *   - "%countrycode": the alpha-2 CC (check_plain'ed)
 *   - "%phone_input": the original number input by user (check_plain'ed)
 *   - "%min_length": allowed minimum length of the phone number
 *   - "%max_length": allowed maximum length of the phone number
 *   - "%ext_input": the original extension input by user (check_plain'ed)
 *   - "%ext_max_length": allowed maximum length of the phone extension
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function CC_validate_number($number, $ext = '', &$error) {
  // Don't need to check for extension because it has been checked by generic validation as all digits, unless has special format/requirements
  // your validation

  if (FALSE) {
    // t() is no needed
    $error = '"%phone_input" is not a valid North American phone number, it should be a 10 digit number like "999 999 9999"';
    return FALSE;
  }
  return TRUE;
}


/**
 * Cleanup user-entered values for a phone number field for saving to DB.
 *
 * @param $number
 *   A single phone number item.
 */
function CC_sanitize_number(&$number) {
  // your cleanup like removing trunk prefix
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
 *   - "%countrycode": the alpha-2 CC (check_plain'ed)
 *   - "%phone_input": the original number input by user (check_plain'ed)
 *   - "%min_length": allowed minimum length of the phone number
 *   - "%max_length": allowed maximum length of the phone number
 *   - "%ext_input": the original extension input by user (check_plain'ed)
 *   - "%ext_max_length": allowed maximum length of the phone extension
 * @return boolean
 *   TRUE if it is a valid phone number for that country, FALSE otherwise.
 */
function CC_formatter_default($element) {
  $item = $element['#item'];

  // Display a global phone number with country code.
  $cc = cck_phone_countrycodes($item['country_codes']);

  // Format the phone number however you like, this is the default
  $phone = $cc['code'] . '-' . $item['number'];

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
function CC_formatter_local($element) {
  // Display a local phone number without country code.
  // Format the phone number however you like, this is the default
  $phone = $element['#item']['number'];

  return $phone;
}
