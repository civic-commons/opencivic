<?php

/**
 * @file
 * Hooks provided by the Inline Entity Form module.
 */

/**
 * Perform alterations before an entity form is included in the IEF widget.
 *
 * @param $entity_form
 *   Nested array of form elements that comprise the entity form.
 * @param $form_state
 *   The form state of the parent form.
 */
function hook_inline_entity_form_entity_form_alter(&$entity_form, &$form_state) {
  if ($entity_form['#entity_type'] == 'commerce_line_item') {
    $entity_form['quantity']['#description'] = t('New quantity description.');
  }
}

/**
 * Perform alterations before the reference form is included in the IEF widget.
 *
 * The reference form is used to add existing entities through an autocomplete
 * field
 *
 * @param $reference_form
 *   Nested array of form elements that comprise the reference form.
 * @param $form_state
 *   The form state of the parent form.
 */
function hook_inline_entity_form_reference_form_alter(&$reference_form, &$form_state) {
  $reference_form['entity_id']['description'] = t('New autocomplete description');
}

/**
 * Alter the fields used to represent an entity in the IEF table.
 *
 * The fields can be either Field API fields or properties defined through
 * hook_entity_property_info().
 *
 * @param $fields
 *   The fields to alter.
 * @param $context
 *   An array with the following keys:
 *   - parent_entity_type: The type of the parent entity.
 *   - parent_bundle: The bundle of the parent entity.
 *   - field_name: The name of the reference field on which IEF is operating.
 *   - entity_type: The type of the referenced entities.
 *   - allowed_bundles: Bundles allowed on the reference field.
 *
 * @see EntityInlineEntityFormController::tableFields()
 */
function hook_inline_entity_form_table_fields_alter(&$fields, $context) {
  // IEF is managing products on a node form.
  if ($context['parent_entity_type'] == 'node' && $context['entity_type'] == 'commerce_product') {
    // Commerce Simple Stock is enabled.
    if (module_exists('commerce_ss')) {
      // Make sure there's a stock field on each of the allowed product types.
      $has_stock_field = TRUE;
      foreach ($context['allowed_bundles'] as $bundle) {
        if (!commerce_ss_product_type_enabled($bundle)) {
          $has_stock_field = FALSE;
        }
      }

      if ($has_stock_field) {
        $fields['commerce_stock'] = array(
          'type' => 'field',
          'label' => t('Stock'),
          'weight' => 101,
        );
      }
    }
  }
}
