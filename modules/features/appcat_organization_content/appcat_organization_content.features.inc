<?php
/**
 * @file
 * appcat_organization_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_organization_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function appcat_organization_content_node_info() {
  $items = array(
    'organization' => array(
      'name' => t('Organization'),
      'base' => 'node_content',
      'description' => t('An <b>organization</b> can be a company, government agency, nongovernmental organization or team of people working together to create, support or use software applications.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function appcat_organization_content_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: organization
  $schemaorg['node']['organization'] = array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_abbreviation' => array(
      'predicates' => array(),
    ),
    'field_additional_type' => array(
      'predicates' => array(),
    ),
    'field_address' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'field_civic_category' => array(
      'predicates' => array(),
    ),
    'field_coordinates' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'field_keywords' => array(
      'predicates' => array(),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
    ),
    'field_member' => array(
      'predicates' => array(
        0 => 'schema:member',
      ),
    ),
    'field_related_applications' => array(
      'predicates' => array(),
    ),
    'field_services' => array(
      'predicates' => array(),
    ),
    'field_telephone' => array(
      'predicates' => array(
        0 => 'schema:telephone',
      ),
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
  );

  return $schemaorg;
}
