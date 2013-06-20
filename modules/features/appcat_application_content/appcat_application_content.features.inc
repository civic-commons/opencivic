<?php
/**
 * @file
 * appcat_application_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_application_content_ctools_plugin_api() {
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
 * Implements hook_image_default_styles().
 */
function appcat_application_content_image_default_styles() {
  $styles = array();

  // Exported image style: app_detail_logo.
  $styles['app_detail_logo'] = array(
    'name' => 'app_detail_logo',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 145,
          'height' => 160,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: screenshot.
  $styles['screenshot'] = array(
    'name' => 'screenshot',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 630,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: small_square_thumbnail.
  $styles['small_square_thumbnail'] = array(
    'name' => 'small_square_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 55,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function appcat_application_content_node_info() {
  $items = array(
    'application' => array(
      'name' => t('Application'),
      'base' => 'node_content',
      'description' => t('An <b>Application</b> is a software project developed to address a particular problem or need, e.g., CiviCRM, Alfresco, Microsoft Office, etc. It can be either proprietary or open source.'),
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
function appcat_application_content_rdf_default_mappings() {
  $schemaorg = array();

  // Exported RDF mapping: application
  $schemaorg['node']['application'] = array(
    'rdftype' => array(
      0 => 'schema:SoftwareApplication',
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
        0 => 'schema:text',
        1 => 'content:encoded',
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
    'field_aggregate_rating' => array(
      'predicates' => array(
        0 => 'schema:aggregateRating',
      ),
    ),
    'field_application_category' => array(
      'predicates' => array(
        0 => 'schema:applicationSubCategory',
      ),
    ),
    'field_civic_category' => array(
      'predicates' => array(
        0 => 'schema:genre',
      ),
    ),
    'field_contributor' => array(
      'predicates' => array(
        0 => 'schema:provider',
      ),
    ),
    'field_creator' => array(
      'predicates' => array(
        0 => 'schema:creator',
      ),
    ),
    'field_description' => array(
      'predicates' => array(),
    ),
    'field_download_url' => array(
      'predicates' => array(
        0 => 'schema:downloadUrl',
      ),
    ),
    'field_feature_list' => array(
      'predicates' => array(
        0 => 'schema:featureList',
      ),
    ),
    'field_image' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
    ),
    'field_install_url' => array(
      'predicates' => array(
        0 => 'schema:installUrl',
      ),
    ),
    'field_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
    ),
    'field_license' => array(
      'predicates' => array(
        0 => 'schema:publishingPrinciples',
      ),
    ),
    'field_related_applications' => array(
      'predicates' => array(),
    ),
    'field_release_notes' => array(
      'predicates' => array(
        0 => 'schema:releaseNotes',
      ),
    ),
    'field_requirements' => array(
      'predicates' => array(
        0 => 'schema:requirements',
      ),
    ),
    'field_screenshot' => array(
      'predicates' => array(
        0 => 'schema:screenshot',
      ),
    ),
    'field_software_type' => array(
      'predicates' => array(
        0 => 'schema:applicationCategory',
      ),
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_video' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
    ),
    'title_field' => array(
      'predicates' => array(),
    ),
    'field_file_attachments' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
  );

  return $schemaorg;
}
