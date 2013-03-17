<?php
/**
 * @file
 * appcat_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_problem_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function appcat_problem_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function appcat_problem_node_info() {
  $items = array(
    'problem_definition' => array(
      'name' => t('Problem definition'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_rdf_default_mappings().
 */
function appcat_problem_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: problem_definition
  $schemaorg['node']['problem_definition'] = array(
    'rdftype' => array(
      0 => 'schema:CreativeWork',
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
        0 => 'content:encoded',
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
    'field_additional_type' => array(
      'predicates' => array(
        0 => 'schema:additionalType',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_description' => array(
      'predicates' => array(),
    ),
    'field_image' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_aggregate_rating' => array(
      'predicates' => array(
        0 => 'schema:aggregateRating',
      ),
    ),
    'field_contributor' => array(
      'predicates' => array(
        0 => 'schema:contributor',
      ),
    ),
    'field_creator' => array(
      'predicates' => array(
        0 => 'schema:creator',
      ),
    ),
    'field_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
    ),
    'field_video' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
    ),
    'field_address' => array(
      'predicates' => array(),
    ),
    'field_telephone' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}
