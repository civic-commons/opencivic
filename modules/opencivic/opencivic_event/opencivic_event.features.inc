<?php
/**
 * @file
 * opencivic_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_event_ctools_plugin_api() {
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
function opencivic_event_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function opencivic_event_node_info() {
  $items = array(
    'oc_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An <b>Event</b> could be a local hackathon or any other event with a time, place and date where people meet.'),
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
function opencivic_event_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: event
  $schemaorg['node']['oc_event'] = array(
    'rdftype' => array(
      0 => 'schema:Event',
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
    'field_coordinates' => array(
      'predicates' => array(),
    ),
    'field_event_type' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_oc_deploy_location' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'field_start_date' => array(
      'predicates' => array(
        0 => 'schema:startDate',
      ),
    ),
    'field_telephone' => array(
      'predicates' => array(),
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:attendee',
      ),
    ),
    'title_field' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
