<?php

/**
 * @file
 * Hooks provided by the Entity Fields Builder module.
 */

/**
 * Return the name, description and field properties of a schema class.
 *
 * @param String $schema_name
 *   The name of the schema class.
 *
 * @return Array
 *   An associative array structured as follows:
 *    'name' => $schema_name
 *    'description' => $schema_description
 *    'properties' => $properties
 *   where $properties is an associative array in which each key
 *   is a potential root for a Drupal machine name. Whereas
 *   schema properties are in camelCase, Drupal machine names
 *   are in all lowercase with words separated by underscores.
 *   The values for each key must include at least the following:
 *    'property_name' => the property name in camelCase
 *    'machine_name' => the property name in underscore format
 *                      (same as the key)
 *    'expected_type' => the expected data type of this property,
 *                       e.g., 'Text,' 'Number,' 'Date', 'Person', etc.
 *    'description' => a text description of the property
 */
function hook_efb_schema_load($schema_name) {
  if ($schema_name == 'Example') {
    return array(
      'name' => 'Example',
      'description' => 'This is a description of schema class "Example."',
      'properties' => array(
        'date_modified' => array(
          'property_name' => 'dateModified',
          'property_name' => 'date_modified',
          'expected_type' => 'Date',
          'description' => 'The date on which the Example was most recently modified',
        ),
        'discussion_url' => array(
          'property_name' => 'discussionUrl',
          'property_name' => 'discussion_url',
          'expected_type' => 'URL',
          'description' => 'A link to the page containing comments about the Example.',
        ),
        'software_version' => array(
          'property_name' => 'softwareVersion',
          'property_name' => 'software_version',
          'expected_type' => 'Text',
          'description' => 'Version of the software instance',
        ),
      ),
    );
  }
}

/**
 * Returns names of schema classes.
 *
 * lets modules define methods for adding schema class names that
 * add fields to the field overview form.
 *
 * @param String $entity_type
 *   The entity type.
 * @param String $bundle
 *   The bundle.
 *
 * @see efb_form_field_ui_field_overview_form_alter()
 */
function hook_efb_schema_names($entity_type, $bundle) {
  if ($entity_type == 'node' && $bundle == 'Test') {
    return array('Example');
  }
}

/**
 * Performs additional configuration of a field.
 *
 * @param String $property_name
 *   The name of the schema property to be mapped.
 * @param String $entity_type
 *   The entity type.
 * @param String $bundle
 *   The bundle to which the field instance is bound.
 * @param String $field_name
 *   The machine name of the field to be mapped.
 * @param String $field_type
 *   The field type to be mapped (e.g., text, text_long, etc.).
 *
 * @see schemaorg_ui_field_ui_field_edit_form_submit()
 */
function hook_efb_set_field_options($property_name, $entity_type, $bundle, $field_name, $field_type) {
  if ($property_name == 'softwareVersion' && $field_type == 'text') {
    $field = field_info_field($field_name);
    $field['settings']['max_length'] = '140';
    field_update_field($field);

    $instance = field_read_instance($entity_type, $field_name, $bundle);
    $instance['default_value'][0]['value'] = "That's some bad hat, Harry.";
    field_update_instance($instance);
  }
}

/**
 * Performs additional configuration of an entity bundle.
 *
 * @param String $entity_type
 *   The entity type.
 * @param String $bundle
 *   The bundle to be configured.
 * @param Array $schema
 *   The schema class that relates to the bundle.
 *
 * @see efb_match_content_type()
 */
function hook_efb_set_entity_options($entity_type, $bundle, $schema) {
  if ($schema['name'] == 'Example') {
    // Do something custom to configure the bundle.
    // For an example, see efb_schemaorg_efb_set_entity_options()
    // in the efb_schemaorg submodule.
  }
}

/**
 * Return an array mapping schema property types to Drupal field types.
 *
 * @param String $property_name
 *   The name of a single property to be mapped (optional). 
 *   If this value is provided, the array only maps that property to its
 *   field type. If $property_name is all known property types are mapped.
 *
 * @return Array
 *   An associative array. Each item has an array key corresponding
 *   to a schema property type, and a value consisting of an 
 *   associative array with one required value:
 *     - 'type' => a Drupal content type, e.g., 'text', 'text_long', 'date'
 * @see efb_property_options_map()
 */
function hook_efb_property_options($property_name=NULL) {
  return array(
    'Person' => array(
      'type' => 'text_long',
    ),
    'Date' => array(
      'type' => 'date',
    ),
  );
}

/**
 * Implements hook_efb_property_options_alter().
 *
 * @see efb_property_options_map()
 */
function hook_efb_property_options_alter(&$map, $property_name) {
  if ($property_name == 'copyrightYear') {
    $map['Number']['type'] = 'number_integer';
  }
}
