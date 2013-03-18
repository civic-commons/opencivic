<?php
/**
 * @file
 * appcat_home_views.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function appcat_home_views_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'homepage';
  $openlayers_maps->title = 'homepage';
  $openlayers_maps->description = 'The map for the Apps Catalog home page';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/opencivic/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/opencivic/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '2.812496945732525, 11.523084514157874',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'home_page_map_homepage' => 'home_page_map_homepage',
          'organizations_map_openlayers_orgs' => 0,
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'middle_color' => 'rgb(49, 190, 145)',
        'high_color' => 'rgb(35, 59, 177)',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'home_page_map_homepage' => 'home_page_map_homepage',
          'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
      'home_page_map_homepage' => 'home_page_map_homepage',
    ),
    'layer_weight' => array(
      'organization_map_openlayers_org' => '0',
      'organizations_map_openlayers_orgs' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'deployments_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
      'deployments_list_openlayers_deployments' => '0',
      'home_page_map_homepage' => '1',
    ),
    'layer_styles' => array(
      'deployments_list_openlayers_deployments' => 'deployment_marker',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'organization_map_openlayers_org' => 'organization_marker',
      'home_page_map_homepage' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => 'organization_marker',
    ),
    'layer_styles_select' => array(
      'deployments_list_openlayers_deployments' => 'deployment_marker',
      'deployments_map_openlayers_1' => 'deployment_marker',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'organization_map_openlayers_org' => 'organization_marker',
      'home_page_map_homepage' => 'deployment_marker',
      'organizations_map_openlayers_orgs' => 'organization_marker',
    ),
    'layer_activated' => array(
      'home_page_map_homepage' => 'home_page_map_homepage',
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'layer_switcher' => array(
      'home_page_map_homepage' => 'home_page_map_homepage',
      'organizations_map_openlayers_orgs' => 'organizations_map_openlayers_orgs',
      'deployments_list_openlayers_deployments' => 0,
      'deployments_map_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'organization_map_openlayers_org' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['homepage'] = $openlayers_maps;

  return $export;
}
