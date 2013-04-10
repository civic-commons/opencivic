<?php
/**
 * @file
 * appcat_deployment_node.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_deployment_node_ctools_plugin_api() {
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
function appcat_deployment_node_node_info() {
  $items = array(
    'deployment' => array(
      'name' => t('Deployment'),
      'base' => 'node_content',
      'description' => t('A <b>deployment</b> is an instance of an application being installed or used to solve a problem or perform a service for a specific organization or location.'),
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
function appcat_deployment_node_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: comment_node_deployment
  $schemaorg['comment']['comment_node_deployment'] = array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:Comment',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
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
    'comment_body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'pid' => array(
      'predicates' => array(
        0 => 'sioc:reply_of',
      ),
      'type' => 'rel',
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
  );

  // Exported RDF mapping: deployment
  $schemaorg['node']['deployment'] = array(
    'rdftype' => array(
      0 => 'schema:UserInteraction',
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
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_location' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'field_related_applications' => array(
      'predicates' => array(),
    ),
    'field_add_deployment_for' => array(
      'predicates' => array(),
    ),
    'field_contributor' => array(
      'predicates' => array(),
    ),
    'field_member' => array(
      'predicates' => array(
        0 => 'schema:performer',
      ),
    ),
    'field_coordinates' => array(
      'predicates' => array(),
    ),
    'title_field' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
  );

  return $schemaorg;
}
