<?php
/**
 * @file
 * appcat_organization_views.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function appcat_organization_views_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'organization_marker';
  $openlayers_styles->title = 'Organization marker';
  $openlayers_styles->description = 'Markers to show where organizations have been deployed';
  $openlayers_styles->data = array(
    'externalGraphic' => 'profiles/opencivic/themes/cat_lover/images/group.png',
    'pointRadius' => 16,
    'fillColor' => '#EE9900',
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'fillOpacity' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 32,
    'graphicHeight' => 37,
    'graphicOpacity' => 1,
    'graphicXOffset' => -16,
    'graphicYOffset' => -18,
    'labelAlign' => 'cm',
  );
  $export['organization_marker'] = $openlayers_styles;

  return $export;
}
