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
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Advomatic\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0dcd77cd-9979-5d54-91a3-577aa396017f\',
      \'nid\' => \'1\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15f6028e-611a-20e4-7557-d0065c21f663\',
      \'revision_timestamp\' => \'1359091596\',
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
            \'fid\' => \'25\',
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
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'a546848a-7862-c8d4-51da-01288228e3b3\',
            \'rdf_mapping\' => array(),
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
      \'last_comment_timestamp\' => \'1359091596\',
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
        \'alias\' => \'content/advomatic\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Drupal\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c9e77875-3613-482c-a7ce-cb735b940dde\',
      \'nid\' => \'2\',
      \'type\' => \'application\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a4710f7-22ff-a854-3d8f-987e5eb075de\',
      \'revision_timestamp\' => \'1359091596\',
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
      \'field_aggregate_rating\' => array(
        \'und\' => array(
          array(
            \'rating\' => \'80\',
            \'target\' => NULL,
          ),
        ),
      ),
      \'field_application_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'28\',
          ),
        ),
      ),
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
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'6\',
          ),
        ),
      ),
      \'field_creator\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'7\',
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
            \'fid\' => \'26\',
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
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'815cbf18-f5e7-c5b4-7122-2c09d5a091c8\',
            \'rdf_mapping\' => array(),
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
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
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
            \'title\' => \'App Homepage\',
            \'attributes\' => array(
              \'rel\' => \'nofollow\',
            ),
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
      \'last_comment_timestamp\' => \'1359091596\',
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
        \'alias\' => \'content/drupal\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'New York State Senate\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9d9dc20b-aae4-5204-f999-0ccf666b2d20\',
      \'nid\' => \'3\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'23e544af-659d-9924-79e8-50ef7d5b5551\',
      \'revision_timestamp\' => \'1359091596\',
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
            \'fid\' => \'27\',
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
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'8d7c9a29-4ee8-df44-155b-d66cd6a49644\',
            \'rdf_mapping\' => array(),
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'210\',
        \'source\' => \'node/3\',
        \'alias\' => \'content/new-york-state-senate\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Welcome to the Apps Catalog\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5659d509-20b1-7984-bdda-4920612a9cd6\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3cd9325e-7d04-dd14-3128-9fda2ffad50d\',
      \'revision_timestamp\' => \'1359091596\',
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'211\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/welcome-apps-catalog\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'WordPress\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8001941a-451c-4cf9-9362-e8433fde44d8\',
      \'nid\' => \'5\',
      \'type\' => \'application\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'923bc61f-1e16-4f0f-ab2e-92580af6c24a\',
      \'revision_timestamp\' => \'1359091596\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p><span style=\\"font-family: \'PT Sans\', \'Lucida Grande\', \'Lucida Sans Unicode\', sans-serif; line-height: 18px;\\">WordPress is the largest self-hosted blogging tool in the world, used on millions of sites and seen by tens of millions of people every day. It is mature and stable. By focusing on user experience and web standards, WordPress has created a tool different from anything else out there. WordPress was born out of a desire for an elegant, well-architectured personal publishing system built on PHP and MySQL and licensed under the GPLv2 (or later). It started as just a blogging system, but has evolved to be used as full content management system and so much more through the thousands of plugins, widgets, and themes that are available. Everything you see, from the documentation to the code itself, was created by and for the community, which means there are hundreds of people all over the world working on it. (More than most commercial platforms.) There is also a service called WordPress.com which lets you get started with a new and free WordPress-based blog in seconds, but varies in several ways and is less flexible than the open-source WordPress codebase you can download and install yourself.</span></p>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>WordPress is the largest self-hosted blogging tool in the world, used on millions of sites and seen by tens of millions of people every day. It is mature and stable. By focusing on user experience and web standards, WordPress has created a tool different from anything else out there. WordPress was born out of a desire for an elegant, well-architectured personal publishing system built on PHP and MySQL and licensed under the GPLv2 (or later). It started as just a blogging system, but has evolved to be used as full content management system and so much more through the thousands of plugins, widgets, and themes that are available. Everything you see, from the documentation to the code itself, was created by and for the community, which means there are hundreds of people all over the world working on it. (More than most commercial platforms.) There is also a service called WordPress.com which lets you get started with a new and free WordPress-based blog in seconds, but varies in several ways and is less flexible than the open-source WordPress codebase you can download and install yourself.</p>\\n ",
            \'safe_summary\' => \'  \',
          ),
        ),
      ),
      \'field_aggregate_rating\' => array(),
      \'field_application_category\' => array(),
      \'field_application_sub_cate\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'40\',
          ),
          array(
            \'tid\' => \'27\',
          ),
        ),
      ),
      \'field_civic_category\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'76\',
          ),
        ),
      ),
      \'field_civic_sub_cate\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'84\',
          ),
          array(
            \'tid\' => \'106\',
          ),
        ),
      ),
      \'field_contributor\' => array(),
      \'field_creator\' => array(),
      \'field_description\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Open source blogging tool and publishing platform.\',
            \'format\' => NULL,
            \'safe_value\' => \'Open source blogging tool and publishing platform.\',
          ),
        ),
      ),
      \'field_download_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://core.svn.wordpress.org/\',
            \'title\' => \'Subversion repository\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_feature_list\' => array(
        \'und\' => array(
          array(
            \'value\' => \'easy to use web template system\',
            \'format\' => NULL,
            \'safe_value\' => \'easy to use web template system\',
          ),
          array(
            \'value\' => \'hundreds of stable, robust plug-ins\',
            \'format\' => NULL,
            \'safe_value\' => \'hundreds of stable, robust plug-ins\',
          ),
          array(
            \'value\' => \'search-engine friendly, clean permalink structure\',
            \'format\' => NULL,
            \'safe_value\' => \'search-engine friendly, clean permalink structure\',
          ),
          array(
            \'value\' => \'easy "five minute" installation process\',
            \'format\' => NULL,
            \'safe_value\' => \'easy &quot;five minute&quot; installation process\',
          ),
          array(
            \'value\' => \'extensive documentation and large, vibrant support community\',
            \'format\' => NULL,
            \'safe_value\' => \'extensive documentation and large, vibrant support community\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'28\',
            \'alt\' => \'WordPress logo\',
            \'title\' => \'WordPress logo\',
            \'width\' => \'500\',
            \'height\' => \'500\',
            \'uid\' => \'1\',
            \'filename\' => \'wordpress-logo-notext-rgb.png\',
            \'uri\' => \'public://content/applications/logos/wordpress-logo-notext-rgb.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'18399\',
            \'status\' => \'1\',
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'40077f52-b7f8-4ec0-ac40-8c691fe02000\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
      \'field_install_url\' => array(),
      \'field_keywords\' => array(),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'168\',
          ),
        ),
      ),
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
      \'field_release_notes\' => array(),
      \'field_requirements\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'162\',
          ),
          array(
            \'tid\' => \'187\',
          ),
        ),
      ),
      \'field_screenshot\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'29\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'995\',
            \'height\' => \'670\',
            \'uid\' => \'1\',
            \'filename\' => \'newpost.png\',
            \'uri\' => \'public://content/applications/images/newpost.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'79224\',
            \'status\' => \'1\',
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'f87147a2-b4f9-40ab-a6b7-492397bdd4f3\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'30\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'520\',
            \'height\' => \'469\',
            \'uid\' => \'1\',
            \'filename\' => \'menu.gif\',
            \'uri\' => \'public://content/applications/images/menu.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'28427\',
            \'status\' => \'1\',
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'b624416e-416b-4629-a242-f702f7a3df3f\',
            \'rdf_mapping\' => array(),
          ),
          array(
            \'fid\' => \'31\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'830\',
            \'height\' => \'706\',
            \'uid\' => \'1\',
            \'filename\' => \'front-2.png\',
            \'uri\' => \'public://content/applications/images/front-2.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'75874\',
            \'status\' => \'1\',
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'ee1ca3e4-fd6c-40be-8efc-83e569f14330\',
            \'rdf_mapping\' => array(),
          ),
        ),
      ),
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
            \'url\' => \'http://www.wordpress.org\',
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'212\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/wordpress\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'New Amsterdam Ideas\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'6090b6bf-00d4-c024-4589-a2257c116753\',
      \'nid\' => \'6\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d9a92578-91ef-6cf4-3d5c-fc8f0e2d0cb3\',
      \'revision_timestamp\' => \'1359091596\',
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
            \'fid\' => \'32\',
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
            \'timestamp\' => \'1359091596\',
            \'type\' => \'image\',
            \'uuid\' => \'6d9d7eb9-dcca-8ca4-2d54-7331a7dd7326\',
            \'rdf_mapping\' => array(),
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'213\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/new-amsterdam-ideas\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Drupal Association\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0c86abfb-40c1-01e4-65e7-a663775d132b\',
      \'nid\' => \'7\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1224f5d-f371-a814-b55a-0e77f1f7aabb\',
      \'revision_timestamp\' => \'1359091596\',
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
            \'target_id\' => \'2\',
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'214\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/drupal-association\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Deployment of \',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5cbbf7b-bbea-8814-adf1-7575e7e1c5a3\',
      \'nid\' => \'8\',
      \'type\' => \'deployment\',
      \'language\' => \'und\',
      \'created\' => \'1359091596\',
      \'changed\' => \'1359091596\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f6c42cc3-7967-cef4-a95e-98b07a690db9\',
      \'revision_timestamp\' => \'1359091596\',
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
      \'field_add_deployment_for\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
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
      \'field_member\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'3\',
          ),
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'6\',
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
      \'last_comment_timestamp\' => \'1359091596\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'215\',
        \'source\' => \'node/8\',
        \'alias\' => \'content/deployment\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
