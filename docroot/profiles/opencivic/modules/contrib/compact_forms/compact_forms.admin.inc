<?php
// $Id: compact_forms.admin.inc,v 1.6 2011/01/09 06:22:40 sun Exp $

/**
 * @file
 * Compact Forms administration functions.
 */

/**
 * Form constructor for Compact Forms settings.
 */
function compact_forms_admin_form($form, &$form_state) {
  $form['compact_forms_ids'] = array(
    '#type' => 'textarea',
    '#title' => t('Form CSS IDs'),
    '#rows' => 3,
    '#cols' => 40,
    '#default_value' => variable_get('compact_forms_ids', 'user-login-form'),
    '#description' => t('Enter the CSS IDs of the forms to display compact. One per line.'),
  );
  $form['compact_forms_descriptions'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide field descriptions'),
    '#default_value' => variable_get('compact_forms_descriptions', 1),
  );
  $form['compact_forms_stars'] = array(
    '#type' => 'radios',
    '#title' => t('Required field marker'),
    '#options' => array(
      0 => t('Remove star'),
      1 => t('Leave star after the label'),
      2 => t('Append star after the form element'),
    ),
    '#default_value' => variable_get('compact_forms_stars', 2),
  );
  $form['compact_forms_field_size'] = array(
    '#type' => 'textfield',
    '#title' => t('Enforced text field size'),
    '#size' => 3,
    '#default_value' => variable_get('compact_forms_field_size', ''),
    '#field_suffix' => t('characters'),
    '#description' => t("If not empty, the size of all text fields in compact forms will be set to the entered size."),
  );

  return system_settings_form($form);
}

