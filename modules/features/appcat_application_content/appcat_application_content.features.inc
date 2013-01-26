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
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '145',
          'height' => '160',
        ),
        'weight' => '1',
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
    'field_short_description' => array(
      'predicates' => array(),
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_homepage' => array(
      'predicates' => array(),
    ),
    'field_contributor' => array(
      'predicates' => array(
        0 => 'schema:contributor',
      ),
      'type' => 'rel',
    ),
    'field_creator' => array(
      'predicates' => array(
        0 => 'schema:creator',
      ),
      'type' => 'rel',
    ),
    'field_tags' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:thumbnailUrl',
      ),
    ),
    'field_videos' => array(
      'predicates' => array(
        0 => 'schema:video',
      ),
    ),
    'field_primary_function' => array(
      'predicates' => array(
        0 => 'schema:applicationCategory',
      ),
      'type' => 'rel',
    ),
    'field_application_sub_category' => array(
      'predicates' => array(
        0 => 'schema:applicationSubCategory',
      ),
    ),
    'field_feature_list' => array(
      'predicates' => array(
        0 => 'schema:featureList',
      ),
    ),
    'field_releases' => array(
      'predicates' => array(
        0 => 'schema:releaseNotes',
      ),
    ),
    'field_software_requirements' => array(
      'predicates' => array(
        0 => 'schema:requirements',
      ),
    ),
    'field_screenshots' => array(
      'predicates' => array(
        0 => 'schema:screenshot',
      ),
      'type' => 'rel',
    ),
    'field_additional_type' => array(
      'predicates' => array(
        0 => 'schema:additionalType',
      ),
      'type' => 'rel',
    ),
    'field_image' => array(
      'predicates' => array(
        0 => 'schema:image',
      ),
      'type' => 'rel',
    ),
    'field_accountable_person' => array(
      'predicates' => array(
        0 => 'schema:accountablePerson',
      ),
      'type' => 'rel',
    ),
    'field_about' => array(
      'predicates' => array(
        0 => 'schema:about',
      ),
      'type' => 'rel',
    ),
    'field_associated_media' => array(
      'predicates' => array(
        0 => 'schema:associatedMedia',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_description' => array(
      'predicates' => array(),
    ),
    'field_alternative_headline' => array(
      'predicates' => array(
        0 => 'schema:alternativeHeadline',
      ),
    ),
    'field_aggregate_rating' => array(
      'predicates' => array(
        0 => 'schema:aggregateRating',
      ),
    ),
    'field_keywords' => array(
      'predicates' => array(
        0 => 'schema:keywords',
      ),
      'type' => 'rel',
    ),
    'field_video' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_application_category' => array(
      'predicates' => array(
        0 => 'schema:applicationCategory',
      ),
      'type' => 'rel',
    ),
    'field_application_sub_cate' => array(
      'predicates' => array(
        0 => 'schema:applicationSubCategory',
      ),
      'type' => 'rel',
    ),
    'field_download_url' => array(
      'predicates' => array(
        0 => 'schema:downloadUrl',
      ),
    ),
    'field_install_url' => array(
      'predicates' => array(
        0 => 'schema:installUrl',
      ),
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
      'type' => 'rel',
    ),
    'field_screenshot' => array(
      'predicates' => array(
        0 => 'schema:screenshot',
      ),
      'type' => 'rel',
    ),
    'field_civic_sub_cate' => array(
      'predicates' => array(
        0 => 'schema:applicationSubCategory',
      ),
      'type' => 'rel',
    ),
    'field_civic_category' => array(
      'predicates' => array(
        0 => 'schema:applicationCategory',
      ),
      'type' => 'rel',
    ),
    'field_related_applications' => array(
      'predicates' => array(),
    ),
    'field_license' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_software_type' => array(
      'predicates' => array(),
      'type' => 'rel',
    ),
    'field_deployment' => array(
      'predicates' => array(),
    ),
  );

  return $schemaorg;
}
