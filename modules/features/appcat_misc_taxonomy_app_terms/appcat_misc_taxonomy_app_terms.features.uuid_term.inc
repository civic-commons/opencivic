<?php
/**
 * @file
 * appcat_misc_taxonomy_app_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_misc_taxonomy_app_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Accounting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '014d59f5-fd03-41ce-a060-3c5adab5127f',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Case Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => '0687fef8-e7c9-441d-9b70-4d8714af0845',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Scheduling',
    'description' => NULL,
    'format' => NULL,
    'weight' => '12',
    'uuid' => '1019dcf3-1147-4891-a15d-2fb655c61aa3',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Administration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '1cd3b0bf-290c-4eff-a286-f84c2cf295e5',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Data aggregation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '5',
    'uuid' => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'data-aggregation.png',
          'uri' => 'public://application_category/icons/data-aggregation.png',
          'filemime' => 'image/png',
          'filesize' => '5540',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'c4689b2a-efae-4580-bfd6-34beaab1a31d',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/data-aggregation.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'data-aggregation-sm.png',
          'uri' => 'public://data-aggregation-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1813',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '79e8ba14-0227-4c54-a266-b8364a8f07aa',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/data-aggregation-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Games',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '10',
    'uuid' => '3ef61d92-9025-59e4-71e8-14a426324365',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'games.png',
          'uri' => 'public://application_category/icons/games.png',
          'filemime' => 'image/png',
          'filesize' => '5059',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'aaff5ad9-cc27-4734-93a2-7c09bad688b3',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/games.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'games-sm.png',
          'uri' => 'public://games-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1919',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'e0eb4c37-48be-4619-a5f3-c5df42e7b997',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/games-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Budget',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '4d2252dd-974c-4978-b25e-7f62fe06cbb0',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Statistics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '611a35a8-1dfc-4a18-9013-a182263e2184',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Security and Confidentiality',
    'description' => NULL,
    'format' => NULL,
    'weight' => '13',
    'uuid' => '668cbb72-d539-4248-96fe-a3cccb0854ea',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Data Integration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '6c288527-43c7-4599-adc5-845c8c95271a',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Research',
    'description' => NULL,
    'format' => NULL,
    'weight' => '10',
    'uuid' => '74da3a8d-4c00-4b78-8263-97a084269a81',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Crowdsourcing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '3',
    'uuid' => '774a8201-1536-b444-4118-09363f0cd12d',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'crowdsourcing.png',
          'uri' => 'public://application_category/icons/crowdsourcing.png',
          'filemime' => 'image/png',
          'filesize' => '4740',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ada83812-d630-ceb4-05f9-7013844277b1',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/crowdsourcing.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'crowdsourcing-sm.png',
          'uri' => 'public://crowdsourcing-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1981',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '697a7988-1b6e-4364-6110-676fcab44acf',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/crowdsourcing-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Consumer Protection',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '8bf07193-8652-4036-874b-5764c127d2bc',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Mobile',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '15',
    'uuid' => '91dc0575-1800-4f14-419a-69f1cca0a5ee',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'mobile.png',
          'uri' => 'public://application_category/icons/mobile.png',
          'filemime' => 'image/png',
          'filesize' => '4429',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '383450fa-902d-4443-862e-863ba068a603',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/mobile.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'mobile-sm.png',
          'uri' => 'public://mobile-sm.png',
          'filemime' => 'image/png',
          'filesize' => '2120',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '4337d4ab-f38c-4d7b-9014-7c1410719f97',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/mobile-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Content & Document Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '9c2d19bf-c61b-4e5f-b502-4ddccccee5d1',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Location',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'a2388b71-8135-4548-82ec-d41a8faf78d7',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'b49b12cc-efea-7614-91e5-632a860a549c',
    ),
  );
  $terms[] = array(
    'name' => 'Contact Relationship Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a2a7599e-c655-4e6e-b858-5a841fa6a0a4',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'fe72752c-86a7-4024-8e2f-45cc75d14502',
    ),
  );
  $terms[] = array(
    'name' => 'Database',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'a32aba42-1edc-40ef-9a46-154bd314b9e8',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Geography',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a5958a56-f7d0-4926-a770-a23d152b4d24',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'b49b12cc-efea-7614-91e5-632a860a549c',
    ),
  );
  $terms[] = array(
    'name' => 'Accessibility',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ace4c6be-0481-463f-b0b2-c00aad1933bb',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Mapping',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '14',
    'uuid' => 'b49b12cc-efea-7614-91e5-632a860a549c',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'mapping.png',
          'uri' => 'public://application_category/icons/mapping.png',
          'filemime' => 'image/png',
          'filesize' => '4745',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ab4f8694-5de8-4f4e-8a26-84b08b23550e',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/mapping.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'mapping-sm.png',
          'uri' => 'public://mapping-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1909',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'c5ce0fdf-96b9-4136-a2be-6adea08c9699',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/mapping-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Data Conversion',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'bf9f2806-c657-4d22-8290-ffaf28a2f915',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => '34cf95ee-3329-ef34-113f-10f7c556ddcb',
    ),
  );
  $terms[] = array(
    'name' => 'Content Management System',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => 'cc058868-4787-43f9-b65f-40942c007a08',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Human Resource Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => 'e32b83e9-4f9f-4de6-936a-bafaefa7e455',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Reporting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'ef4568b7-28cf-4175-bad9-38a82e6733b8',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Misc',
    'description' => NULL,
    'format' => NULL,
    'weight' => '20',
    'uuid' => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
  );
  $terms[] = array(
    'name' => 'Risk Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '11',
    'uuid' => 'fa1e4759-3c1d-4b1e-b972-1bd6adec506c',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f7365ae9-b9c0-4978-87ad-89a04f2fdd17',
    ),
  );
  $terms[] = array(
    'name' => 'Social',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '18',
    'uuid' => 'fe72752c-86a7-4024-8e2f-45cc75d14502',
    'vocabulary_machine_name' => 'application_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'social.png',
          'uri' => 'public://application_category/icons/social.png',
          'filemime' => 'image/png',
          'filesize' => '901',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '2af85f8d-d62b-4950-82cc-a47721334579',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/social.png',
        ),
      ),
    ),
    'field_small_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '24',
          'height' => '24',
          'uid' => '1',
          'filename' => 'social-sm.png',
          'uri' => 'public://application_category/icons/social-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1880',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '54336f1f-80f0-4d23-97bb-4d0369792647',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/social-sm.png',
        ),
      ),
    ),
  );
  variable_set('uuid_features_file_types', array(
  'application_category' => 'application_category',
  'civic_category' => 'civic_category',
  'tags' => 0,
  'application_subcategory' => 0,
  'civic_subcategory' => 0,
  'license' => 0,
  'organization_type' => 0,
  'requirements' => 0,
  'service' => 0,
  'software_type' => 0,
));
  variable_set('uuid_features_file_mode', 'local');
  variable_set('uuid_features_file_assets_path', 'profiles/apps_catalog/uuid_features_assets');
  variable_set('uuid_features_file_supported_fields', 'file, image');
  return $terms;
}
