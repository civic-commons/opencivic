<?php
/**
 * @file
 * appcat_misc_taxonomy_civic_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_misc_taxonomy_civic_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Veterans Services',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '0715623f-6bf6-455e-b533-42566a64bad2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Rural',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '07291011-2624-4734-9546-ec4ae60a83bf',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Revenue & Taxes',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '084a2c85-8c70-4e01-afd3-074ec875b726',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'IT Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => '17a620ad-e194-4ac7-a616-71d5da459e01',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Agriculture',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '2958bd10-f3c7-4177-b63e-4a3d45bcb712',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Libraries',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '2d70e480-4dd7-4468-9397-b4905e75c1d2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Education',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '4',
    'uuid' => '45d91cf3-3e47-4034-b5f3-06a42fa0c977',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'education.png',
          'uri' => 'public://civic_category/icons/education.png',
          'filemime' => 'image/png',
          'filesize' => '2105',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'de3b7bec-789e-4d10-884f-2a9788f85ea0',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/education.png',
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
          'filename' => 'education-sm.png',
          'uri' => 'public://civic_category/icons/education-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1861',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'fe3d3078-e1ad-4707-be52-5208e9f30052',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/education-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ranking',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '47f66aff-8b82-4e22-a5fe-530b0c0f6aec',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Public Works & Utilities',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '52f59c2d-5d46-4dba-8934-abafa0fa6704',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Dashboards',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '5fa1cc97-e0a4-4fdb-a61a-29f9680980a3',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Public Safety & Emergency Management',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => '629a86a4-4db8-411b-8152-fa27317527e6',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Food and Nutrition',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => '768b8601-c9e7-4388-bb28-bf3e5feaba6c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Finance',
    'description' => NULL,
    'format' => NULL,
    'weight' => '6',
    'uuid' => '7fdd13e3-eaeb-4de1-8b2d-31f7e1e83f97',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Engagement',
    'description' => NULL,
    'format' => NULL,
    'weight' => '5',
    'uuid' => '806f8bd2-3335-460b-b779-4bd7040d8008',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Recommendation Systems',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => '80bec73b-f9b7-4c33-8875-162c354e7d7c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Transparency',
    'description' => NULL,
    'format' => NULL,
    'weight' => '11',
    'uuid' => '84d5d2da-d039-4146-a10c-1623e9d8779d',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Participatory Budgeting',
    'description' => NULL,
    'format' => NULL,
    'weight' => '10',
    'uuid' => '86ce5ebc-1080-4aa3-ad70-b2cbe503ae18',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Resource Sharing',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => '87c9606a-9700-44d6-a92e-f84809e5d160',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Water',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '32',
    'uuid' => '8f6dc846-f4d5-b4e4-79a1-6053a34afaac',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'water.png',
          'uri' => 'public://civic_category/icons/water.png',
          'filemime' => 'image/png',
          'filesize' => '2256',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'b5fa1376-300e-411c-8f5f-27ccc8f5c5ff',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/water.png',
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
          'filename' => 'water-sm.png',
          'uri' => 'public://civic_category/icons/water-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1861',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ce9e45e8-dcad-46cf-b97a-17ca6030eaa0',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/water-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Housing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '26',
    'uuid' => '9333a979-dcb9-ed04-dd48-145b04fc9e93',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'housing.png',
          'uri' => 'public://civic_category/icons/housing.png',
          'filemime' => 'image/png',
          'filesize' => '2046',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '77b67faf-f766-46c9-a00b-8b2550e869a9',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/housing.png',
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
          'filename' => 'housing-sm.png',
          'uri' => 'public://civic_category/icons/housing-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1851',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '41ce4c85-e1ab-4e99-97fb-e8643396af2f',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/housing-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Survey',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => '9e08790d-23f9-49c4-bad4-b6602852f3b0',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Gender',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'bd5eeaf2-ba66-4761-bcab-be4beb9a17b2',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Human Services',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '29',
    'uuid' => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'human-services.png',
          'uri' => 'public://civic_category/icons/human-services.png',
          'filemime' => 'image/png',
          'filesize' => '2600',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '5ca299f2-6b02-4563-859e-8efbd6163c80',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/human-services.png',
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
          'filename' => 'human-services-sm.png',
          'uri' => 'public://civic_category/icons/human-services-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1966',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'cd1b6258-ac09-4ef6-82b2-1959fd1c9734',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/human-services-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Urban',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'c21f466c-4fc7-4f16-98e6-9518df408c96',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Recycling',
    'description' => NULL,
    'format' => NULL,
    'weight' => '2',
    'uuid' => 'c24c7d4f-412c-4bad-9e89-d5a44251ce4f',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Petitions',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'c489eb70-7922-4ab6-8ca8-b7ab18e57551',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Law & Justice',
    'description' => NULL,
    'format' => NULL,
    'weight' => '9',
    'uuid' => 'c4a3d329-5345-417f-af49-2ba1afc44caf',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Health',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '22',
    'uuid' => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'health.png',
          'uri' => 'public://civic_category/icons/health.png',
          'filemime' => 'image/png',
          'filesize' => '2477',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '36334cee-2419-4159-b911-ccee4286ec06',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/health.png',
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
          'filename' => 'health-sm.png',
          'uri' => 'public://civic_category/icons/health-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1927',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'a307b976-99aa-4bd7-94be-0f0919435a70',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/health-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Misc.',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '35',
    'uuid' => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
  );
  $terms[] = array(
    'name' => 'Sanitation',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => 'da500a6e-be13-44f6-9edf-c1e15d756e00',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Activism',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'dc22ec79-2c91-4cae-ad8b-d2ffa507e9ae',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Ratings',
    'description' => NULL,
    'format' => NULL,
    'weight' => '3',
    'uuid' => 'e1018135-c95e-45d8-b3cd-502b0360b2c4',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Environment',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '8',
    'uuid' => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'environment.png',
          'uri' => 'public://civic_category/icons/environment.png',
          'filemime' => 'image/png',
          'filesize' => '2473',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'af396f8d-2f48-4b86-a874-082908765e91',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/environment.png',
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
          'filename' => 'environment-sm.png',
          'uri' => 'public://civic_category/icons/environment-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1904',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => 'ed973a6e-71ef-47a6-9890-53d5d6ab3e30',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/environment-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Direct Democracy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '4',
    'uuid' => 'e3e4a8bb-1bf1-43ec-b242-57c1c745462c',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Information and communication technologies',
    'description' => NULL,
    'format' => NULL,
    'weight' => '7',
    'uuid' => 'ea53a1d6-3f24-4f3c-ac88-2ce8007c655d',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Transport',
    'description' => NULL,
    'format' => NULL,
    'weight' => '8',
    'uuid' => 'eb761a44-8155-4079-863a-d3531d14f698',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'cb03a3d7-abdd-481c-86c3-8c672ece2f1c',
    ),
  );
  $terms[] = array(
    'name' => 'Clinics',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ebda5ed6-9ebd-4078-bb81-070d57f28850',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c974fd94-0ab0-1424-0d23-9ef2fc6484f9',
    ),
  );
  $terms[] = array(
    'name' => 'Administration',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'ee205d1c-7359-48fd-80db-135326a7ffb6',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    ),
  );
  $terms[] = array(
    'name' => 'Citizen Services & 311',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'f136715c-d1f4-4132-b283-9933f90f4c6b',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'c214b9dd-1ad2-be94-c9bd-142ccf84e8b5',
    ),
  );
  $terms[] = array(
    'name' => 'Governance',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '16',
    'uuid' => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(
      'und' => array(
        0 => array(
          'fid' => NULL,
          'alt' => '',
          'title' => '',
          'width' => '100',
          'height' => '100',
          'uid' => '1',
          'filename' => 'governance.png',
          'uri' => 'public://civic_category/icons/governance.png',
          'filemime' => 'image/png',
          'filesize' => '1995',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '4d8774f3-dd8a-490a-a414-a8391cbe1d4e',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/governance.png',
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
          'filename' => 'governance-sm.png',
          'uri' => 'public://civic_category/icons/governance-sm.png',
          'filemime' => 'image/png',
          'filesize' => '1830',
          'status' => '1',
          'timestamp' => NULL,
          'type' => 'image',
          'uuid' => '36020109-9ca4-4016-bfaf-9e79c350e36f',
          'rdf_mapping' => array(),
          'uuid_features_file_path' => 'profiles/apps_catalog/uuid_features_assets/governance-sm.png',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Energy',
    'description' => NULL,
    'format' => NULL,
    'weight' => '1',
    'uuid' => 'f7214665-fd68-40fe-9767-b320a20cef30',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'e1c64e63-1f7a-7bd4-b56f-928e66b711a8',
    ),
  );
  $terms[] = array(
    'name' => 'Anti-corruption',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => 'f8123076-74e9-4704-9f01-50a7e12cf348',
    'vocabulary_machine_name' => 'civic_category',
    'field_icon' => array(),
    'field_small_icon' => array(),
    'parent' => array(
      0 => 'f6e42a9f-f4a0-c054-cdd4-c1ca7990ebfb',
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
