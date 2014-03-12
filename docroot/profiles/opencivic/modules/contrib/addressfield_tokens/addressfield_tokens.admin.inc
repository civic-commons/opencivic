<?php
// $Id$
/*
 * Copyright © 2012 New Signature
 *
 * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * You can contact New Signature by electronic mail at labs@newsignature.com -or- by U.S. Postal Service at 1100 H St. NW, Suite 940, Washington, DC 20005.
 */
/**
 * @file Provides an Administrative UI for the addressfield_tokens module. 
*/

/**
 * Provides a form for configuring regional options for addresses.
 * 
 * @param array $form
 * @param array $form_state
 * @return array The form.
 */
function addressfield_tokens_admin_form($form, &$form_state) {
  $options = array('' => t('- None -')) + _addressfield_tokens_countries();
  
  $form['addressfield_tokens_default_country'] = array(
    '#type' => 'select',
    '#title' => t('Default country'),
    '#description' => t('In the city/state views, addresses in this country will not display the country.'),
    '#options' => $options,
    '#default_value' => addressfield_tokens_default_country(),
  );
  
  $form['addressfield_tokens_property_names'] = array(
    '#type' => 'fieldset',
    '#title' => t('Custom address property names'),
    '#description' => t('Change the names of address fields when selecting tokens.'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
  );
  
  $names = addressfield_tokens_property_names();
  $props = addressfield_data_property_info();
  foreach ($props as $name => $prop) {
    $form['addressfield_tokens_property_names'][$name] = array(
      '#type' => 'textfield',
      '#title' => $prop['label'],
      '#description' => $name,
      '#default_value' => !empty($names[$name]) ? $names[$name] : $prop['label'],
    );
  }
  return system_settings_form($form);
}