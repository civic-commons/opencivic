<?php
/**
 * @file
 * opencivic_deployment.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opencivic_deployment_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function opencivic_deployment_node_info() {
  $items = array(
    'oc_deployment' => array(
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
function opencivic_deployment_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: deployment
  $schemaorg['node']['oc_deployment'] = array(
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
    'field_oc_deploy_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_oc_deploy_location' => array(
      'predicates' => array(
        0 => 'schema:location',
      ),
    ),
    'field_oc_app_related_apps' => array(
      'predicates' => array(),
    ),
    'field_oc_deploy_deployment_of' => array(
      'predicates' => array(),
    ),
    'field_oc_app_contributor' => array(
      'predicates' => array(),
    ),
    'field_oc_deploy_member' => array(
      'predicates' => array(
        0 => 'schema:performer',
      ),
    ),
    'field_oc_deploy_coordinates' => array(
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

/**
 * Implements hook_views_api().
 */
function opencivic_deployment_views_api() {
  return array(
    'api' => '3.0',
  );
}
