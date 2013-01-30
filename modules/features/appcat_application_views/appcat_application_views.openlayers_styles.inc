<?php
/**
 * @file
 * appcat_application_views.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function appcat_application_views_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'deployment_marker';
  $openlayers_styles->title = 'Deployment marker';
  $openlayers_styles->description = 'Markers to show where apps have been deployed';
  $openlayers_styles->data = array(
    'externalGraphic' => 'profiles/apps_catalog/themes/cat_lover/images/deploymentmarker.png',
    'pointRadius' => 10,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 20,
    'graphicHeight' => 20,
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['deployment_marker'] = $openlayers_styles;

  return $export;
}
