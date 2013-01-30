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
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'15f6028e-611a-20e4-7557-d0065c21f663\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'a546848a-7862-c8d4-51da-01288228e3b3\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_member\' => array(),
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
          ),
        ),
      ),
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'1\',
        \'source\' => \'node/1\',
        \'alias\' => \'org/advomatic\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'City of San Francisco\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'39f4771f-5098-4016-b4a1-53c5e65f1410\',
      \'nid\' => \'10\',
      \'type\' => \'organization\',
      \'language\' => \'und\',
      \'created\' => \'1359523978\',
      \'changed\' => \'1359523978\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1781739f-0c84-4f2b-aef9-93b7f2965182\',
      \'revision_timestamp\' => \'1359523978\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_abbreviation\' => array(),
      \'field_additional_type\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'191\',
          ),
        ),
      ),
      \'field_address\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'CA\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'San Francisco\',
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
            \'tid\' => \'98\',
          ),
        ),
      ),
      \'field_coordinates\' => array(),
      \'field_keywords\' => array(),
      \'field_logo\' => array(),
      \'field_member\' => array(),
      \'field_related_applications\' => array(),
      \'field_services\' => array(),
      \'field_telephone\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.sfgov.org/\',
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
      \'last_comment_timestamp\' => \'1359523978\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/10\',
        \'alias\' => \'org/city-san-francisco\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1a4710f7-22ff-a854-3d8f-987e5eb075de\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'815cbf18-f5e7-c5b4-7122-2c09d5a091c8\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
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
      \'field_keywords\' => array(),
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
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
      \'field_contributor\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'1\',
          ),
          array(
            \'target_id\' => \'6\',
          ),
          array(
            \'target_id\' => \'7\',
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
      \'field_install_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.websitedesigndrupal.com/\',
            \'title\' => \'Demo\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'168\',
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/2\',
        \'alias\' => \'app/drupal\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'23e544af-659d-9924-79e8-50ef7d5b5551\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
            \'timestamp\' => \'1359318206\',
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/3\',
        \'alias\' => \'org/new-york-state-senate\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3cd9325e-7d04-dd14-3128-9fda2ffad50d\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/4\',
        \'alias\' => \'page/welcome-apps-catalog\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Deployment of WordPress\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0f843623-028b-40bf-9f69-d2c93ba10d01\',
      \'nid\' => \'11\',
      \'type\' => \'deployment\',
      \'language\' => \'und\',
      \'created\' => \'1359524173\',
      \'changed\' => \'1359524173\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'565dceb0-846a-496d-bbb6-d4de80a75f3a\',
      \'revision_timestamp\' => \'1359524173\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_coordinates\' => array(
        \'und\' => array(
          array(
            \'wkt\' => \'POINT (-122.4194155 37.7749295)\',
            \'geo_type\' => \'point\',
            \'lat\' => \'37.7749\',
            \'lon\' => \'-122.419\',
            \'left\' => \'-122.419\',
            \'top\' => \'37.7749\',
            \'right\' => \'-122.419\',
            \'bottom\' => \'37.7749\',
            \'srid\' => NULL,
            \'accuracy\' => NULL,
            \'source\' => NULL,
          ),
        ),
      ),
      \'field_member\' => array(),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://innovatesf.com/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_add_deployment_for\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'5\',
          ),
        ),
      ),
      \'field_location\' => array(
        \'und\' => array(
          array(
            \'country\' => \'US\',
            \'administrative_area\' => \'CA\',
            \'sub_administrative_area\' => NULL,
            \'locality\' => \'San Francisco\',
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
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1359524173\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/11\',
        \'alias\' => \'deploy/deployment-wordpress\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'923bc61f-1e16-4f0f-ab2e-92580af6c24a\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'40077f52-b7f8-4ec0-ac40-8c691fe02000\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
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
      \'field_keywords\' => array(),
      \'field_related_applications\' => array(
        \'und\' => array(
          array(
            \'target_id\' => \'2\',
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
      \'field_install_url\' => array(),
      \'field_license\' => array(
        \'und\' => array(
          array(
            \'tid\' => \'168\',
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
            \'fid\' => NULL,
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'f87147a2-b4f9-40ab-a6b7-492397bdd4f3\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
          array(
            \'fid\' => NULL,
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'b624416e-416b-4629-a242-f702f7a3df3f\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'R0lGODlhCALVAfcAAAAAAP////f28fHx8fouMvSNkfCws/Rtd3VRVLiVmezj5PZBfPWSt8WxuUI7PvCtzLinsY08b6JxkPDJ4igaJe7i7PTq9Pz0/FIyU9jK2WhOa/HS9aWVp4Ndk5KOlZB5orarwezj+Lys1GNNjjkrXpiWurq5x7y71Ozs/OTk9PT0/Ozs9OTk7Le3uFFTdSYoRqipt4CFs6Wox15nm2t3przI9MjL1i1Cek1PVUhbi19pgqOy14+WqAkcQ9zk9OTs/Co5VGyHtnF5iNfk/HuJn26UxqjI9Iqjxg4uVGh+mbXL5cbc9gs1ZUJzrFeFuEhsllN8pFyErGiIqXybu6S81Ki4yNTk9Nzs/Nzk7Oz0/OTs9FGBrn6HjwxFdBFRhiJhlEt3nFZ7mqbJ57jJ18jZ5w5fnCxwpkKGuzpsk2mXubjc9x97vDaAszJPY1aEpFyMrIq834ay0Ja0ydTs/BRxrDKNxVKayTFcdkVpf3OrzmCs13O44YTI7abY9n6XpqnH2ZWptdPj7NTe5ECayk+o2EeQtkqIqWKjxU11ipnP6rnY6Mjo+Nzs9OT0/FmauFqMolFkbUB+mJTF2lx6h1qVq1KFmGiWqJvg+Xyntqi1uqfY6bbo+cjV2dTt9G2QmKvFy7jHytzi46bV3L/m69j5/Mf4+7nX2eT8/Nzs7Oz8/OT09PT8/Oz09OTs7NfY2NLt7KzXycnz5dLt48Hn1+P88ez89Nr457zVxtHn2Nzu4LfIusjWyPT89OTt46u2p+z35/T87MvUu+nz1vT85Or0yefnyfz85Pz87PT05Pz89PT07Ozs5Kmpp56enIGBgNjXuNjXyfz3yOjiuvv32cfDq7m2p/rmnt7QqcrFufz05PniuOjWtO3MndW8mPfq1/jkybmmjufZyOjh2Pz07MSacuS1i8itlcm3p9m/qtrIua6HbKeViH5PMqF1W5ZfRvXs6JODfL2pol9GP4NlX9nKx1QnH3hxcPdYV/z09GJgYPz8/PT09Ozs7OTk5MjIyEZGRiH5BAEAAP8ALAAAAAAIAtUBAAj/AAUIHEiwoMGDCBMqXMiwocOHECNKnEixosWLGDNq3Mixo8ePIEOKHEmypMmTKFOqXMmypcuXMGPKnEmzps2bOHPq3Mmzp8+fQIMKHUq0qNGjMZUt68e0qdOnUKNKnUq1qtWrWLNq3cq1q9evYMHyU4a0rNmKS1c0ysK2rdu3cOPKnUu3rt27ePPq3cu3r9+/gPuubdWP7EFl/BIrXsy4sePHkCNLnky5suXLmDNr3tx4AEN+/QKLHk26tOnTqFOrbrui38FlrVjInk27tu3buHPr3s27t+/fwIMLH0789jLDCPtpWc28ufPn0KOXbsWv4DIWP6Rr3869e1zCyA32/1vrvbz58+i5a1lGUJny9PDjy79LPWGo+fjz69+vxfVAfizsJ+CA6vl3UGg/JKjgggw26OCDEGa3yiooRGjhhRhmqOGGHHbo4YcghvhhI/0RBOCACRKoYnMlIhRKIw1mMeEPjUyYxQ+prKJCjRNOWGGOPVZ4ISvQNPPHD0KKqOSSTDbp5JNQYkiigQKc2MiVWCp4pZZYdunll14yCCaMNJKZXQD6ZDHmmmy26eabcMYp55x0vplFf+ERFEqDjaAjRBynCAMPF2qkYo4ziUADjz325DPFHL+sw6g9NMyBISvkANDEHDdG6emnoIYqKpMtCgSgmQqmgmaFqwSggoiNqP+qjz4BdLqgjKvQqM8qWbgCiBhXjCrssMQqiKeLfHJTTw6lKPsCH8e488Il3dSDhj/qUJCHLewA8Um2dqhJohY00qjFuT/05woWxmphJroJjutusfTWa2+xpVbJAqqNtNJCEnGQsk81SUgSLK6sSCjjnTXeyFaF7q5yThIUB7HICriyJQ4PcKwiDhGSBGDOC3XMwasKvCYIpAoOT6hCkvfGfO+xB+157s0/CMNOG5uQ48ALRRAjzw2lVHvGKdtYG4g7bZSijQNNkNKKOjg44IIaWZjjQNUk9IEOBnk8Iw8k9jjghCo+C4FDG3BkIY47VUcxh9iQ5JPDIjfnrffefPf/7fffgAcu+OCEF2744YgXni6V/GCBahbLwNNDGZt4g0MPh5CyCgtkWJEKK1owsgIZa4V+MyMK8tJMG3l84ksOl6zCiiCkr1INEGa8Es8LbIziSiZKMCJ6IJ3AeCcZgaCeBStkcEJGsDJHXy/NBtms9w/tACFKO3ew00Qw8rCRitFI1+NEJ+4AgUk7DkDbzgubRFPPFsE4kAMt7ydSbRHP1NOGKe0gQc8o0ISkbYFbNzhFOeqhh/4BIR9S6ETiJkjBClrwghjMIOEWZyJ25a0RketBF/hgDiAg4RCnoIcOJnGHPQBjHXfwBB6asAhq3CEPuLCHExaBgkZ8ow1dkMQc/wKggCv0Ah54wMMWRgEPJHjBEjpwYh50oQM4PMMFYRBCC1eRjjsgAhI5SIQ4uICGSaRhCXfSoBrXyMbDLS5PA7Fe3n5Qjhf4gR1FIMcdPFCPPJyiWm3gAgJuoIhfpE8IzsDAFFzRLUTW4wvrcIAdjJG//fXvCaQIoCbIQYE4FKMeYMCGPAI5DwqwoX9gOEUA2sjKVrryla3k4H88eDMQwgMId4iEDtrABD0UAwdsQIU6uqCJJh5iHUzYAzWQYAdoYMAMPPyBMiTXgy9gQgzHgAcx0wGEQWCDBIYQRDyAUIhXnOMFdsDGC8pwCxyYARf56IIo4MEEOKzjhK1YQbpgyf/PflbwB4woDLL29gOxVU0S3dgaCdTwx3rcgRkwCEQWerGzUgQgfX9IHyCY0QIylMMBhKDkC/RXD/4tqxSa5GQepFEPKIjtoZkwARkuiTd/2vSmOO2nDxhHy3M1ohf2aEMl2uAFLvTyHEDwQhhwgIQ90PMS50CCHqgBhENAAwc0XIG7xJEJyTmRCvlgwhd7sIZdYOAMqUAHEOxwCrXaIRhAYAMtEPCFdq6BF/Tkwzm7AIY4zCGngA0szgJqnysI77Co6wc7KHADNYRjsV+wQiPIxytGULQNfSjGzgYIh1SEIxPge4ItKlnS/jErpdq6pC3S14dVXIMKwbAW3hBL29r/2va2uM2tbnfL29769rfADa5wh8uInXZwnz4FahfkoENmSBUdSGADGQQhiFzQMxG320M1pJoLrNaUETVKRj/UwYQ8zIOYoRAEKqhBgkKswq1pXSs2gHAGW9DVrsnI6yqWAY3z8iGNgg2wPwFKpYKEwrC0vUIrfPaGOSxDHQ6YwhX6xI40zEF4RmwHDjZ8NRSkghwblocU5lCOfOTjZ5pAhzzi8AwEJIEU6nCBIsCBgThAAwEjHoaGN8xidiRhtsQNspCHTOQiG/nItzXuLBEsvJ/Oowd7YAUrwNEDO9jivK1D1JP5QGU91O8LPHiBGTbhLm2gARNU0EU+zFCK3Z3h/xPNwAQoHOCFPmCDzpowRw8GQQ2y2gIDXojFPJgQB3skkxOuw0Gds4DkRjv60b41bIH1hNtGoCl0qrpAk2cVusOqKgCgXkFxVQlqfbSiAS0AhzygUDxXXWFWKVCVWly9Cn1gGtSu+gGnIc3rXvv6145WsqmwwGTUtYIZSdBEI1iBjSTAgRTL8MAkJvEINcQjCWrAhhAScexpT8KvWriCOPzgbSeQ4gesOIe34dCKeCDiEIJgxiTyAAouwAEaQtiWB9JQio15AgddgEM1pv0ITTAa2AhP+HCvIOzq5dYHiIX4YSVOWx9YnOLFtTgjUAEOZzijBDAqrvAoLvGSR1zjIv9XuMpXzvJfN7xxxWbEFbKQpibzygdXmBCnG6EPfVaW5rNSQadzPqtdg3dX+lABI2j+KqbXaB8/0NEVUmFreU+iDWxF2awO3vKue73hBk64D07RIy1g3OtoT7vae40FnsZ87bt1BSjGQIYEnR3ueOc12Ckt9ovn/e+ADzxv295BwT8cegC9u+EXP9y9x5HxkI+85BuNBQUUfvKYzzxxrTDpOFrh86APvehHT/rSm/70qE+96lfP+ta7/vWwj73sZ0/70AfC8rPshOZ3z/vdch4h7lmR8IdPfMC05vK9T77yR955AbgH19CPvvSnT/3qW//62M++9rfP/e57//vgD7//+Mc//QtQaRkDQFPR18/+9rv//fCPv/znT//62//++M+//vcff1cpAI7O1w/kN4AEWIAGeIAImIAKaIAqcH7pt4AQGIESOIEUKH36cByHIYAVuIEc2IEe+IEI2IAEgX4gWIImeIIQeIEA+Hwo2IIu+IIwSH4iOBAkGIM2eIMxqIIZiIM82IM+WIIzKBA1+INEWIQKqIMGwYJGuIRM2ITcF4QCMIQVeAEDUIVWeIVYmIVauIVc2IVe+IVgGIZiOIZkSIb7YIEYmIQa6IRs2IZuCIVSOIH7wBl0WId2eId4mIeL8YC4hoQFoYRuGIiC+INwyIcTqA8scIaDuIjgpw/8/6CIpZaGf7iGjFiJlgiEDriBA8APl9iJ2TeH0OeH7UGJnliKphiCmViBVXiKrIhroNiHkjiK1qcPm6iHtniLuJiLuriLvLgYkDh9hRh93gAOcpAKyZAONtAqBLiKaKKM0Vd07hEKyigAChAKKaB93+ABStCKIPiKkbiCpAh9c1iG5FiO5niO6JiO6riO7NiOWJgYtAKMqYhr2zAPljAH05AAf8AL0OAPNmBpAWAB4uAPghAA2eAPWIBr3uAPZOCMuMaM0wAPYhAA3tAONLAKyYAOLXAO8rBhSTAH0YAAOJAPNeaQ1DcOGaAF3PiB3ogmsTgQgBiK/OCONFmTNnmTOP+ZkzqZGNQXjLh2jB7ADEoQDc2wBNkQD82wDkfQCMYAD37QDEFZDVC5jeHQDFBJBSbJjMnQDlKwCknjBaQQkUdADi5ABdiAAEUgDRgACP5gDiRgURHpDH8AatlADvbABWOgDDbQChkQDh5gD1QQANPQAOdgD35Aatpwl2QQAK6QDuswBT+wkt/XkqIIk+EIajqZmZq5mZzZmTb5iPI4goZ4lHKQDlWQDjAwRLMSDR7gNFygCPzQDUJABuIADjJQDBywBMmwDc1gBdHHjAFQDnjQCNyAAJNgBInZB+QwA6QQAMv5DBhgUdaQQNFgD0IAD0KATSDmAfLwBNigAWOQPVz/AA84kAjWQAGVAA/z4AQBsA136Qw0EAjqAASTIANZIJneR5kvKRAxiWsz6ZkAGqACOqCdOZOhSYOGOIyO5QvMUAWr0A3w4AHwEAOpUA5yQCvdIAOrkA0JQAXdcJcS6gdDBH3AqQ0aoAjmEATkUJrOQArkoAOL8A1oKT8v4AAUQAj6sJzQpg4x0F+JIADqoAPUoAEZ9QRWoAzuUATcMC3KUA5vqQ40cArhAA9VoA45MAoqEI/4uX36CY7U958EGqZiOqZkKoYGKn0+CWrhwAFzkA3gIARKgA6AYAX7YA5xsAr6GADHkADb6A3MsATdcAT7MIcroKWYyYcC4A5poA58/1AOYbAONOCcFFCjadAI2oABchAK5XADMEYBDvCpU3AOGmBRyzmkn9AOQZAFyeAOTsANb6kP3BCd7uCpDuAtUNqcW9p9XbqD0wemZfqrwBqsAnqm0Zemx9ANh5kML6oG1+ABmUAN8yAG0+ABihAA3+AMaqAP6eABpHANzpAJ5wAIi/mbfKisSCAEUiqSfKAPQaoILKACAXCpixAA0fCW5JADrLAPWYoOGrAJARCkpoqqquoOQeCqpQCr0akOMzCoKnAMFomrucqlnAiLXtqrwnqxGJuxn2mIuJamySAOBRkA4eAPWXAM2MAMMdUI2WAD97myVCcOyXgM6cAMzDAG9/9JrtC3DRSwBtbKDkhQCskQY/MKatpQDw+EAU6QChU5kvlwBDr2Aic2A9eAAZ/gDlDQCMnADq36AgfrpE4zDxsGCQDEnBHLfbuqhl+qsWq7tmw7hsQKfWk6i4Z6fbNCfcAZAMlAD76ZDOHACa2iAILgjMdADy3gCw4KashQDTDQAoEQAO/QANVgD1KgCq7ACuKABbQiDj6Akq2SDRnwstXADCagBYBrkmVrfWc7iWnbtqzbuq37th07jxN4twZoDJxEATmwBKdbgakrixYbhvsgAK6rsYNavAOwD1aIvFVYvMjLvMrLvMmbvMqrhfuAD9YrvFaYGAPAAvk6vdmLhdX/e71bqL1ZiL1kCLugFrcSOIdzu7tteLeVyZ+XGQC+moVZirzKALKsQIargA/Dq5n7oACuMMAsQI3/qQCtsA/vMMCugArLwMAErAIP7AqCUIXLEAorUIXiwAJbKAD9AAqg8AmmoAVVeAwwEAfCUAK2EApYcIX7IA0dIDDLqwA2EMKKsArmW4UCgA1FIMNWuAyCsL/ny7HpK7sS6IgDwH9KvMRM3MRO/MSzMocXEIr7GYCrq4UCEA4wwAj7kA3tEAWNMIbI0ACc8L86uQ/hAAEt0AIQkAm20ACBELzoMAbLgA2Z0ALVIAPiALnNcMeB4A3nsMYwwAlo7AFksA/i0KG1/6CFxsABkUAJj5AHc3CGyQABcaAq2cADiUCLywvDPpwM54AIlGAJjwAHqiAAipgMO9zD+0ArybAP3+AE/ZvEaJLD40vErmLER9yLvNzLvkyHv+iSFSt99XuFdfkCWJkN6hAEqpIMVhiPwpulVQiv0zAPeYC3ZnyT3gABN6wPAiAOvQDHwZsOnBAOINAqx5ABqqAPxtAA6zwO5zAGtbbNgRAO8fAJWrANMHACi5yFxlACmoBrAvANfmAJTwAHv1AF0DAJkaAHyevJypsMDXCnFOlsvBAORPAIe7APPByWPPAIh9AJ8YAGjqAJxvDRh7AI/tuF6JvLoumBUBzTMj3TNP/Nf2g4zNFXzMs7pfBABFdgDOpgYjgQBKewD8igYS6gBMnQDUQgMNfABdXQkTgwBf2cze4YDiaQClaoAu0cxwJAzssQD8yAz9g7xqgAy1VAwgPAC+igCFhtApzgD7vAz1p4DMyABpEQCY7wChyQB7dABChMA7hABHmgCA8dwxE90aqQxOiQB7kQA5IACn6gCTxMCxwQB6DAA3GADVsgCrlwwmMACHHQCN6bhS2tvu6b2o1Yxf0JajrtGehAA9KgA4oA1DlABuEwD3AQtFHQCuagA4FQDjkwB/jADS6AC/MwBaHAwVZNk+FwAryQvMMgzl/NCazwDvwws1ts1A1w1t//kNbT3NbPXQzxoATPXdVX2MhxgAWhwAjfUAiMcAyWLAwxYAu/4sydjNhVKNFxsNj60NjY8AWVEAlowAf0UATFgAh5jQZ6EA5FkArfMAloUAloYAdXYMvviMuordocvn3xa8W/m4XKQA58sJVwANREPQ7qEAXEgACJoALRMA9/UA46QNzGLQvtkAcqUNrNrY7iAAGBUGv4sAy/0ABkwM5GvgxaMCsCcA6LwN1njQwQYAq1Ng1A/tzA4A+oAA107c8ckAi4pg1nQArHcNn0bQuajN/HC9H7PdGtMg0gsw3uZZCowMPC8AbzOg5YEA5J+w1voAZ6qhxeeNq63OGGTres/z2/r/0NPuYB7LAFKN4I40AOUEAMGtAHMD4PkvDbpFDcI4DjeSDEPe6OqGkC/oBqnaDPp54JjKDF/uAP2HAC+yvlrzAAKpDGpt4CY7AP0AACpyAQ9GAC6G2FjewGmIAJcdALHOAImPAEeyAMNEAKEOAGcHDYn3wOYXDsfpAHjJANHlAImJAEfIANQUAL8WAImEDYoSAEhzAK57AF6X4Ic4DhV0joL33o+I59H97a9KuFKiDczJCUJ7rMqTANCJAHDnvNxj0K3eACpOoCo1UEGDnq7vjNr06QwduPCLkPyqDxNqDWyuAKGWzrC+kP1h3AoSDE1SjqVygAvyMHgEAFV//gDZkgB38gCL/wjzQvCdb+vFwF83+Aw/tA84AgB6jQD9adDSZQ9GTAC/QQB0twDEsvB4rA4xl+oEKIy/m+9d/Iq8SshTrGB2iylWngMxsWBKygAtIgkjggB6uwtDhgDw5fDh1ZBMNO8ejovMtrvMfL98vrwnw/qNLLha2cDPrgzIWvygOA+Pqw0muu38t7+IefvLOiysG734cfzYpv+Mng+Fxo7zTIDzU9+qRf+qZ/+u63DwKFtiGOheiXvYnRFCsgvPuwFMw9h0xBvgrQD8yN975fhq+9maBvKv3wy8Z//Mif/JHBAs3H78H/+9Af/WA4/PoiYNZ//diPOM2v6NL/3/3eP/0azjitUHzkX/56gQKrr7qt//3s3/7UfyLmH//yDxfU47tf3/74z/7vHyDzDxBZBA4kWNDgQYQJFS5k2NDhQ4gKtfRTJsDiRQHK+gXg2JEjvwEhRY4kWdLkSZQpVa5k2dLlS5gxZc6kWRMlSI8dVfTDyI9FRKBBhQ4lWnTgqpxJlS5l2tQp01USKWK8qHEpSJtZtW7l2tXrV7AxcSbd2fOnUbRp1a5VqGIVGSpx5c6lW9fuXbx585JZFfXgxIpUM25UGtbwYcSJFS8Wu09p2Ys+2U6mXBmoikBT0kTh3NnzZ9ChRY8mTTrNEUX6/k4VbFWpPqyMZc+mXdv2/80BSyFblGzZ92/gWf68KV3c+HHknt9QUWEQsODBTPfFvl3d+nXsM/nx06ebZ+SzwcWPJ7pqTHL06dV3/uN34PPWhJfqG7Dd/n38+fXv59/f/38AAxRwQAILNPBABBPEzzGmdhOgN/IilJAhFch4w431MtRQtC3eUMK9LOCjyrWnSjTxRBRTVHFFFlt08UUYY1zRQQghSmVCHCmTA4wNe/QxCiim+IEgETEiUUYkk1RySSabdPLJx77jLbyBVlDgyhUOEmaBCgpaYQUUEmKlgjCz4CeEHNOsMAoMRXMDETh1gELDR+CcExE8ePyRzTfGcK/IquSDclBCCzX0UESdov+RyixSKYcASA+YQKBUTjkliy27rPSUVLY5YINLNyWIGAIYSKUWAha4UdRGK6U0CxRuTHMtFZTQMzQ3oNCEFSxSoUeKJ4J9YoswnpjTjSd4LDbZNt3YYpNkIHiCjwDCoQHZYOcsFoxkoygWCmTBaBM0N9ygQjWBALXoyETbdfddeONtUMoHGWWlAFNPKWeBCU4x4IACNtgyhFrKATiERz9dpoADGEBTIFLv2aCce1QVh2EGsrgY4AlqeWCCVD6eVa1aeSz35JPPUMMYZ244YwopMAEEEB6SoIQHP8D1gwcwpJi5mSSOfVafb4KYQx96kgBDZkCIgMISnGl24w0eiIj/Ymc2UUYZinPfY21EQeUVe2yyy5Zx0YLuLeDGUw4w4N8C7inglwUsMGABhgswgIACJsj7nowFKgZvBtxeoJYDAL7nAW74vueALR84ZYHARzaqZK1PhuIMMXhxxYZmhj0CEDgCOKeIU7R5Io9VGkhDFmx20AebXJ1dJBRBGsngFHpokESYEhbxhohEAshgCWN40KN1J075hgZwM4eCa3RD/NrIsM3Wfnvuu0ebILVTuVHvewi4p2K6FSj//Hv8RqEYSMsvoExpFgin1G0WiPh8Bv5NJZwDAFByDbMcWko2PQQmcHpwYEQWAoCOMBTBBkpIhTdmsAcBcCAR3pACHPSR/4ExoOJX02vCIugRh15MgRT0SEMq3nECMvQDBnAAxgfykAoIFIEWEHACKcIRNAUmsGvpul6gundEJCYRXt8biNpYwQpu2A9fFVDABLakgIaxQgHi8NQGinGAB2hMAfRbwAD6lj9itI8f4lDA3ToVwIbRrXIFHMoBg4jAJIQBD2xYxDf2YDookKIYM7BDI8KhBmyAgQ/HYMYTwgBEKDShFNYCQ/PCkQYfKi0MUUgEMmy4ihymIh49/OEdESiH6qkrOkpkZStdqSQmCoQVFCtA3ExFy8TRzQLckFviJvA4BcTNlmUaXAU4FcVUHABvDfOfp4IJsFLRsSgqUIQpoQCGQv+QARtEkIMgmnEIVFTjCIacARQSsQoFEAENaRgFNDwgBn9osoSUdEIj6DEDOLQiHlNQxAw9mQdW8NCEMtBCKU1prj8VcV3Ze2VDHfpQ75jFIOFgmKTYZoBaduwBKDiFp/rWqYDVAm4bkNUyHpClLCjgAafCWAiqmAoFhAMFwqjlA7okTaJoYQpguCNP0yCHuBAhWT+tAib8EIZKHuGoYADDFuJAhSosladTWOoWjFqsQ8QFEFJIAyZo8AZMEAEMaYhDFZQaBlOONRDNIWJgwAZRuMYVrrEU36YsVVdL3VWvebWrXTmF17pWSnx55ZReB8tXWeEUKOZhamMbe000RDb/skx9gmTRQNnJTq+yknXsZJnqWcty67KVxSxnHetYroFIlexKyj72kR3Yxla213Ftd+YlUYGsAKO15G1vfftb4AZXuMPlrQEUO5QdnVa5y2Vuc537XOg69gg/YGtbocPajtBHQdvlbne9+13whle8A2JQlHBrpoomTr3rZW973fte+MY3cQVgxXGDooUjcCu6++Vvf5ubrCP4AETWcyv25kOd2SZYwQs+zFjIQq8a+ZWwE6ZwhS18YQxPOLH2jYgWqPAGMFhWxCMmcYlNfGIUi7hnctDCgAl8XYYGYDoMpnGNbWwT7pgXPBzmsQErJIcpBFnIQyZykY18ZCQnOcly/whEFlz84vhc5cZTpnKVT8KP8noklj3mclCiogUt/EDMYyZzmc18ZjSnWc1mBrOTq1uQ1cYYwVamc50V7GAtQ5hRXeYzRFTwZ0AHWtCDJnShDX1oREsFOqtMypzt/GhIVwfPOoFwK/p8aUyvRQutWDR2A+DoSIda1ImZNEccpAyUZlrVqwbKADot51HHWtYNzs2DqcKKRrBa17tWyD5eLeVZB1vYWSl1ABwkANf6pB/LZnaznf1saEdb2tOmdrWtfW1sZ1vb2+Z2t53digH4+tdKAfWwzf0VXw8gGSfZx7ph0m6uFPvY61JGve19b3znW9/75ne//f1vgAdc4AMneP/BDX5wfS/aiORWiWtfe246PxwlEpe4SRzuWpEcwwR/AB4pBECSfRTjA6QAucNNIgBoHIEWJam4S+RNL4XHXOYzp3nNbX5znOdc5zvnec9t7uly7+MdriA6Flp+kmWwoCX9ADfEVYIMajBD6ib4RQMC4et0cGIA6ZA6Mz4Rjq4zAwZkEADXmZEJLAggHBy4+jLiMQZWmISRaIgEGhyxCAFc4BgQiEMt+JENQIjB3eHeRgdI8XBepAMRdS/EKF7bbnxYBBtBOLwA8IGPfXyjCLX4OORZ8nKfh170oyd96U1/+tADnd3fUAcO8oEDHWwCH0gJAD7CrQ/b4uMY6pBCKtb/bdsAfHwAto3GPEo3eKeT5B3n+EMWhO4PWVgd65woBghOkQxkmEAV+0BGAxjhWnRUQRUqCAcMWhGOBIxhBdJgxglqYRJjaJAjyRA6KEBBhL4LQhxEOIQiRLIPaTC8h0uGBoiDRkiGZ9AVfHgHUPgERRAAbCgCUhgHf/gEJWCFdNgCSQiEY7CBT/gDLRA+3NAx1CtBEzxBFExBE1Q9k0CGdgCDVAiAZEAHJXggeCCC1BAHCKgGZ/CAJfAGd3ABLjiCZQAHLvCAEmiEfTAGcHAGQKAGedABLqACXki+kggHEMgCkVABY5C+suMEHdQFTlAB+hiA7kOFffAGEEBDVzsH/zIIhwYwgVBIB39wP7njALDChDhQhXgwBEt4AjgQBhqYBSGIhD34vwA8vJAgwD1Ut3PIA1SAAEzABHaKQFpogEm0BFGoBrtTBHrIREmIu5QAPRUsRVM8RVQ8RRYEuW3QANkLCaTghnzwAHiYhCWwBgdIgmZohxnAhSDkARlYBnPwgGZAgCCoBXLQAQ84QgSYBB74gyq0wpEIhxOIxpAYBi/MOlYIB39ogBY4AVUwwwZAw2/4BC0ICRW4BkWgRnqohjGgxvcrifh7g5mRhGJ4g0WIljgQhhiwhcAbPAAUwEUswHBUAXTIg2CwO0zAgz2ghyIQBh0wBEyYBDsohiJYhf9pEAKJnIRCmAMRNAlSTEWRHEmSLMmaW8WR2AduGAGSC4l9mIZ2uMhpmIcjaMU+CABt0ABNIIcg8L19wD19KIcZIAZ7EIMAGIBvMD4ZlEaSqD4lxDhsvDpgaAAyYAUyHLpqWATuG8c0hICr2wdgcENqHAYIeAV4hD/54whtGAQtOAYY2Md+BIREEMGAVER1K8BGEIC9g4N0qANOGANOQIUILIZC+IMxGINACIfm+QZKkAQbGAMyWAGVCEmTrEzLvExTRMn/W8lSsL0BUIHii4MsMAZ1CIJW3IQLyElNUAcaUEJlMAcEwAEcmAFp0AFF2AfQnIc4ODppXL4qCIV+EAf/fwiE8OuH8kvMT1g2cQCB7UMGCOiEcEsHGBCEfkiHKthGE3g/AaAHO5RHDsgDMuCEQPAG34GGJNADQbSF7wwERBTIu0wDRRCEatgC4UmCRAiFakgES/SAPRAEbIgDaKABTfiFZsgD/5QDvBvFWsuJecNMB31QCN05zRQJICwC2wqHUGiHNNCHmYyD00xNnWRN3zOHGTiFABBKYpgHoxyAcFBK5GPKAVAGs2MGuOs+sSMDXliGc5A6GLCCkEAGf2AElwQ7ZqiCEBQHG4g7AUBSUSSJY2iAMKiESHCEOdiGSjCENFCCjgsHTyCE9rTL7UyCSIiEQ/C4fQiHKN2CdpKD/1MYnkpogkTghXhgg0SYBj+oBDCAg3gcQVuLUD/9U0BVuAl1SW6wByFwBmewBzXQhnxI1ElYBG7AANTUBgzog3JAACEABHSYh0Odhxw4hWR0BiFQAnKAhCm0Rhi9PdwTPjKkP3TEPVd1yZSEVZekON581e5YNzLUh2T4uHX7SYDcBpakuACgVZcESmRzN6C0vVXQB9tb1pWgzECdVmp10EGFxW9IgGZoBiXghVVIh2YAhEBIBm8wge8rV0Z4B2pohipIvG0FBRtQhWM4h2bIhEbwhnhohjG41VSlsmWIV0lb0DyrVoItWJO81mM11l3tPH14PH34uGbVVaBUVtxT1f+P7Nc62wdUrQ1pNViP/dgVhDWMHVlR61iQPVmU9TmEJVmWvTGTTVmYjVmaW9mWrdkFe1mZzVmdXbhGs1mfnbKXRTihHVqiLVqjPVqkPbiZo9mfbdrr6FhlWIZWYAGqrVqrvVqszVqt3Vqu7Vqv/VqwDVuxHVuyLVuzvdpl4IeYY1qnbVuOzTJKGxGpBTMt+BK7vVu8zVu93Vu+7Vu//VvADVzBHVzCLVzDPdwvoVsWWAZBjbEZc1vIxY4c69OLWAYt4DXMxdwVULpxK4xyi1zQRQx+uICIqoo9y1zUxTQtUFsYa4rp8ImzjV3ZnV3arV3bvV3cxV2QAD7KrZfU/V3/VYszpwBK4i1e4z1e5E1e5V1e5m1e531e6I1e6Z1e6q1e60VeRdGzLFgz7u1e7/1e8A1f8R1f8i1f8yVfKHsruVpf9k2iRWkENCuI8M01WFGzgRCz+z1f/d1f/u1f/+XeRhDe9h1gAiab9zUzJ9MCQSADKxBful0zMBuSH0CBCP5fC75gDM5gCFYoRitgD/7gQzngMluFanCBO4CEO4CDGEQKFfgB2lOBy+2IvggHHDiDU1CBRnjhMauFdUCCLygFZYAHJDgDUnAyU/uBFeaIFWiEYnXhAFgBDY5iKZ7iMhNgEL5iLG4SGsEC+B2zRmAFcAACO1AFZcCGUfAHQBgD/0BQhNbxBD9QAxXwByKwBEsQAx4GAi+gUmVgBk/AhEXY3h/g4R7oAj74BhwYYlJIBmzwhDRQg1XwhyMABT+QhCsQB0D4A1RoATmYAxSgYk/+5P+14iweZVJ2kS3+AbrVgkYQh3zogj5YhSFJBiFGgh7QA2ZoA0zIBy/YBFeAgUxoGTioBiD4gjhwBXtAAz8AgjOYgzDjYSToAjZgBgdggjOghXW4A0uAhC+IBSGOBHtgAj64hh5gA1tAAC8ohX1IZXVeZ3ZuZ3d+Z3iOZ3meZ3quZ3r+AUbgYE8rZX7u59LlDSxA5QjOgnDQ5U1IhTDjBSE+hED4hjYog1MwhxcgBP9eYAYXaAMm0INiwAE2iGgksINUaIcuSITtdeZKaIM7wANo3gUcMANSAAcmyAMPQIJwfgE9eAZlLucfXgF77mmf/mmgDmqhVmd81ucY82ekRupTTuVV1uU+QOhGUGgk2INOaYMuuIOUzoN1YII9SAcS0GiOfmkguOo7QIM+KOkePgRz5oE2YINgwAGy/gJJgAdwpgabxukz0OlS4Omh7mu//mvAnuei7tykLuykXuoHZoUetoNT2AcbeAUh3oMf8AYcgOgAOAZXmIddRoeMhgYMcGl0EOMYfIdOCDPFnur/xAYgYANcaGlSCL4gruuJfoYXYANGQICdZoTA3m3e7u3/oB7s1jVs4fbnLb4CRjju4/4BZViHNoiESbiDROhhyT6FdMCBL0gCSNADagACNJiEjP6FeaDmUWDuSNCBO7gELbgCa+6BPWhWdECCJiCFc7Du55aEmeYDuyYEVJiHLkCEYd5r5A5wAR9wAi9wAz9wBE9wBV9wBm/wBDdumOPZ+bheCq9wC79wDM9wDd9w583ensAC4xbwqHaFBlQERsAdK2AEH4Ap+xuDK1hlUFCEULACVWiFv5yDVSDxTyCDAA8FV/CB48YCQQiEK0iFfmjAMThxQfABLHAFK7iCXrABUOAEQQhxB79yLM9yLd9yLhdwH4jwhWKKht2O3C1zMz9z/zRPczWX3e0YvtuKDBAfcB+4AifrC1VOhRU4bh/IYTun81VQgVRAgT1PhVVI7zqHYeRuBDw/7iLPAiDn80JX9PS+EUaA9CzockzPdE3f9Cv/csLOifoIXVFnjO2A27iFcyv3ch9YdRUHcuRedVZvdVjXc1eHdVd/9QCPdVlvdT1/9VnndGAPdmHHdE8P7tb63FFP9q6YXAaFMCwYdmiPdmmfdmon8GKPMoZTdm1vMFM3NnpRBlRI8Wofd3Ivd3NP8FVnXWzv2W1v96+QVn7AAlufd3qvd3u/d3zPd33fd37vd3//d4APeIHfdyuwAk779I5Adndf+JfoWJ/AAoiPeP+Jn3iKr3iLv3iMz3iN33iO73iP/3iQD3mRr/hWKDD1ZXeGT3maMFll4IdleHmYj3mZn3mar3mbv3mcz3md33me73mf/3mgD3qZN/l1zwmFV3mkB0mBPXXoSAanf3qoj3qpn3qqr3qrv3qsz3qt33qu73qv/3qwj/qlFdmkL/vPW3pTA/OdXXuZZVuzn7J0e9H/k/uVgLetwFm2z3uQdXuTYIXgk4lVoL+/J9mfXNVweziMK/yH3YdmhVWH5VWXjFUVuNiRoL2lDAkByAAyWAZw7FWSEAftS8mOoPsBEAe4AznSn0y093a9b/2YRdjykvs09AD/g4nXLAFh4IAl4Ff/p9tOCGiBFrABYKAHVAi3cBCEfdBB4CcD5Qf+TOCLcAD+T1iBJTUBHxA6bTw5bJCCR3iEQ/DIATgGDoiDXziBXzCB2/w/YQVTaPCD7s+DU/BMkYBAyqs4cZCDcIQJvHd9/gcIAQIHEixo8CDChAoJKusX4CHEh/wGUKxIcd82BDhwRFG1z6IKbQgSCfhYcR/KiykHoBQQjozIRPhMqqRp8SbOnDp38uzpk6eydJk4uYLWQlaDQPsEoBsjrAFRaCBQFYVAVEs4GESxVRkQjsMYVsWanaiV0xiHQ2NAmdLy8RiMOKn0ZeMhieY+aR1ImUx2ztIfUMycLCpZUQC2IqQE/5wM50TVz5sTI0JU0W8h5syaN3Pu7Pkz6NCiR29uSBnixJzF5sFREE7CKwUsKC5LIVKSK1crWC7LjYWlgtytFAR31WqFNg24dbMUIM6VIFaRp1Ovbt1iMRCMUH5ElnRpOk7hpq7gRVHFsAaMVGSDQGafCmTuwzX4hCWdibJnOcQJFAoLK9tEEskXewgTwy06fDHISXrxRVEyDciVDFp5sJJOGJHYoUpip4STRCSFjBLPF2Yk4g0RkRiiCT49TXaaZaTJOCONNdp4I46cmXZaAKndtA83LpTyEF3qSNHIOOTMUAwC+eSDASZZeKOOkzmQos08OORzBJX5JLEODUza8/9klAJ042Q+kph3HZttuhnOCWtSlJ5SAoQ3ADrMZGJDdAN4h8o+31ShxXnXKBKOCf5gcwI0+uF0DAdoVBLJIbkQ0ccxEMRxoC2AJJJMg3v1JSFkq6CTBzQzSAKKEHwk9gsNeYDiwSHQFHHKNEQc8gkPjszB2E4vUhZjjsUaeyyyyda442k+3uRNOy544MESxqgTBJLkhIkAHAEEOUo3I5wSQDq2XLvKNP6og0YjyWjLJB/eujDKNvZsEoA2HZQCrJv9+tsToqlUpIIx3/ESXhb66CNOA8x0ss+f+3ij3Ue8oHPoCcLEg7FZOKGVSAD64DuIFpluGkOnd4X64AARxgH/mT7nxJGOGX5YkoYiiRUTiSU9SxJOGqd8UwklPhPKk7AREass0007/bSxzFLmLEjTJNBMOznIcm2222qiQjQISPLNPJDYkwjZcSRDcDtTnJJkmBp8HbYk3WCgw5g4qNHiv337XdEy8SixygXjuILKOYNP4544ZCSzyjENPPznAAKcU0XC38CACqK19MNKox3f9LHC+nyzxSLG8GAgyjzAAepFDo46YThQaHI6KQF8k3MRwkjRRwDZmAKNE7gSAXI2NjyM9AA8Lg019NFLPz1CUkdENUgPTeNOIteecoySTGqiT3KJ7COOP924wAk8eeizTzZcw12MBn2QL3c3Gvzh/48/rhz9NwD/5Y1zMKOAJlCFN+LBDLCwQhwKLCAZKEK5AbwjT8yAgSBcYgJWLCV0OTkGM9AwIEd04hwDAgMcDkSKdCCCQbETFYSwgYgBrWgp5xAhGjRBj1ttAwyRQMMeWOEBE30jQ2g4RCNc1DwYXYZ6TnwiFJNlPdTkZB/XIAI9bGAOHZCCHDoYAzbYAQYmHQEa6ngCI57xAU5cQwOj8OIYqgED+YUPAXEwIxq9AY8puIIeDShMAAPppo/wo5AVKaSPEIk9iyDyOq1oBQtaQZFHpqaSkrzINmB4SEi2giacpMhE9sGPSFbkOKKM5G6U6LwmRrGVrnwlaKYoEZ1Ay/9JOhiFCqaUD3vwoATCgIeTwmCFZNQyH2JgzzryoQNFgEMOWRiHOXwJzHwIUwAq+EY7nJSEXwmym9785nWKwQFSgJN5q4QlOtOpToPIskc7iQiwIKIPUMGTIhDhm8gCIIBVwI6f+6gnSyJSzoEStKAs0YdBcZK0yrBynQ596BPbuciEUrSiFr3oNxf6kOdBtKMebZpEMSrSkZK0pNXRaAA4KhB+9KOlLn0pTGMq05nStKY2vSlOc6rTnfK0pz79aUyXoQyFhNSkRj0qUjGKUo4qYxmt0IIWViDVqVK1qla9KlazqtWtcrWrXv0qWMMq1rGSVapQ1UI/+JGQoia1rW7/fWsAl9pQATg1C3a9K17zqte98rWvfv0rYAMr2MEStrCGPSxi+bqCflTuIGyFK2QjK9mfyJUgA2BBYjOr2c1ytrOe/exmtaBWxzqERxOdLGpT+1Z+/JOJBBklaGMr29nStrayRWv1SnsaUaq2t75tKz/yOayGwpavPzguXhvRVxQo967HfS5gj9tcw0I3C9O1Ll5/cNfr2ra73iUsWofKTt1SRh+G/C1602tR1vIopcRlQSOeK99GpGIVWZCvdu0qX/3Ot76rsC9+A6xdAAu4wPtdhQqqmwUU4He6Bn4whCMs4QlTuMIWhnAjwkva9oZsAIr8MIhDLOIRk7jEJj4x/4pTrOIVs7jFLn4xjEsc0PY+b5TxbTAKWGCFH9z4B7zARhIScWNxcEEx9x1wPzhhCjJcAcJQxQIjLnxcLUD5uKvAhg4OMYcjH5cXzJDCJhgs5TGTucxmJnOG+yHegrQTIhfgDpzjLOc507nOdr4znvOs5z3zuc9+/jOgAy3oOQv3nAOxcYBXAQ173AEOjVhBI1YRAHD0gBD0xdcLylCKfVgZy2GYBCLgkIqUZiGlPxj1Q5JRjRzc6weSTqkWSv3qLEhaH89lxTkgoQe7roIa+fBVAFYhMhXwYh5IuMSrTw0RVpy52c5+9oU1PF4OU7va1r42trOt7W1zu9ve/ja4w/8tbm3XGAs/OCtUIw2OF/SgDlsWACgAYQ8k7CELrgAEF4BghlIM4Ae4bgMaPuEPHojCBlVYRCgyoYgsiAMQmADEJ/LRg0JoYhUDP8IiVuGKKtgAEJJohAnkoIYEN4IVlK7DKewaChgoIRRVGEMmRJ4MeDDhEstgBhyyAA1A+EEOi8gCuoMu9KETvehGPzrSk670paP73Gre8LijLvWpU73qVr861rld7nOjuxHLsAce8PAF+8WjDY+Y9x7EkY8v5HvfrPC6PZgAsv8ag+Z8oMYL9AANSKABEIAART6YYAglUMMFldBBExZRDSB8wRldMAQP2sAGUqzgB6oABxAG0Qj/FKQiHS44RDBw4AVPtOEMtIBHF/qgji7swfORAITPgc702dO+9ra/vdB/wIinTzvrvv898IMv/OF7e+tNz0I62mAHarRhD97IRxdGAQ56T18PxdB3KSCtdi9sIhVaaMQx7H6OHuihGz0ow8iVYffncx8dQDhEPF5Qh2c4oAyzQAD3OX35F2ie89QAgh0EQ/3NggZoGup5AhDogcn1gBksggrIHu5FoAROYATqHu+xGXkRnwZuIAd2oAdmm/GdlXZh3hk0AxDUQTjgAB1cHr2tHh9oA/ZpXz54QR+kAiN8D80lwjnkXSgwGh7k0DrUXArSQSlsAw4UAjMkIDQ4AB3E/wL+9cE+aMH+ad6pUQMJBCAQsIEt4F8pwAMSdAET8IE+0IMPgkEfQCAFpqEarmHQWWBufSAcxqEczqHvhWC6fR0SRAIXtEEZmEI+lMEpmAO9kUMYTgMO7NsKXAErrAMSEIKkuUIu0NwlbEPenUIy8AM5VBojXsI0zGApcMP7LZ4dLKEZOCENDoAUYh4hQIT7YSEbxIIGfEEXMgEmyEMZ5E4yKEA7IIEe6AMjsCEwBqMEuiHU0aExHiMyJiONERcWXAEjPOMVNMIOlsEo8IM6VBo4MAEatAH5QQMOdMEk9IAsrkCULQM8AAEaIMId8MEOegEkVFo1IMIktMEXLIE5vP+AF8ABNuDAHbRBE3QCpQ0CNFBAGcSCPHTBJbDCFWgBpXUBIiBCHlTDC5xBMLxAEx5kKRjbJZhDD7ABM8ij5C0CCjwjSZakSZ4kSqakSq4kS7akS77kS16BD8zVQLSZMt4kTuYk8JWbM5akIPgDGRxXKPjDErQCJ4ACKIxBIGiBKyDlGDAZSTZCK9iAU1qBUTplIDRlUv4cFuzCU6pCU46BFTRCKNgAGaACUDKCDXDCLz7jUK4FKCiCIJglFpilWrKlK9jAFbSCPyjBUSbljsGkYA4mYRamYcLkTL6hTi4mYzYm1fHkSZ4bSUom11EmVB3XSQZdlF2mFvyiFmDmZnb/5rlJ5maWJmhOJrqZpmiKpu6VJmceJmzGpmzO5kkmZjE6Jm7mpm5WG2TSpm/+JnAGp3AOJ2LSpEDY5G4mp3LmZLkRp3M+J3RGp3SipBUYpwDYJELFmHZuJ3d2p3d+J3iGJ4q11jK+FpRNJ3qmp3qu50tWp2LyCG+pl3zOZ0YFV3keWiBYgX7uJ3/2p3/+J4AGqIAOKIEWqIEeKIImqIIuKIMOqHW2k3nRp4ROaFzd50qZmzBmqIZuKId2aBtKGwa2F4WOKIn2C3u51kAswxItJ4uyqD4I1W1eT4nOKI1S1ooqTUOpaIvuqHK+6JoxRAZSUY0OKZEe0o0yFEHoKI8u/ylu+miMCmmRRumMVlaKHimTXulNOmnvNYuUdimJUqlAKCmWjqkyammImpaXpqmEgildWSmZvmkcmimQttdpqamd4oRN/IhSuenziCmc/ikcymlNBuksJdRK3ClLwBlLnMRJcEeiOuqj4kWj7sQ+JAM+4AO/eJgksQAH5eko/cilYqpO8MMl3USmTgeb+imgruoGCupxEqo7VRFlnGq/iAMnSMed7kNxuAIWCEBaUYQCdFJv+Maw5oYrsIAKDKsg0EYorMBHiMNv5IRzgMInfMIYHA1cbEoJ2MJ/WARGaJKuUusnDM6pIoZi2MQykAGuUkequimrvuvvuep1wupEjf/FtEzLEtAqm4yDOszAYtjpPoQDBLQAwWaCLXwHU4zBMpxDJrRANcgAw7QABzRsIIhDNRAsDIyBS3jAe4hDAlCB6FgEWoBBz+TBHPxTMmjKqNVFIiDUC7GMXyBC0VjCy5REqpkrX4hMMgSKE6xCi4iMPuirZPBpjrqr1b3PoCWt0i4t0zYtnxVaecHolk5NFXEDBvhBM2TtEgTtQZVE6YDKPihMAKyNwjCGPlyAwuwD3CyGCpRtl3qDewibc/QCwobHeEjaMbgCK+hDwaiCPozDOYyBsMFtIIRDPHyCFmxDJjjK6JSAJkBEoFjCI6ABHPyCDOzCJESCHqzM7EgaisD/AS98SCXswT4kBil4gx9UwiF0QjygAcWpTiU4wiLwTbAQbZIaLdWJknjuLu/2ru/ywwW0l7w+1kkEyZA8BLTEwSrUixpwQz5sxBQ0Qr3YAw6kgTngwCQsgTbYAzzggAsoAvjQACkkyUbIwboSKZwIzHkUTJ2ER+AwA+KaRMQIytGowMUgiglwgj/sAuNaBAiJUCQ4witwQB7sgh9sCg3Egh/kgSJwLoSQygDow6ngQgxIwi34gSYkBi3wxxjwQBwEwxaIQi9wMCDkQSPk6dAaWpjirtSZV9iWDgzHsAzPMA3XsA3fMA7nsA7vMA/3sA9nJ9QSidSeKZfiKTfoDzTY/4AN/AA3fFE7xME+vEMrsIJIxIHVwsE2yEMarEYRaIM8FAEm5sAraMspkEMUNMI3dIAmoPCMpu9J0Al43KoyrEA6XNB2zO+gnMf9nkAxCA6chGxFoEUcoEI/aME3DAIjmAynAIIYwA5LyM4Dv0wEn0o6fMGkoAEf7FAxzNAP6UE43Mo3TAIOHcIVCC0o2W6VAh9KwWuLRiiPDC+9Vq08QAKaGIE+lIM8OIF06EMdx4MGWLEGbALdWEsQSIMGqMEFRIMGKIK2CAMC+AEz+IIdsTGJng8ELIGw5SLdkgHfNgAZLIMPKIxfLALENACgIEM8CK4+EO4f04MqeJDHcADIPP+ENpwBKUAK69gCD3yKA7eMhEhariTCNhSCpGVDICSGMLzBIgTAMWCBY6SCN7yBGjB0KPzPqKLyCqsyebIyk3rYKw/xnKKpEQsJROwTNyBAHvACMKADPDiDM+AAMAsztxCzMfdBSGiAKDQzAkyCS3OBElBziaZDC5gANjRAC3RCVphANVQBI2SFP5hAC5yAdMjHKwyAClisLvhDC2gsNJjAKSwFPZgAIFMEWkABJhwwKnAAJWDCExiI+MbD6PazX4RBGmCCJeQBI2SDBxQCJiSBqwQBLcSDIfR1HuSCEDjCKJzDYHuClpmyh2F0m2o0R2OpR58GLNNp1QpJ6azCN9j/QybMQyJMA7cEgDHMQ0yHDRzQdDAHADnkACpoCy2oQxE8REN3qXPwjz8IwlKEgz/YAAvsgzJAA//YAGQMgDI063l4A//c6j4sQyjgqgI8t7RunBzIwR9cgTdUgXVjwS/YQCO8QwtIQj+fj3Zb9yqUxDLEnBwQ8q2OQ8jJARnwAjTIwRIcgz9UtyIA9SmrcGTzSDZAww88xEssb9aKwUNkg+Ba24lmSu4QSTiIAES8QwMIgrZ5gy5cAW0/gykE8WRbXWVH7Y8OKmYbsTxsBA5Awh+0QxqkwhH3gfNqiQvIQRsJ8zxIAk2XOA7gAfhqy+mqg4mbT5fGWU2YhKIyaqMu/4VKTKpOVGoyWCpLNHkyMAZjVCrt5oUmPXmTVzmUtwSENDljqECUt4yX+0S7ttdXWMHYxsMfuIscYIMzTDQ6AMKrUduJGkME3EuqmUMHvNpr7EC2JYM5xACqbYME/EGHA9+HR8Rli3ROfNhjn7Lu1mmAYIAmvIOzeqsyNBKibjqqQraqplqcY/g0NIMifIMHdII+kIMRALqfK3hr2Xk+OAAilDEFUAAQ5EE4sEOt34EakA0OOIATlJo2YACe6047zPMxgIMfNPihZ12iyxNIizijC1KgeAAgcTq2u0mZn8YxXI6kfUMzWIE2KO80wMMijPpEuzpts8MZ9AM87AAy6P95K2RBMmSSDLTCKlhtHDBJy0aDPSz02HaDEKCaHslBs//eswtxiL/qiHuTCuhTtkc8m2w7ZXgDOIzBQ6RDCWRBOQhBMzCDoYP7HFxbnd95MkjAEeiDnvO5BLQ6OnTAMHHPnD8EMrRDvAQ8ERzvwWNdwodMtDP8tEu80JcUxUfEN3CAIoztOewALyRAFZhDEjRCAGxDCaBatZX8JhwDygP6CKBaOMyDy3fAEGgDCSR9NOhLyGxD12vPOpTAzvtezy96EQ893Y9U0UOEN6xDFaTCNVDLN/AAIwSAOezAKpjDEUhH2NL5q5s8ygeANLBDD6TB2JJDPXSBGngxBbyAJEj/2rDfSzbYPCs6Q7G/vYfzw0cv/Lw2fN2vfkXdPUQUwzo4Aw/4AL5gDkMngCJ0Axe4NCBIPYed6La9PJrzyDcIOm0vPek7u+lb9s+nftCzPvQPlOtbHfBr23hoQfLHYdw3fztFv/cXVPUjaSr/Xvhnv2PaE/OjPoTW6fe3v4m6a5+ycNSJEoebf05eQPn7vPrDagAAxD5+AwgWNHgQYUKFCxk2dPgQYkSJEylWtHgRY8GBA/UF8PjRo4p+AkgKWDYAZEqVK1my5MdvX0yZM2nWtHkTZ06dO3n29PkTKNCBLPUtU1YSqbJ+LQPoG/ASalSpU6lWtXoVa1atW7l29foV/2xYsWOl7mMqEulJpmvZqhRIFm5cuXPpdjVL1CjSkkrb9vX7F3BgwYMJFzZ8GHHilWhLqlX8GHJkyZMptyx6VK8AvpU5d/b8GXTowYxJOhZ9GnVq1R8vZ9a8dHVs2bNpgyZtEmVt3bt5W86beXNv4cOJ675tunhy5Z5bA4e9HHp06Yf3jWyce3p27YCbZ152d3t48dlfpsU+Hv347nr59euYHn782tX1Ipd/X/n6+v32vcf/H0DJ9GkPs+sCPLA3/fRSZpl+HHwQwgglnJDCCi28EMMMNdyQww49/BDEEEUUkZ8CDUQQRdoUdI3FFl18EcYYZZyRxhptvBHHHHXckf9HF+1LEcjTVuyRyCKNPBLJJJVcssgfKXurriilnJJKrcBTaUgmtdySyy69/NJIJyV7aoCgzDwTzTTVXBNNMvEyEcw45ZyTzjqRFBMygfwLEr8LYFopSzsFHZTQQsHE87E/+QyQIEB/MxTSSCWddEdEFVN00f+echROSj39FNRJLU0M00zv2xTLR0NdldVW43RyHHPsccYZe4iwwrJwTFilJUWnYccMj5BhJwdeBxtHHQru4ESdKYw19TNUUwrU1WqtvfZGPI+Jp4pUAjhGHFdSCMAbLQJIRpx+zuFBEHNXUjSaenq4RJ9yKLhhFXRbAEULfRRwxZ8WyFglG1d4zSb/g2fDQSCPaNhx4ZNAyMWmBUYCeMcVbEz4QddOoD1MWpCoxZbkkk0u7byUpmFGiW/P8QAeHhopJwgV0OECFHiIaEYRl+6KRgN4mkimHWdGSGUbBBzAgYZf3HkBEnmA6KMcEhYJoJwXSvlo4TykqYeCNuQQph0cHMiBFHIowKGeO+Zx4ItTPi4sZNZUPRnvvLHFUxtmrkYHEC2SiUeRZNTxg4NTjjFn615/xgAWBJoh4pwRfmknCHy+gSeTdp4gJQAE0ijHhau5IaHxALo2Rp0Ymmonik5UiEAUcm5IxRoKSokGg0vmJqxuj0bWm/jiDcUTHRgaMWYdLmAmwnQhQPcm/3Gm4MVgE3IAkIQby582u41P4IlBcXeKIH3r01PvehrMVzHGnbVxoAAOcnI4xRrUtcGgj98HC74pdzPeAAlIKDFtq1vZaMYfWPGUZEiDA80Qgz62cQR97Ckl19uENpwxh+5dLgiqGIAKjDEPGpSvCN3AwCj2QQ7UcQ0BRTBGO2jQiGOoIwlWGIAyVmG/U6hvf77zX2AAOLwCHhGJSxLTyv5wLsCZoAX+eIYHFqEND5DiGx4AhQ8c5xHebcIjySjH0bhhDz80gwe4oCEKi4GAJDSDHSQA3bnMUQ8w1IIc8vDDEqRhDy40Ax6jsF8j8leKIA6RiPzgVBIZ2UguialgWf8IYzqYkQktoONqyYDGFZKRPIn5zCPHaEAjhOeNE/BqG/Yw4yvoYYN8YYMMAeCgPf4AAm+d6xxc4AEpjAEOHVAhAJuzhxAWEY5TegMEpzBGA66ASMAUUYCOlOY0dTQqxJTKmdqBZqeo2U1vxsiahxlKNsMzzmlF85vpVOeJODOg/lwQnvGU5zzpWU973hOf+dTnPvnZT3/68ykYFB4611nQboaTOlVS6EIZGqUriYygBpVoIxF6GH2wCaMZ1ehGOUoTgdqNmxMVaRIrSk5yGnGkKcVbSU3qTJSqFKZ7S1lLaZqqkMYUpyZjaU1/99Kc/hRUO+Xpx3wKVKNKSqhDNVX/UY/aVAPOVKkC+udUqQrPtjDVqVmlU1Kjyhan8IMFIxLrhVjwkgusBataVeuXuNrVllQHJlWV6z8HUFampHWtedVSW93qFhY8tDgDUuSb9FrY40G1r4Opznv0KTyrzpWqTXkJYQ1bWTtZUx8sIKU4s5AMLTxrUe5syjxZA89kVGAV8BQAai9Y2no61rVUxeZAb2pZ2+4VqqFQxC1DIQsYaAK0flHAH0iZDC7sYRtNmGOm9ETPZKTDBI2wqjEkMIrRSqMDp7jgOFzBxXo+t2X60FUq5iqQRd4WvV76kT4aYAgwZoMHcLhlAPbBCkkGQAUd0Qev9isyX3whEfnywB7C/7GF5S6KI6SdBjwgYYoLJmMAy6huAATAj3B8QLvkasYO8lthVsTzGO1AG+tcsLUKvxMfBMnvBR7M4nnqyabplfGWnOQNP0hCdUV4BQwCvAweuMERizBGCTYxDh4nwwRw8I835NAMPTQiGQMu8IGDlNl3yjMA6MhENeQgXXSosnTZUIcO7BED8gYgaZD4gzfWkY8kkAGe1F3HHrTRjA+Qgs35IMIS2KzKI6QiHmNYRTpkQF55+gmweJ3xon0E1WMwIw+rwIYeanFcZPgBDozARhFqkQA+eEMIhEBGM/gAEnrAwRtp2ESUCWzgpf6VntNohhK2QcVoOEMRwpBALLoRA/9UPAPDLPbGhpl3BEaYgweMuCB1byEBQOiCA7IABxH8sQ5AQAMef5DGBwKRgCqsAh3kmyeiY8xoczcJsdhIQyyOzAM+QAMKkvhDJqRAimvYARp+yMMnAJG6ZGQCDo3gAB9YPeWlxjWeZ90GPAAhKzFwowj6OIYEcAGOUn8j2PrwBjNqMA0etKzOVlh2dclBg1xQXB14gIczPuEPDgzhGAmYRQKAiY4SaFeeAkl0RM/dcxmJ6Rt+wMQh1HAMIvChGDPAxBGOIIpTeIMGmEgEOiyRh/lmgwiUwIQnBlELKbvaVAG9wNgvsIpjgMMZzQDkFNJBBBs8owOjMMcUXNGNEwr/ex0lEIa1XQGOZOvjAtRVxDsyMI1dm+MILBBHKFy+BObNHBCuSICZyU52GJ+ztj7XfKNZ8ug7PNnofFgGIERBBkEE4hTjgAcbTrENNJT6I9hwhBw+8YkwaGLAyaVylflzAZno4xvMWIIXASEIczjDAx3oxOacV4JU4CNf3XDGH76xDmdwQQn5ImECrEsuDmARHkJwhgxcAQErGCMeZNAGPLgw/ufTZLLl3vz8f47YANBDCpo4128JBghLVP0UkgEb9iAARg+MhAcbNOE9WkAUWiARxOEI5AZaXoImyuSi+mMfVABcsCAm9AEZXEEL8IEXYiJf+mFclAEE9SEZYkIA/2pCBQIABUOhszxqGUIhBGsioM6L/naQ8wKjtRJLZMpqJvILH35PAIxFH4qQNWaCv/rDI1rw94owA/WhBd8jGTqsP65wCWfiKQCLtngQDFmEr4DQI/xkIDqqo57CnOQvDNsQN8gwMQSroeTCC0HKDe9wDOGwKfZBDecQLCwQrXjuDnsuD/XQsSALEe2pLxRtEA2rEA0xPRixEfXqESFRPQRxEhdtGQbLEv1HEjNRrRikE4cowkARDDdxFOemOjLPFBltE/fhAlRAFmeRFmvRFm8RF3NRF3eRF3vRF38RGINRGIeRGGdRIPqBH1oxDPmhQcbKGZ8RGqNRGqfRQ5JRGf+vERuzURu3kRu70Ru/ERzDURzHkRzL0RzPER3TUR3XkR3b0R3fER7jUR7nkR7r0R7vER/zUR/3kR/70R//kRyTQSAHkiAL0iAPEiETUiEXkiEb0iEfEiIjUiInkiILEiBVikGWQSM3kiM70iM/EiRDUiRHkiRL0iRPEiVTUiVXkiU70hovUqKWgQW0gCZr0iZvEidzUid3kid70id/EiiDUiiHkiiL0ihxshUwESZJqhV+IAueEiqjUiqnkiqr0iqvEiuzUiu3kiu70iu/EizDkiq1oB9YcSmPSBlYYAXEki3b0i3fEi7jUi7bshVe8iypCazmUi/3ki/70i/3kiz/79Kb8tIrf6ARovIHnJIvExMrGfMvHxMyIZMszVIwiycvExMzM1MzGRO/MFO69AEFNlM0R5M0nbIjsoA0JWkVQrM0W9M1XxM2Y1M2Z5M2Z7MRJrMypwmsGkE0paszMTMLXKEK1IA3G6EfquAPrgA1ZxO0VEAzs+A4k5M3gbMptEA4FeEwYTML9mQFatM7vxM8w9M2cTM3HWk3NxM6myEKNGE6fyAZ1qEHnswwnwEIvqAU9mE2WYEZkmASEMEN+iALtAAzwY0CvEANltMpoYEIEoEV4JMNSAE/XbMRQsED+DMM4gBCxVNDN5RDvZM8y5OR+AEL2nNAz+EFesAOlNMw/5MBHJDgyRqhEejTDO5zM6fTRjPzF+bBRf1hDKwARhMTRlvBFQTBMIGTGnqAEFKhHzghELKzSA2zONszRh2gDD5hHZhAD1KhO6GUS3/0SUm0Q8NUTGHzQ0EUiUT0B26yEfgBHtrgDspADVZhGyDhDtoACfaATbvgDpBgRlegEX6hGdy0DezgFOIBCCqhDbwgEQL0B3KUCXxHH8TBHrrg3XDgCz5BAwphDszBTe8AE/IBCbrgDHShDfYgGNoADSChC/ZgFc5BUBU1TRsBGhyADk4hHBxgDUzBHuoUwFpVULsgEWphHdqgDb5gE1TgKJNVWZfVJ9O0LM00RLEgTWvSKf/DwQUMoRlugA+MIR+6YBPM4U7BVQ+mAQdmlBW0oBFWoR+wwR6YQBPi4QXW4BleYBBIQUBzFAkOIRPkYA7EIR+8ABK8oA++AQPYIBjqc46u4QX0IABMVA8O1gxAQQPMYBdwoAxoAR6A9TZllVYbIR2A4AxOAR8yoBmAgA0q9mLhwV3XAQkuYRpwlRRWgFlnlmaV9QcY4Vmh9Uyl1Sad0hyAQA+uAQcGIRwslhFadA/UgVK1AQj69Af4oWRTtQve9U6hAQPOYA7u1R6QIBI8YQriNB0cgAlKLRwKVhC2Fg2kQA2o4QUI4RTOAWgP1g5yoVx9oQ3q4BcmNRFilR4cwAv/HgESvmARiqFbKwFkqeFu87YL/mBSKyEJaHURArRmJ5dyf/Jmc1ZnCwhNe7YX4AEJvgASgIAOdiEf6OBo75QclrZpS8FPocFiScEcboBq9QAaSABr73UemOAAA7QaxPYQSKFs2aAUvMEG4LMO2DZJ4fZhgaAQcKFu73YY9JZvqVQOqGAO3tNFjUEDmgBx6wAYnKELREFl06AKPoEMrqBy01d9cfJyM3dnr4AR4pcRGoEecMALRGEZMhYOMlYSPHcPrgFkdWF1uzMc8uFSJ1UTWpR2bTdrrwBf94ATlMAKqqENmsAZsNRq2UARyAALwAEICAEbXoANRqEaFvZgm7dc/2fBgGFBeuc3bNfAW7JgBcyhC+ygGoCgCXDBHr6AhR9VeQMBGwBhEbRAfovYiI8YiZNYiZeYiZvYiZ0Yfq3DfQlIROFXfrUAGyYhD6SLGiZhD8SBCxBBjBOhEcABDxBhEqaggT3WHrqWBkYhiyUBF4QgD+aAEa6gFZqhP/EACqjAAwxhEbzBGQphDJwhD7IYEfBAD7KABdYBDxzhFoRAEqBBCOJAFjwgDeYgHYQAEpBAYG/2ClzBGQ4ha++4FdYBER4hCY6AFDa5k4EV3HQgkeuYiJ/Ylm8Zl3NZl+/YB6R4io2nio14s7TACuRGHzarDBkBtGp5fkECBUjpAn7AI/+YuTl5ZQWaKQDuC5kD4I6NRZIuYLN+oCNaARSqgBnuIA+KWJoDgJmvALTIuQp8AQ8OgRF8YL7YeZfzWZ/3GZd7+ZepGAusWH59wAqsIH4J2gcIuqCtwAfqeaENuogf2qHjt6CLWKELOqEhGqET+qI1uqIZmhFAuqEZwR8AARDEYBWYOaQheqAX2ge0oKQB4Q9SgYg7mp9vGqdz+qB9+Z/1RkR1Gqj5eb5U2ol9QALxOaiTWqn7mad7Gm9+eqmjuqgXWpcvWqqvGqsjuqmd2mT4IRAeGqzDWqzHmqzL2qzPGq3TWq3Xmq3b2q3feq0DYau5mmSgOqvvGq/zWq9z2Z//6TpvNnG/VkGwB5uwC9uwDxuxE1uxF5uxG9uxHxuyI1uyJ5uyD1sfRIIy/Tqo7C8VgeQTNfuyOLuzUeSzQXurRHu0D6S0TVtOKjG1o2O1WftQUPu1/yO2ZVu9aLu27+O2cfuRdHu346O3fRu3gptPhpu4lQi4jRs9kDu5kwRPBoQap5u6q/tCZks4nPu5j0RMBGIAEhG8w1u8xzvn+IMojpG6OcKrlHK7B8VJRIu5r4oFMOiikNEJKcMp+uG774q92zu0AQW743sl3ENk6qoOJ+MlPuoL/XuzAfzABRwkCPwjFusQf1CuKtyqAgCAFpzBPeW9AxzCI9w/RAvLRmu0/6ZKAL6bniQLsbS7wysFquA7xFtCwulLkbBMk0wAG/hlT3p8xP3jHEpAkurJvHTwxZEqxkF8xgNAwt1pnp6L/eBBB/5ABRWgH8hLABxkBS4IH9IyvxqkVUsgFFohtcYNu138yHHkwx98xpsc1uSJeQABCy6GBZ5L7f5gFcJhHZqBGaxgHM4BjchAz7ngExoAHjzAA1CantbQDtMcyR18yWmcsfrBxeIJzdgPEMYgC7TBHjxgHexhE6YBHDzAHo4AGdrBDzgBGzwABnbcHHAGHGiAFBY9xvvb0XMb0iN9wBnrzU2LVwRAAcxhHqigG3SAGZjBA5YgHdRufJAhAdQgAP+oYQokMMhXwfAW4cUYncNvvVDWXNd3XXg4ovIIxh84oURo7hqIgAz4IR1cAR7i4B3AIQaWYR0UQR/QwQPGIFzioQQaYXOwvfJ878xtndtpLMnZPMRrfB/mmwm3BfngoQQY4eycxxkWIR0O3QNk4BcIRx+yIR5oRQ4aAAQawRsSoBNWkAs5EfMK/rBy/dtFnDVY4LuZMBvowR9MIBC2yx/8YWDGIR1AQRAsYB+WgRXyaxzowQSwoAuBnRVqIsDRnOXBKcnP6uVhfsL1myae5QKf5QiXUAVJ8BAzMACkUCbiz8ijvk68veqFp8Y9Aq7Q0CYGABkVPIAyG+2ZpLsHIuD/957v+97v/x7wA1/wB5/wC9/wx867V0IgyoqhZJ7u6/7uBQVPoMQPK9/yxeK+sYQPFyrzfcPuIx+6OZu8R5/0S9+fvMr0Hx+iPh/0uXu51z6wCL710Q32I1H2Z79HXLv2UQPqcd88dv8SWd/3eUT3gT80en/439D4twP5h7/4+wrw4J5NXGy9hT/5c+T5o4ryL98r9tvzrx/XI90pHF853oLum9/3s7+mvkr1eSMHzx78lXsR2/8v6J9RWADDGYu0FPHEAUKfwIH6AgQQaJCgwoULDQ7gV9CgxIPLlAm4iDGjxo0cO3r8CDKkyJEkS5o8iTKlypUsUS4bMFGivlUy/3nZWEQzps6d+lQktLHk3Z9UO4saPYo0qdKlRvVBPKgwgIB9CpPRazQQmY1VAy/QZFhQgE99yaiCPbuQH0yd+iq2fAs3rty5dOvavfvxJVtokhoFSObPFKhROZkaDDel018ueraZKWU4suTJlCXu4wdV4bF4PBgdNHhMwiiJ0jqcKpjNn5XPCQcmM3fkIDoepyYilJmwtcLLEW27xQs8uPDhxIsD16sTm5s+AbL5kYQqi0FXYxStShYoldMfAfj5mJjM1xc41z3sCbeFVOX17NtL5Gc2qjZ49v7QTI2tw6IA4VpU+3BaAN/AE4MV+vTHiQoDHdMOJJtMo44LpBxoAv8nqeAjDj2gGKjACvq8wwJXu8HH1m/GnYhiiiquaBdyMXnDAxz8FWELD3ysAg0mmEyhyTE8bDIOD3sck4mMEn0jRwt2XJGMeeip516UUiqlDwvxEZTMOaBQA8gPx5jDBTwjlDIgF87EkMoFAWwzjw6mpAOPM1zYJ5AxEoBTxDbNfEBKOHFyoYQ4cZ6pSgJUrIJOCdopdAGJMbVlEYuSTkpppZO6CB4Mh6Ryzh61EMGHOEQkkgU9TpwCzh7eCEFIP8xcMpE/cBwzxSZNnpfelLru+qiVjOoTTTNKbOPBEtoQ0YmdscC2SjEAXqCPN8woYcw6cqzCDQ8G6mOnKepYsov/BLiQo4Mv8AASriLTeEBGAlUgWsJpI+5TYqSW3otvvvqyhOlE6aRhCiBiJGMjNDPo6EcapGxjxy5TyFEFIFD+xUweiph365O8bqyrU1fqo+Y19nCxTj5icFNEAKHNAg4fAWjzbLQc1LCuGAFY48G2do7STQy/iKuOFC20gAs9HFhxTAK4JPBHAIku2tVlaj5q4r5WX4211f1K5I0flhyyyDGgFhOGJJxw8koqyNCASR/oGLJHYd54QgkmnpxxipO5csy3e7ztAzhV06zDgz/+gONHMPAw44sGPAvhyzoznIKPPtmsQwQn8XjAzLmNJKOCnYokU4E3HcTSjQf+GV5s/7WmgJkJgRcGvs8FD/UmU9VZ785778ZtbVAyzHShRyrHcLEHKy3oeIQkp4wDTx2pbIOGywlVc4gigYQihCTmbdPExH2PP5k+/dBOlTfYKBaAMSb4cI0HgMDASDbgyC/ChSoko6cS2Zwjv0DoQyzHaIAAA4CMBjQiG5trxhj64Q8fjAMbgfBGPJrRjBNkAR/oUwtPdOe7EIpwhC0BnkEUUIX9JOMm+jgGKOQgh6HoQxyKCIAybHCFibiCfQFwxShcsYh3KIEo5CuiZAZwPvSt4gKAu87+BsAKfVQuGQNQUOD2NxWyVHGAgZNiF6lCxX3sj4n7WEXlBFDFsqDvdh+0F/8J3wjHOOZlLUasox0l4xT40E4FtJuKgmbSRLLwYo9kEWMhabcKRAIOWlzkoxgDqY9B0o4fVioKpOSIyUzK0YR37KQnbcOPfqhlHwLAxwVOeQEVXGAqiySjGFG5yldysHawpOUpaXnFC5hSl7dsJeAGwAJ+TK2NmiymMXvHyU8q8476uAwl+wHNaEpzmtSspjWvic1osiCYA8BdvY4JznDmK5nLLKcRm7mPAahznexspzvfCc94ynOdgLtNU0AoznzqszjkNKc//wlQYu5zoAQNTj8DitCEKvOSBW2oQ+NyUIVKdKLjY+hDL4pRk0SUohztaJQsmtGQipQjG/WoSU//ahiQjnSlIuUHZlAK05hWZh/LYKlNV9oPOsp0pzy1pEtvCtSMKiOnaCmqUY+K1KQqdalMbapTnwpVsAhgGTUNqlUfqoxlZHOrXO2qV78K1rCKdaxkLatY+XHVtGJVGWxtq1vfCte4ynWudK2rXe+K17zqda987atf36rWwAp2sIQtrGEPi9jEKnaxjG2sYx8L2chKdrKUraxlL4vZzGp2s5ztrGc/C9rQina0pC2taU+L2tSqdrWsba1rXwvb2Mp2trStrW1va6m/6na3vO2tb38L3L/i9rNZ3aZxj4vc5Cp3ucxtrnOfC93oSne61K2uda+r3H5UdbiaDaUWsgDe//CKd7zkLa95z4ve9Kp3vextr3vfC9/4ype8KGjFdrl72WV8d7787a9//wvgAAuYv8HE72Xf0YoBK3jBDG6wgxeshVYY2LKUfLCFL4zhDD9YC/2YcGUrrOEQi3jEJD4vh93o4cdSshE/aLGLWxzeFzeiFYFghIu1gAUfNAIFL+6xj108Xh9nQQuCsMKPwfuDVgiCESz+sZN/EGQhZ+HJVK6yla+M5Sxr+cqNOHGKJbtiIbfCBmOwQpehrA9wIGEPjWhEFsLRhsfsA8bh5TGUY+xiVVBnDHy2ApKhvIp0OMAMahhvK8awCFao2Q6kUEGd6QxeO8N4z2Mgg5tjzApXKP/hClN+9J3xDOrx2vnPWy61qU/tYy9/GbJh7vEqqPGCHhxix+AdwDp6oAc3ayEdQPhCKeasBS2gghH7/YGu3eziX8yjB19ARBg0wYpLq4IV0BBCGhYxZEYw+Rw9GIQqsDGJOFxaC8jOgiqI3eQWryAYLrgDIiBhiFKswAdMzgIy8tGFRLiZFcTOAgp0zWQYa6HePyA3eMnN4jZrAdUMb7iWVb1qx/IDC+lucSOUsY42MMEMOBGHH/wAiTWzohqPEAIQHsOKJLfg40SAwymwQQRAEOENhW6xspmwCYO8oxlR6IM4PAAwGPyhEfQggh888QdnIAENccAFDBThCiJMwQ//bxBDKoruCU9IQQ0Wh4YDylCbceyCDDz4+BRGgQ0cdMEQamhFMyyRBDg0QgHNeITWnVf0R0xhEbxgxselwANLkCodcU+Fww+P+FT3A8URV+zECx7sYGdBHPkAAxdukIhkwAMJjlD6HtLxgi804+SlSLkqoNEMLgDBC6MAB7Ph0QM7nPnmeQCFEgIBjheYQemHCMYL6IALtcshE2RYBxLY8IdqdJsaPfACF17ABlzgGxM4YAIfupwF18eN3KtYRgt4oAMkFGIX+D4ELpxxAznMI9+uZwPsCyH9O/gBB2eIxbKZ4AVn9EB67UACH1QQeQEogANIgAVogAeIgAkogD/A/wiL13gShwWQF2xQdg5tQAjXgAOE8A04AHbmsGbqYH3RgAOPsQI/cHpc4AmQwASJUA1IoAfEgAFsMAcL9wv2gASRkARBsAn6YA4vwAR6sArfgAFnAA1qFwdj0AjP8AJ7EADnAAR6EAxAUAi5gABm4AtAUAeal28Fp2hMsAepsHBJxgxJ4AknRwvz4GvaAARl8AmwZwfz4AWbcA1IcAhqpgcB0A5dIAn2wARxcAXGgADAhwNrsAoKaIiHiIiJOIAM6IAPyFiPF4CNwArGxwYeAARrUIR0kApqtgfq0AWX8A2ktwKNEA75EIcJcAOaEA9rBg0kcAYz+AM1yASX0BNZkP8KguaFqxAOMVgK6eAHQoAEgwBrQHgOJACFUogLGmCFbTAIx2APW0hu3DYIqbAKWTAAiyYMGtAEtgCHm7ANq/dxfkAF81AGi9ANdAgOP4iHerh+ibAKqwAOXTAJ1rcPxKaI94iP+bhwDeiIjQWJkdcIRcgElgAI+LaHegh7euCBwvgCZSBvpIgDXmAKfJgIrqcHSiiDNIgAayYIZNAJaXcHkNAFfKCEZqA9WtCDdUANFMAGo6B8hIAN0IcLGPAFt8CBsPCMfFBwPyAO6ycJZJAJgNAMSGAHMWkG3OiFwmCKYsAI2KAIILgHixYMIwgK+fAFozAPXuhm4YADPVAGM6j/j2EplgnIiP34iFhwBdqmbVqADZDgCLXRDZCwB9igA5UwCXcAB70AD2jgCXjgBKWgBVegBdUACSX3BIpADS4AB9CgAYcwg1fQCvBwB5XgCZbwBx6ABolQioVwC/ZwCP5ABJ6gA4awBOJgD2iQB7rgAnGwC5BgfvawBXNwDkkwf1uobT9QDEKACJ4wCWkgCM6wmzpQBKRwDpDQBJrgCs5AmToQKlxgCTZoB5yiA4gABZoADPCAB4nwA1cgAOrgggyoluEpnuNJnuVpnueJnulZnh1mlo6HluKJBaGglqgQCn7WC5xABlhgY/zgCpwQCimgllegCuLACVjAAoxAn9om/5/hGZ9nwwmBUGTg1Q+C4AP94ANY4KBXoAJJ5gpkwAgHygihQG+hgAVs6Qd8eAaLEKBZwA8OymTL0KHbJKD9wAlWkArLcDZk8AOu0AxJEJGaAF6hYAM+MGRYoJ9MJg7y4AVLMHDq6aRPCqVRSp4V2p7umZbh+QOpkAW3qaWc9o6FyGTv6GjheQWp4GhDlqWBCV7h2QjUuAobmgUAyGlw2mnvuKVhOmWpgAKclgV82gr+AAiAcASL0KRq2QhfuqWHeqaM4KVaoGNuqmcwEKhikAU+UKbVyAg6lm1X4AoeIAlXKqWhKqqjGp5UWqWINXFTSm+Zuqo+4Kqt+qqrqpaxyv+q2uaqpRqrr2qr9MartMqqvVqrtxp52SaeufqrsIqsqxpsbpapv7qrbHqnpCqt0+qkpnqqhpWq1Kqt28qt3eqt3yqt1nqthJWquWqu54qu6aqu68qu7equ7wqv8Sqv80qv8soIVsCe40qugWAF/eqv/wqwASuwA0uwBWuwB4uwCauwC8uwDeuwD1uwgZCv+ipYy8APX4qxGauxG8uxHeuxHwuyISuyI0uyJWuyJ4uyIcsKjUixgVVSPQWzHaVSLWtVLxuzN6tQM0uzQGWzOOuz/6SzO2tTPfuzRbtQ+CS0LEW0Rsu0dhS0STtSS9u0U1tRSAu1IiW1VKu1vPK0V5v/UVm7tWH7UVbrtRgFtmKLtpXRtWX7UJyETugDt3Ert3NLt3Vrt3eLt3mrt3tbT0kRVUbFFGvLtg1lQnnkUoeLuImruIvLuI3ruI8LuZEruZNLuZDrTTLBRPOkuZtLFX5LtoNLuDolEw+RthPFRjHRKC61uasbTy5FL0chuKA7UMDjFMNUugnVD97kTJfLtZchulTDeLLbtr97EI5yu7iLO43yurrxtzIxEDLhQZb0ucK7T7RrvMcbULkLvWsRFbbBVAGQSmBRvMsLvNQbUtZLvtj7T9prEJeRGc8rDthgAmQgIksVAOlgAllwFu4rUOZ7UeirvgjFvk4BE1ERDs3g/wHrIARKUBis0RpFYQ4lkBNgIUz9678OBcABDFADDB8LkTQyoAoJJAgCgsBqwB/r0AyZ8DzpUA3a4g3rwAWm0AAeQMNLQMHEG7sXfEwZrMH+NMD9wEhYgg7wMCfS8cKM4wyLgAzn0Dk7kA3qQAQ2QA8JwDhVYA7OkAnrEANYkRY4PL06vMM4fL09vEw/HMQCkQxkEQ7YsA72oATdoAPO4Az2sAkDMsclgAzroAkBwCU5tA8R3AjfIAGdsBCN4sXBC8b5xMNkXMYR4TEgg0qrkA2CQBTHQA5y0A1SEAosUAyuAA9w0A89gwwJoAb6cA5+4BcCEA8lkAUvvAiQjEqXkf++CfHFiaxJi8zIn8S+AfA3gbMKxwAO9iDHREAGgyMEczwK5iDMZ7IM61BDL2wP9oAJCVACgQwPi6BGk8S7OWzLmITLudxJu2w+tYNICmA4/iAICiIOhmMDWfAO9OAPnGAl4qAFCrIMhiMICtAPKqAM4sAKsxQ40ftN3Ty7YjzL4GxHuxwASAS30LJEsXQd0CIWM8FFruQVq8QLrJRIa/RSFkzQ4vTNCF1HCu0UScS3Jw04lMS7tIzIH11MJnS6Im1HLsUWSDRKKJ23ofQU99TSLp1JnIREZiXUQ03URU1WO13ToWTU1TTGHu3TxpRMfyvVU03VVW2/SGHV4ksltfz/1CN0tjJ9u9zc1SH01WCdtmI91shEvGbN1mid1rtT1mwdtm791lgT13KttXRd11qz1ngt0nq91/py137NFr2E04ddt6e00uUb2N7c14TNHs1UuZNN2Yw7AAftGz3d2GoN2bviTB+T1VKdTmqx2IC92ZYy2IQtyyeVRytt2qdNKamN1/vAArbrvNvswLoBu45sT3hE004N274TUUDRwJSxQ8pAv9jrMe/7vMybDBkgHQKhDBkgIrfNEA/MvE3V1BSh2cF9NVujD65gCkTkQ6CwBMW9FN7QF39hI+HgBOKTtrzBEMmADjLgFwgRGqMQEd8AIAIxDq7wHb0hxDZzICBQ/xvOaxuZwdwCQboD7d0iBDzYkAY55yOSQEQHoQLoXRTJoAuZWR57AD7wjbak3RDTAA9CoAgRgQ/TIBoHMQDb0N8B4A3NsAPBMwBfIRDHoA46QArGoA4joB5UNBZSQS9HxRsO/uDCTbwelwgBIA5p8Aow4I5d8wYTbgwlUArjkAmZZwKSMBHeIAc8oAdZkDF7U7qP3BDowAzNIAfSwQ3HPCaXIwT2gCYFwSZ4oATf0MbEPBB2sg57oA3r0AGkwEDyYwXekABzfASp0ABjEGgyADVd0dSvneQpAjzHAAh5sArYoAe04AF8sAyAoAlYEA5HUAsJwAerQgjIwAzWYxD0EP8HxeAE2Kw3Ij7XvqIQqzANMLAE3nA00eABoAANotEznIANMfPCciAMCQAIrmAOnVEnEqAL56ILEiAL4KADzWAPfrAL8FAFz/ABgWAo8CIvBLHajF3pnL0TEh7lmWcjxTADdeMJkVAK10AI0OAHtQcIkJEQLbDH8cAHZW7rYdvBsIQPLzMPQgAPkGAEKPPL4tIyAeAspwAt0lID0cADSvAyzWAgF7Az5EADuSAu6yAF1cAMnGA0SJMAszDuiULxsMREk87V6R7ba/0NUwAIU6AGPsIH0EADksBnZJAK3kADcpAI6GAJcXDh2cAFaOAGeDAIvFDr2KtOMP/L8UAEJuD/D+twBNdAA6QQDR2QzLHBDTRA8dHiATtQLbFRDsgCMqLzDoLgDdYODlOwCt4ADf5wNMaw8gkgBwFgDkGQJrCkDzGdO91N86i91sfQDHegB6RwPHugDEJioIJACuPgDGxACulQPROBDY4w6tCQBJrwPeGDvRcAxLQjINMiEN/AA4JgDvkwCfrxDQ0iBACCD9cR+3HwwrLPwKAjOgIx950wIPmgA1UADXufAIqgDdGsA4oC0LXz2+ie+Hbd1/QgBYlAFlK+CsjAA27gBnlwCsmADUyoAICQc8GDDVZnEC0gCi2QCOIwBQd+vC7lSovEQWLBR5KkAgCBb5+AAfsuCNw3/zDhhX0FEz48mFAFQ14EIS7Ep+LhqocPB/DTF0DkyAD6likTkFLlSpYtXb6EGVPmTJo1bd7EmVPnTp49fepcNoDkUH1FRRotuUrp0ZAliTYtWTQk1KFVrV7FmlXrVq5a9fVz2FHsWLJlzZ5FK5afUKsmUf6EG1fuXLp17d7FCzNoV759/f4FHFhwyX780h5GnPjsALBY3eaFHFnyZMqVI+8dnFnzZs6C9fErXHDAaNKlTZ9GnVr16tIs+u3L+tjybNq1bd/Gi7nzbt69d+sb4LrfcOLFjR9Hnlz58uEsDG+VjVv6dOrVpev2nV37du7d+0a3Hl78ePI9sXtHn179eujPJ8u/hx9f/nn29e3fXw9e/n7+/S3Txy9AAQfUTD//DkQwwZ/44YdABx+EsKsL3FOwQgsvnEmZfqiKsEMPCWQQQxFHHHEZkD5EMUX2gOvnLRJfhNG/ZYJSrEYbb8QxRx135LFHsz5qMUYhh4xvgBmPRDJJJZdkskknn4QySimnpLJKK6/Eckl+iOSySy+/BDNMMccks0wzz0QzTTXXZLNNN9+EM04556SzTjvvxDNPPffks08//wQ0UEEHJbRQQw9FNFFFF2W0UUcfhTRSSSeltFJLL8U0U0035bRTTz8FNVRRRyVVyIAAADs=\',
          ),
          array(
            \'fid\' => NULL,
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
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'ee1ca3e4-fd6c-40be-8efc-83e569f14330\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/5\',
        \'alias\' => \'app/wordpress\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359334859\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d9a92578-91ef-6cf4-3d5c-fc8f0e2d0cb3\',
      \'revision_timestamp\' => \'1359334859\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'<p><span style="line-height: 1.538em;">The New Amsterdam Ideas team is passionate about helping government and non-profit organizations to innovate affordably by helping them to effectively leverage open-source software. Its client engagements, ranging from New York City&#39;s Public Advocate, to the New York State Attorney General, to the Civic Commons non-profit organization, seek to further this goal.</span></p><div>&nbsp;</div>\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => " <p>The New Amsterdam Ideas team is passionate about helping government and non-profit organizations to innovate affordably by helping them to effectively leverage open-source software. Its client engagements, ranging from New York City\'s Public Advocate, to the New York State Attorney General, to the Civic Commons non-profit organization, seek to further this goal. </p>\\n ",
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
            \'tid\' => \'74\',
          ),
          array(
            \'tid\' => \'113\',
          ),
          array(
            \'tid\' => \'106\',
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
            \'width\' => \'200\',
            \'height\' => \'200\',
            \'uid\' => \'1\',
            \'filename\' => \'new_nuams_logo.png\',
            \'uri\' => \'public://content/organizations/logos/new_nuams_logo.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'4432\',
            \'status\' => \'1\',
            \'timestamp\' => \'1359318206\',
            \'type\' => \'image\',
            \'uuid\' => \'6d9d7eb9-dcca-8ca4-2d54-7331a7dd7326\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
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
            \'tid\' => \'180\',
          ),
          array(
            \'tid\' => \'145\',
          ),
          array(
            \'tid\' => \'184\',
          ),
          array(
            \'tid\' => \'183\',
          ),
          array(
            \'tid\' => \'174\',
          ),
        ),
      ),
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/6\',
        \'alias\' => \'org/new-amsterdam-ideas\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'0\',
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
      \'created\' => \'1359318206\',
      \'changed\' => \'1359318206\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e1224f5d-f371-a814-b55a-0e77f1f7aabb\',
      \'revision_timestamp\' => \'1359318206\',
      \'revision_uid\' => \'0\',
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
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/7\',
        \'alias\' => \'org/drupal-association\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'0\',
      \'title\' => \'Deployment of Drupal\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e5cbbf7b-bbea-8814-adf1-7575e7e1c5a3\',
      \'nid\' => \'8\',
      \'type\' => \'deployment\',
      \'language\' => \'und\',
      \'created\' => \'1359318206\',
      \'changed\' => \'1359441384\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'f6c42cc3-7967-cef4-a95e-98b07a690db9\',
      \'revision_timestamp\' => \'1359441384\',
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
      \'field_coordinates\' => array(
        \'und\' => array(
          array(
            \'wkt\' => \'POINT (-73.7591612 42.6528936)\',
            \'geo_type\' => \'point\',
            \'lat\' => \'42.6529\',
            \'lon\' => \'-73.7592\',
            \'left\' => \'-73.7592\',
            \'top\' => \'42.6529\',
            \'right\' => \'-73.7592\',
            \'bottom\' => \'42.6529\',
            \'srid\' => NULL,
            \'accuracy\' => NULL,
            \'source\' => NULL,
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
            \'postal_code\' => \'12247\',
            \'thoroughfare\' => \'188 State Street\',
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
        \'field_coordinates\' => array(
          \'predicates\' => array(),
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1359318206\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/8\',
        \'alias\' => \'deploy/deployment-drupal\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
