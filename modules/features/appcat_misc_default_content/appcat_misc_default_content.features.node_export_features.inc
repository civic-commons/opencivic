<?php
/**
 * @file
 * appcat_misc_default_content.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function appcat_misc_default_content_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Advomatic\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0dcd77cd-9979-5d54-91a3-577aa396017f\',
      \'nid\' => \'7\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1358344846\',
      \'changed\' => \'1358344846\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15f6028e-611a-20e4-7557-d0065c21f663\',
      \'revision_timestamp\' => \'1358344846\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>&nbsp;</p><div>Advomatic builds Drupal-based websites for clients including nonprofit organizations and advocacy groups. It is<span style="line-height: 1.538em;">&nbsp;a leader in the development of high-performance websites on the Drupal platform and has become known for doing large-scale platform migrations and systems integration projects with Drupal.&nbsp;</span><span style="line-height: 1.538em;">Advomatic has been in operation since 2004, and is headquartered in New York City with additional staff working remotely across the United States.</span></div>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p> Advomatic builds Drupal-based websites for clients including nonprofit organizations and advocacy groups. It is a leader in the development of high-performance websites on the Drupal platform and has become known for doing large-scale platform migrations and systems integration projects with Drupal. Advomatic has been in operation since 2004, and is headquartered in New York City with additional staff working remotely across the United States.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_abbreviation\' => array(),
      \'field_additional_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'186\',
          ),
        ),
      ),
      \'field_address\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'NY\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'New York\',
            \'dependent_locality\' => NULL,
            \'postal_code\' => \'10016\',
            \'thoroughfare\' => \'243 5th Ave, Suite 460\',
            \'premise\' => \'\',
            \'sub_premise\' => NULL,
            \'organisation_name\' => NULL,
            \'name_line\' => NULL,
            \'first_name\' => NULL,
            \'last_name\' => NULL,
            \'data\' => NULL,
          ),
        ),
      ),
      \'field_civic_category\' => array(),
      \'field_civic_sub_cate\' => array(),
      \'field_coordinates\' => array(),
      \'field_keywords\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'105\',
            \'height\' => \'113\',
            \'uid\' => \'1\',
            \'filename\' => \'advomatic-logo.png\',
            \'uri\' => \'public://content/organizations/logos/advomatic-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'5780\',
            \'status\' => \'1\',
            \'timestamp\' => \'1358344846\',
            \'type\' => \'image\',
            \'uuid\' => \'a546848a-7862-c8d4-51da-01288228e3b3\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_member\' => array(),
      \'field_related_applications\' => array(),
      \'field_services\' => array(),
      \'field_telephone\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.advomatic.com/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            1 => \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_additional_type\' => array(
          \'predicates\' => array(
            \'schema:additionalType\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_address\' => array(
          \'predicates\' => array(
            \'schema:address\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_member\' => array(
          \'predicates\' => array(
            \'schema:member\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_telephone\' => array(
          \'predicates\' => array(
            \'schema:telephone\',
          ),
        ),
        \'field_abbreviation\' => array(
          \'predicates\' => array(),
        ),
        \'field_civic_category\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_services\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_civic_sub_cate\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_keywords\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358344846\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'215\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/advomatic\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'186\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_additional_type\',
          \'langcode\' => \'und\',
          \'uuid\' => \'b14b498d-7185-a9e4-d5e0-eb88d3a0b76d\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'Drupal\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'94f1c22a-f629-9524-5df5-b581df4a6436\',
      \'nid\' => \'1\',
      \'type\' => \'application\',
      \'language\' => \'und\',
      \'created\' => \'1358140439\',
      \'changed\' => \'1358345324\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a4710f7-22ff-a854-3d8f-987e5eb075de\',
      \'revision_timestamp\' => \'1358345324\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><span style=\\"font-family: \'PT Sans\', \'Lucida Grande\', \'Lucida Sans Unicode\', sans-serif; line-height: 18px;\\">Drupal is a powerful content management system (CMS). CMSs enable easy management of workflow in a collaborative environment to power any type of website, from government sites to social networking sites. Although Drupal offers a sophisticated programming interface for developers, no programming skills are required for basic website installation and administration. Video: http://dai.ly/gabKRV For a full list of governments using drupal see: http://groups.drupal.org/node/24119#USA http://groups.drupal.org/government-sites#USA</span></p>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>Drupal is a powerful content management system (CMS). CMSs enable easy management of workflow in a collaborative environment to power any type of website, from government sites to social networking sites. Although Drupal offers a sophisticated programming interface for developers, no programming skills are required for basic website installation and administration. Video: <a href=\\"http://dai.ly/gabKRV\\">http://dai.ly/gabKRV</a> For a full list of governments using drupal see: <a href=\\"http://groups.drupal.org/node/24119#USA\\">http://groups.drupal.org/node/24119#USA</a> <a href=\\"http://groups.drupal.org/government-sites#USA\\">http://groups.drupal.org/government-sites#USA</a></p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_aggregate_rating\' => array(),
      \'field_application_category\' => array(),
      \'field_application_sub_cate\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'27\',
          ),
          array(
            \'tid\' => \'1\',
          ),
        ),
      ),
      \'field_civic_category\' => array(),
      \'field_civic_sub_cate\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'98\',
          ),
        ),
      ),
      \'field_contributor\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'7\',
          ),
          array(
            \'target_id\' => \'8\',
          ),
        ),
      ),
      \'field_creator\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
        ),
      ),
      \'field_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'A content management system that powers various types of websites\',
            \'format\' => NULL,
            \'safe_value\' => \'A content management system that powers various types of websites\',
          ),
        ),
      ),
      \'field_download_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://drupal.org/project/drupal\',
            \'title\' => \'Download Drupal\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_feature_list\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Excellent documentation and community with a highly active forum\',
            \'format\' => NULL,
            \'safe_value\' => \'Excellent documentation and community with a highly active forum\',
          ),
          array(
            \'value\' => \'Handles countless content types including video, text, blog, podcasts, and polls with robust user management, menu handling, real-time statistics and optional revision control\',
            \'format\' => NULL,
            \'safe_value\' => \'Handles countless content types including video, text, blog, podcasts, and polls with robust user management, menu handling, real-time statistics and optional revision control\',
          ),
          array(
            \'value\' => \'Focus on social publishing can help you create sites and applications to help your users express their opinions and engage with one another\',
            \'format\' => NULL,
            \'safe_value\' => \'Focus on social publishing can help you create sites and applications to help your users express their opinions and engage with one another\',
          ),
          array(
            \'value\' => \'Build internal and external-facing websites in a matter of hours, with no custom programming\',
            \'format\' => NULL,
            \'safe_value\' => \'Build internal and external-facing websites in a matter of hours, with no custom programming\',
          ),
          array(
            \'value\' => \'Lots of add-on modules to extend functionality\',
            \'format\' => NULL,
            \'safe_value\' => \'Lots of add-on modules to extend functionality\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'Drupal logo\',
            \'title\' => "Drupal\'s logo is called the \\"Druplicon.\\"",
            \'width\' => \'1180\',
            \'height\' => \'1350\',
            \'uid\' => \'1\',
            \'filename\' => \'druplicon.large_.png\',
            \'uri\' => \'public://content/applications/logos/druplicon.large_.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'25329\',
            \'status\' => \'1\',
            \'timestamp\' => \'1358140439\',
            \'type\' => \'image\',
            \'uuid\' => \'815cbf18-f5e7-c5b4-7122-2c09d5a091c8\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_install_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.websitedesigndrupal.com/\',
            \'title\' => \'Demo\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_keywords\' => array(),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'168\',
          ),
        ),
      ),
      \'field_related_applications\' => array(),
      \'field_release_notes\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The latest release version is Drupal 7.18.</p>\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>The latest release version is Drupal 7.18.</p>\\n ",
          ),
        ),
      ),
      \'field_requirements\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'161\',
          ),
          array(
            \'tid\' => \'162\',
          ),
          array(
            \'tid\' => \'187\',
          ),
          array(
            \'tid\' => \'190\',
          ),
        ),
      ),
      \'field_screenshot\' => array(),
      \'field_software_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'178\',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://drupal.org/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_video\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:SoftwareApplication\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:text\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'field_short_description\' => array(
          \'predicates\' => array(),
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_homepage\' => array(
          \'predicates\' => array(),
        ),
        \'field_contributor\' => array(
          \'predicates\' => array(
            \'schema:contributor\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_creator\' => array(
          \'predicates\' => array(
            \'schema:creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_tags\' => array(
          \'predicates\' => array(
            \'schema:keywords\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:thumbnailUrl\',
          ),
        ),
        \'field_videos\' => array(
          \'predicates\' => array(
            \'schema:video\',
          ),
        ),
        \'field_primary_function\' => array(
          \'predicates\' => array(
            \'schema:applicationCategory\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_application_sub_category\' => array(
          \'predicates\' => array(
            \'schema:applicationSubCategory\',
          ),
        ),
        \'field_feature_list\' => array(
          \'predicates\' => array(
            \'schema:featureList\',
          ),
        ),
        \'field_releases\' => array(
          \'predicates\' => array(
            \'schema:releaseNotes\',
          ),
        ),
        \'field_software_requirements\' => array(
          \'predicates\' => array(
            \'schema:requirements\',
          ),
        ),
        \'field_screenshots\' => array(
          \'predicates\' => array(
            \'schema:screenshot\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_additional_type\' => array(
          \'predicates\' => array(
            \'schema:additionalType\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_image\' => array(
          \'predicates\' => array(
            \'schema:image\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_accountable_person\' => array(
          \'predicates\' => array(
            \'schema:accountablePerson\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_about\' => array(
          \'predicates\' => array(
            \'schema:about\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_associated_media\' => array(
          \'predicates\' => array(
            \'schema:associatedMedia\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_description\' => array(
          \'predicates\' => array(),
        ),
        \'field_alternative_headline\' => array(
          \'predicates\' => array(
            \'schema:alternativeHeadline\',
          ),
        ),
        \'field_aggregate_rating\' => array(
          \'predicates\' => array(
            \'schema:aggregateRating\',
          ),
        ),
        \'field_keywords\' => array(
          \'predicates\' => array(
            \'schema:keywords\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_video\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_application_category\' => array(
          \'predicates\' => array(
            \'schema:applicationCategory\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_application_sub_cate\' => array(
          \'predicates\' => array(
            \'schema:applicationSubCategory\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_download_url\' => array(
          \'predicates\' => array(
            \'schema:downloadUrl\',
          ),
        ),
        \'field_install_url\' => array(
          \'predicates\' => array(
            \'schema:installUrl\',
          ),
        ),
        \'field_release_notes\' => array(
          \'predicates\' => array(
            \'schema:releaseNotes\',
          ),
        ),
        \'field_requirements\' => array(
          \'predicates\' => array(
            \'schema:requirements\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_screenshot\' => array(
          \'predicates\' => array(
            \'schema:screenshot\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_civic_sub_cate\' => array(
          \'predicates\' => array(
            \'schema:applicationSubCategory\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_civic_category\' => array(
          \'predicates\' => array(
            \'schema:applicationCategory\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_license\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_software_type\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_deployment\' => array(
          \'predicates\' => array(),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358140439\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'208\',
        \'source\' => \'node/1\',
        \'alias\' => \'content/drupal\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'27\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_application_sub_cate\',
          \'langcode\' => \'und\',
          \'uuid\' => \'8cde29e4-d80c-d684-29a4-a05e177aa0e6\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'1\',
          \'delta\' => 1,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_application_sub_cate\',
          \'langcode\' => \'und\',
          \'uuid\' => \'02025476-b0b6-4374-1152-2455d4550fc1\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'98\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_civic_sub_cate\',
          \'langcode\' => \'und\',
          \'uuid\' => \'89556980-b4d7-3234-519c-655245331f79\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'7\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_contributor\',
          \'langcode\' => \'und\',
          \'uuid\' => \'15f6028e-611a-20e4-7557-d0065c21f663\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'8\',
          \'delta\' => 1,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_contributor\',
          \'langcode\' => \'und\',
          \'uuid\' => \'d9a92578-91ef-6cf4-3d5c-fc8f0e2d0cb3\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'3\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_creator\',
          \'langcode\' => \'und\',
          \'uuid\' => \'e1224f5d-f371-a814-b55a-0e77f1f7aabb\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'168\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_license\',
          \'langcode\' => \'und\',
          \'uuid\' => \'75ad63b9-cc0b-06a4-41a6-83de605c3c20\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'161\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_requirements\',
          \'langcode\' => \'und\',
          \'uuid\' => \'52a8c3a5-443b-3a84-f970-9c936222b636\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'162\',
          \'delta\' => 1,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_requirements\',
          \'langcode\' => \'und\',
          \'uuid\' => \'5330ac54-d7c9-8944-69cc-4b08757afe7e\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'187\',
          \'delta\' => 2,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_requirements\',
          \'langcode\' => \'und\',
          \'uuid\' => \'b4bdca4d-bbdd-eb34-8127-aecd910e789d\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'190\',
          \'delta\' => 3,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_requirements\',
          \'langcode\' => \'und\',
          \'uuid\' => \'c425e455-708c-4084-456f-308ece4f3ee9\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'178\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_software_type\',
          \'langcode\' => \'und\',
          \'uuid\' => \'92d46be9-09bd-65f4-b1a4-310551bf066e\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'New York State Senate\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9d9dc20b-aae4-5204-f999-0ccf666b2d20\',
      \'nid\' => \'4\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1358343020\',
      \'changed\' => \'1358343020\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'23e544af-659d-9924-79e8-50ef7d5b5551\',
      \'revision_timestamp\' => \'1358343020\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The New York State Senate is one of two houses in the New York State Legislature and has members each elected to two-year terms. There are no limits on the number of terms one may serve. The New York Constitution provides for a varying number of members in the Senate; the current membership is 63, elected from single-member constituencies equal in population.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>The New York State Senate is one of two houses in the New York State Legislature and has members each elected to two-year terms. There are no limits on the number of terms one may serve. The New York Constitution provides for a varying number of members in the Senate; the current membership is 63, elected from single-member constituencies equal in population.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_abbreviation\' => array(
        \'und\' => array(
          array(
            \'value\' => \'NYSS\',
            \'format\' => NULL,
            \'safe_value\' => \'NYSS\',
          ),
        ),
      ),
      \'field_additional_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'166\',
          ),
        ),
      ),
      \'field_address\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'NY\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'Albany\',
            \'dependent_locality\' => NULL,
            \'postal_code\' => \'\',
            \'thoroughfare\' => \'\',
            \'premise\' => \'\',
            \'sub_premise\' => NULL,
            \'organisation_name\' => NULL,
            \'name_line\' => NULL,
            \'first_name\' => NULL,
            \'last_name\' => NULL,
            \'data\' => NULL,
          ),
        ),
      ),
      \'field_civic_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'135\',
          ),
        ),
      ),
      \'field_civic_sub_cate\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'47\',
          ),
        ),
      ),
      \'field_coordinates\' => array(),
      \'field_keywords\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'154\',
            \'height\' => \'154\',
            \'uid\' => \'1\',
            \'filename\' => \'nysenate-logo.png\',
            \'uri\' => \'public://content/organizations/logos/nysenate-logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'15222\',
            \'status\' => \'1\',
            \'timestamp\' => \'1358343020\',
            \'type\' => \'image\',
            \'uuid\' => \'8d7c9a29-4ee8-df44-155b-d66cd6a49644\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'iVBORw0KGgoAAAANSUhEUgAAAJoAAACaCAMAAABmIaElAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAyJpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuMC1jMDYwIDYxLjEzNDc3NywgMjAxMC8wMi8xMi0xNzozMjowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENTNSBNYWNpbnRvc2giIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6RTA0MEU4RTU1ODA0MTFFMkI4ODRDN0YyNzhDOUM4MzQiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6RTA0MEU4RTY1ODA0MTFFMkI4ODRDN0YyNzhDOUM4MzQiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDpFMDQwRThFMzU4MDQxMUUyQjg4NEM3RjI3OEM5QzgzNCIgc3RSZWY6ZG9jdW1lbnRJRD0ieG1wLmRpZDpFMDQwRThFNDU4MDQxMUUyQjg4NEM3RjI3OEM5QzgzNCIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8L3g6eG1wbWV0YT4gPD94cGFja2V0IGVuZD0iciI/PlqyWPsAAAMAUExURb7X4MK0n/Xf0G8jJqKFXN+3YENIRpiYl0VGOV9YRvbUhOnp6djGt4qKif3r09mkW/7tn/XBg+Tk5KWYhNvb2//que3AZzVASXxkQ1deVdbV1S9FVYGZpM/PzkdNVNemfeDQw6R8PvzfpjI1MbirmkhUWh5FXYt5WNG2mn9tVrmGPsjIyOvVxr/Av0NZaLq7urOzsxogIS8tIu3Fmv/239amS+vTtxwwPv7w3OHCmZuMeQIFBqurqmN4hdO1i+/dysOVRZwjLKWlpf3fmeDFqeLOuHiNmqi4vzE4QP7hsdPCq4l7abaEYPrTmHt1a+PAi8Wri/DRqPjiyXp6eMa/tLeWVtHd4OC5ith/QDRYbFttef/96Nvc19HPx2hrajtidaqSXz4UFe3RmLqli4dzSuO1fMWoaeY8K42HeplpPOTDdbaaecixgbfK0aelm//z09Lk6baaauPXzvCpWpyttGtnV866peTMo9WOWsikfPHMcJylq1lnbIV/eNjb2MaaaBklKd27mPnXp9SzdsqmWXuHi01QRdXV0LfAxPbVtzw+NfLs4LGfibqle1xjWn90W7uia3d/hjdQWcmZdfHw6aSdlm1yb5SepM/W2CpMY7SPdda+nPTm07e7wVdeYoVRMcWfh6yqo8ecUdjY2OjLhz85LYKFgAEKEMO6r5GBVwsVHsLGyd7i3sywac+vkbq4sZCCbOTi22pfTrqhXO7cvL5sRN/j49HU0EZgatm/eOXZyeendKasrPPap56gn9i9ix0YD46QkLO4updxVsrGv/PcnbCxrezs7N/f36anrPHy9eXn6aaqp9HR0SUoIvfy65tpJhoHBsPDw92+ox9PaL+/vLO1uubo4i5ickohIXqCb//lkiMOFWtOMgsPDfz8/Pn5+fX19fLy8u/v78nOzbW4tfL19cPGwe/v8vz5/PX2+fn59ezv7+/y8vLz7aqno/XZvv/8/////MzKzfz59P//8SY9UPbNvK6uroSEhD49P/X5+UxgYO3m5P///////4lrMnMAAAEAdFJOU////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////wBT9wclAAAz0klEQVR42uyceVxTd773AyEnCUuUNYEIAiGEsBPZwy7YAIIKCpUKouJSsXLVARWVotVQUwWNFUWpViEiWCjFtqK2CMUCjpLrRmfQAgJ6nee+5rmVOkMxLyfzfH+/c7LQxeksz73PH88vIQ1g4c3n891+5ySH9tf/Zxft/6P9D6GNaOE2bcEX/ofRfkT0iPowIvyfQNNTPRp5RC3yU/3SU2r/O9H0WCQRgI6MjP7h/d7eP46P/WF0hPyKEe/IyH8PGqkX/NZR+MV/HRkdf+/9P72XYV+UaP5wZsaiufZFfwoP/773/fEx/M9G/3G6vxNNr9Yo/MZH47+rDc6wLi0tDQk5y3AIcTtbGhLnzWCEnF2/YIa5/XvvvT/+SIvpKL7/i2jGXGPj79nPdAgJCXHY6x1S6hAXwih1YMQ5ODAYDIe4swzG7b0OZ0vdOe/91xip3d8PR/u7wUYhmEb/4v5wLiPEO8ThLAOYGLfjGHGn3bzdhm7HnXU77Q1we0sZjL1uDMbZ0uR/vwl0o3pn/+VoOMJIwUb/AnLNOHu2tNSh9HZcyG3ebd7QEFsuZ2kULJZGw2KxhnhDp93cboPH6/fe3nt5tTund9QgnfZfi0YqhgQbe/8ZIySO4eBQGuJ91g2QCII7OSnDi8uV6RZXphliv3nbzQFUPesWUl/7/rhBun8hmg7s0cj4++6lCKvU2827ALAwDJdLuExbQKvBlFzWEKhXetabcZaR/L97yZ/xa+Fofw/YH8OLVod4xzl4x8UNIazJSS6Xq0QwXC6JBA8aGX6KP9UAnoJ9e+/eswzvs5evvG+Bf86vVI72q8hw8I+N7yk9GwKKxQ2xXfjcSS7fRSh04YM2LjsPM4UuhJ2NFZfgdjGBizgF38KIoF6YZuj0WUZcyNnmL8HWUUq5fxqNAhsbGX0/+GtGSEip9+0CtpIPXEqhEJFl3rjb9wetVlvNlfVrP5ARwhF4qql+9NtqvctcTZiCVXA2juEW907oe2MjY79OONqvIIO/c2S8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\',
          ),
        ),
      ),
      \'field_member\' => array(),
      \'field_related_applications\' => array(),
      \'field_services\' => array(),
      \'field_telephone\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.nysenate.gov\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            1 => \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_additional_type\' => array(
          \'predicates\' => array(
            \'schema:additionalType\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_address\' => array(
          \'predicates\' => array(
            \'schema:address\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_member\' => array(
          \'predicates\' => array(
            \'schema:member\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_telephone\' => array(
          \'predicates\' => array(
            \'schema:telephone\',
          ),
        ),
        \'field_abbreviation\' => array(
          \'predicates\' => array(),
        ),
        \'field_civic_category\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_services\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_civic_sub_cate\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_keywords\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358343020\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'212\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/new-york-state-senate\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'166\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_additional_type\',
          \'langcode\' => \'und\',
          \'uuid\' => \'60ee3e65-7fc0-7524-cd44-e2d579c637c8\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'135\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_civic_category\',
          \'langcode\' => \'und\',
          \'uuid\' => \'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'47\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_civic_sub_cate\',
          \'langcode\' => \'und\',
          \'uuid\' => \'0e076f86-d52a-1fc4-8973-996c6b976a9d\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Welcome to the Apps Catalog\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5659d509-20b1-7984-bdda-4920612a9cd6\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1358140692\',
      \'changed\' => \'1358140692\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3cd9325e-7d04-dd14-3128-9fda2ffad50d\',
      \'revision_timestamp\' => \'1358140692\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>Let&#39;s find out what&#39;s working, where.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>Let\'s find out what\'s working, where.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358140692\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'209\',
        \'source\' => \'node/2\',
        \'alias\' => \'content/welcome-apps-catalog\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'New Amsterdam Ideas\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6090b6bf-00d4-c024-4589-a2257c116753\',
      \'nid\' => \'8\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1358345187\',
      \'changed\' => \'1358345187\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d9a92578-91ef-6cf4-3d5c-fc8f0e2d0cb3\',
      \'revision_timestamp\' => \'1358345187\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>&nbsp;</p><div>The New Amsterdam Ideas team is passionate about helping government and non-profit organizations to innovate affordably by helping them to effectively leverage open-source software. Its client engagements, ranging from New York City&#39;s Public Advocate, to the New York State Attorney General, to the Civic Commons non-profit organization, seek to further this goal.</div><div>&nbsp;</div>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p> The New Amsterdam Ideas team is passionate about helping government and non-profit organizations to innovate affordably by helping them to effectively leverage open-source software. Its client engagements, ranging from New York City\'s Public Advocate, to the New York State Attorney General, to the Civic Commons non-profit organization, seek to further this goal. </p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_abbreviation\' => array(
        \'und\' => array(
          array(
            \'value\' => \'NUAMS\',
            \'format\' => NULL,
            \'safe_value\' => \'NUAMS\',
          ),
        ),
      ),
      \'field_additional_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'186\',
          ),
        ),
      ),
      \'field_address\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'NY\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'New York\',
            \'dependent_locality\' => NULL,
            \'postal_code\' => \'10013\',
            \'thoroughfare\' => \'412 Broadway, Floor 2\',
            \'premise\' => \'\',
            \'sub_premise\' => NULL,
            \'organisation_name\' => NULL,
            \'name_line\' => NULL,
            \'first_name\' => NULL,
            \'last_name\' => NULL,
            \'data\' => NULL,
          ),
        ),
      ),
      \'field_civic_category\' => array(),
      \'field_civic_sub_cate\' => array(),
      \'field_coordinates\' => array(),
      \'field_keywords\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'200\',
            \'height\' => \'200\',
            \'uid\' => \'1\',
            \'filename\' => \'new_nuams_logo.png\',
            \'uri\' => \'public://content/organizations/logos/new_nuams_logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4432\',
            \'status\' => \'1\',
            \'timestamp\' => \'1358345187\',
            \'type\' => \'image\',
            \'uuid\' => \'6d9d7eb9-dcca-8ca4-2d54-7331a7dd7326\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_member\' => array(),
      \'field_related_applications\' => array(),
      \'field_services\' => array(),
      \'field_telephone\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.nuams.com\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            1 => \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_additional_type\' => array(
          \'predicates\' => array(
            \'schema:additionalType\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_address\' => array(
          \'predicates\' => array(
            \'schema:address\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_member\' => array(
          \'predicates\' => array(
            \'schema:member\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_telephone\' => array(
          \'predicates\' => array(
            \'schema:telephone\',
          ),
        ),
        \'field_abbreviation\' => array(
          \'predicates\' => array(),
        ),
        \'field_civic_category\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_services\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_civic_sub_cate\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_keywords\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358345187\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'216\',
        \'source\' => \'node/8\',
        \'alias\' => \'content/new-amsterdam-ideas\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'186\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_additional_type\',
          \'langcode\' => \'und\',
          \'uuid\' => \'b14b498d-7185-a9e4-d5e0-eb88d3a0b76d\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Drupal Association\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0c86abfb-40c1-01e4-65e7-a663775d132b\',
      \'nid\' => \'3\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1358217709\',
      \'changed\' => \'1358217709\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1224f5d-f371-a814-b55a-0e77f1f7aabb\',
      \'revision_timestamp\' => \'1358217709\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><a href="https://association.drupal.org/about">The Drupal Association</a>&nbsp;is an organization dedicated to helping the open-source Drupal CMS project flourish. It helps the Drupal community with funding, infrastructure, education, promotion, distribution and online collaboration at Drupal.org. Funds to support these programs, and the Association staff come from&nbsp;<a href="https://association.drupal.org/membership">memberships</a>,&nbsp;<a href="https://association.drupal.org/supporting-partners">supporting partners</a>,&nbsp;<a href="https://association.drupal.org/supporting-partners">sponsorships</a>,&nbsp;<a href="https://association.drupal.org/donate">donations</a>, and&nbsp;<a href="https://association.drupal.org/about/strategic-initiative-volunteers">volunteers</a>.</p>\',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => " <p><a href=\\"https://association.drupal.org/about\\">The Drupal Association</a> is an organization dedicated to helping the open-source Drupal CMS project flourish. It helps the Drupal community with funding, infrastructure, education, promotion, distribution and online collaboration at Drupal.org. Funds to support these programs, and the Association staff come from <a href=\\"https://association.drupal.org/membership\\">memberships</a>, <a href=\\"https://association.drupal.org/supporting-partners\\">supporting partners</a>, <a href=\\"https://association.drupal.org/supporting-partners\\">sponsorships</a>, <a href=\\"https://association.drupal.org/donate\\">donations</a>, and <a href=\\"https://association.drupal.org/about/strategic-initiative-volunteers\\">volunteers</a>.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_abbreviation\' => array(
        \'und\' => array(
          array(
            \'value\' => \'DA\',
            \'format\' => NULL,
            \'safe_value\' => \'DA\',
          ),
        ),
      ),
      \'field_additional_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'165\',
          ),
        ),
      ),
      \'field_address\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'OR\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'Portland\',
            \'dependent_locality\' => NULL,
            \'postal_code\' => \'97201\',
            \'thoroughfare\' => \'2828 SW Corbett Avenue, Suite #203\',
            \'premise\' => \'\',
            \'sub_premise\' => NULL,
            \'organisation_name\' => NULL,
            \'name_line\' => NULL,
            \'first_name\' => NULL,
            \'last_name\' => NULL,
            \'data\' => NULL,
          ),
        ),
      ),
      \'field_civic_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'76\',
          ),
          array(
            \'tid\' => \'135\',
          ),
        ),
      ),
      \'field_civic_sub_cate\' => array(),
      \'field_coordinates\' => array(),
      \'field_keywords\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'207\',
          ),
        ),
      ),
      \'field_logo\' => array(),
      \'field_member\' => array(),
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_services\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'183\',
          ),
        ),
      ),
      \'field_telephone\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'https://association.drupal.org/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            1 => \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_additional_type\' => array(
          \'predicates\' => array(
            \'schema:additionalType\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_address\' => array(
          \'predicates\' => array(
            \'schema:address\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_member\' => array(
          \'predicates\' => array(
            \'schema:member\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_telephone\' => array(
          \'predicates\' => array(
            \'schema:telephone\',
          ),
        ),
        \'field_abbreviation\' => array(
          \'predicates\' => array(),
        ),
        \'field_civic_category\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_services\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_civic_sub_cate\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_keywords\' => array(
          \'predicates\' => array(),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358217709\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'211\',
        \'source\' => \'node/3\',
        \'alias\' => \'content/drupal-association\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'165\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_additional_type\',
          \'langcode\' => \'und\',
          \'uuid\' => \'5bdb8fa8-4f14-acb4-d9e3-363648a7ba83\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'76\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_civic_category\',
          \'langcode\' => \'und\',
          \'uuid\' => \'45d91cf3-3e47-4034-b5f3-06a42fa0c977\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'135\',
          \'delta\' => 1,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_civic_category\',
          \'langcode\' => \'und\',
          \'uuid\' => \'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'207\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_keywords\',
          \'langcode\' => \'und\',
          \'uuid\' => \'25166d67-ac35-c5a4-49c2-5e8236a1aa8c\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_related_applications\',
          \'langcode\' => \'und\',
          \'uuid\' => \'1a4710f7-22ff-a854-3d8f-987e5eb075de\',
        ),
        array(
          \'type\' => \'taxonomy_term\',
          \'id\' => \'183\',
          \'delta\' => 0,
          \'property\' => \'tid\',
          \'module\' => \'taxonomy\',
          \'field_name\' => \'field_services\',
          \'langcode\' => \'und\',
          \'uuid\' => \'aafdb1b0-b017-6154-3dfa-fb4c9de0ffce\',
        ),
      ),
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Deployment of Drupal\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5cbbf7b-bbea-8814-adf1-7575e7e1c5a3\',
      \'nid\' => \'9\',
      \'type\' => \'deployment\',
      \'language\' => \'und\',
      \'created\' => \'1358346259\',
      \'changed\' => \'1358346259\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f6c42cc3-7967-cef4-a95e-98b07a690db9\',
      \'revision_timestamp\' => \'1358346259\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p>The New York State Senate was one of the first large government organizations in the United States to use Drupal to build its website. The site was built originally by Advomatic and is now maintained directly by the senate and hosted by Acquia. Several members of the team which built and maintained the website at the New York State Senate have subsequently created their own company, New Amsterdam Ideas.</p>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>The New York State Senate was one of the first large government organizations in the United States to use Drupal to build its website. The site was built originally by Advomatic and is now maintained directly by the senate and hosted by Acquia. Several members of the team which built and maintained the website at the New York State Senate have subsequently created their own company, New Amsterdam Ideas.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.nysenate.gov\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'NY\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'Albany\',
            \'dependent_locality\' => NULL,
            \'postal_code\' => \'\',
            \'thoroughfare\' => \'\',
            \'premise\' => \'\',
            \'sub_premise\' => NULL,
            \'organisation_name\' => NULL,
            \'name_line\' => NULL,
            \'first_name\' => NULL,
            \'last_name\' => NULL,
            \'data\' => NULL,
          ),
        ),
      ),
      \'field_add_deployment_for\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
        ),
      ),
      \'field_member\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'4\',
          ),
          array(
            \'target_id\' => \'7\',
          ),
          array(
            \'target_id\' => \'8\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:UserInteraction\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            2 => \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_location\' => array(
          \'predicates\' => array(
            \'schema:location\',
          ),
        ),
        \'field_related_applications\' => array(
          \'predicates\' => array(),
        ),
        \'field_add_deployment_for\' => array(
          \'predicates\' => array(),
        ),
        \'field_contributor\' => array(
          \'predicates\' => array(),
        ),
        \'field_member\' => array(
          \'predicates\' => array(
            \'schema:performer\',
          ),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1358346259\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'217\',
        \'source\' => \'node/9\',
        \'alias\' => \'content/deployment-drupal\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'node\',
          \'id\' => \'1\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_add_deployment_for\',
          \'langcode\' => \'und\',
          \'uuid\' => \'1a4710f7-22ff-a854-3d8f-987e5eb075de\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'4\',
          \'delta\' => 0,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_member\',
          \'langcode\' => \'und\',
          \'uuid\' => \'23e544af-659d-9924-79e8-50ef7d5b5551\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'7\',
          \'delta\' => 1,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_member\',
          \'langcode\' => \'und\',
          \'uuid\' => \'15f6028e-611a-20e4-7557-d0065c21f663\',
        ),
        array(
          \'type\' => \'node\',
          \'id\' => \'8\',
          \'delta\' => 2,
          \'property\' => \'target_id\',
          \'module\' => \'entityreference\',
          \'field_name\' => \'field_member\',
          \'langcode\' => \'und\',
          \'uuid\' => \'d9a92578-91ef-6cf4-3d5c-fc8f0e2d0cb3\',
        ),
      ),
    ),
)',
);
  return $node_export;
}
