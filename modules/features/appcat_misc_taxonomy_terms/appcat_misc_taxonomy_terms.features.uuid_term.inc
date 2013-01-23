<?php
/**
 * @file
 * appcat_misc_taxonomy_terms.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function appcat_misc_taxonomy_terms_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'National',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '1',
    'uuid' => '015ef97b-ae73-ec04-5536-cd54a0e3302b',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'Apache',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '05b1c7a4-0023-3594-b95b-0c9d7c4468c1',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'Proprietary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '083e978f-3195-af64-b564-89b95abeaf2d',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'Microsoft SQL Server',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '0b795a21-3080-e124-099a-2ddd3d0bd0d1',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'ArcGIS for Server',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '0d1acccf-dd8d-d454-f516-1cb7cc80fcc2',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Software development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '1abe8b55-02a9-5864-6935-5fc4544b3bd0',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'GoogleMaps',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '1fdd6053-1c96-23d4-b1d0-0da6a8ead2ee',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Linux',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '26642fe1-5a91-d2f4-dd5d-d99e3e0248ab',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'iPhone',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '289f2033-272a-8e24-d1ac-167e0e1db120',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'REST',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '2b9aafe8-52ff-2404-2964-60466a27d3c8',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'GeoServer',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '3507ed07-6f16-9024-8957-24397d654009',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'jQuery',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '35189430-ffb6-7644-41b8-41cf32ab5639',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'OpenLayers',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '38ea2767-2227-92c4-d19c-3c70bd984f3b',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Android',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '395f8927-4312-5d44-fd53-912fe944ca4e',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'MS Office',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '3e13c3fc-df7a-42b4-319e-e4bdc97c632d',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Person',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '8',
    'uuid' => '413eeea4-79c9-a6f4-2543-51e86146dcba',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'NOSA',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '490ec9d9-995d-9124-3d6c-9c448d923c62',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'Government',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '9',
    'uuid' => '4c079e6a-9a63-e3c4-1d82-58faf61c70c2',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'Django',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '4d2e47a6-0d0b-06a4-7520-fe07325c7779',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Binary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '4dec34a2-080c-1a04-6981-bbcf58708af1',
    'vocabulary_machine_name' => 'software_type',
  );
  $terms[] = array(
    'name' => 'iOS',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '5206408c-3558-1424-9db1-7493d0731d6d',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Apache',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '52a8c3a5-443b-3a84-f970-9c936222b636',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'PHP',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '5330ac54-d7c9-8944-69cc-4b08757afe7e',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'ColdFusion',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '59056455-ec7d-a074-6517-09f3738aacff',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Regional',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => '59cf3fec-0a4b-5de4-e581-e0b80fe62b54',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'Nonprofit/Foundation/NGO',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '7',
    'uuid' => '5bdb8fa8-4f14-acb4-d9e3-363648a7ba83',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'State',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '3',
    'uuid' => '60ee3e65-7fc0-7524-cd44-e2d579c637c8',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'Javascript',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '6124e48d-1259-3834-999a-256e1d3c9240',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'GPL',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '75ad63b9-cc0b-06a4-41a6-83de605c3c20',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'SaaS / Hosted',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7a086454-1af3-ae24-c9b4-3d36b0aab41f',
    'vocabulary_machine_name' => 'software_type',
  );
  $terms[] = array(
    'name' => 'OSX',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '7bb84698-9358-d4c4-3d89-d787c2ce2ed8',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Zend Framework',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '80e4c446-bfb4-5e84-959f-fe00e7329626',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'County',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '4',
    'uuid' => '814f8fa1-bc57-8cd4-a585-590e50c675b6',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => '.NET framework',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '82141464-508c-d104-a9df-612b8d2cb6b8',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Visual/UI design',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '86a0de58-8613-4a54-d597-bf9e6f6f54b3',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'Firefox',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '89687c98-da19-64a4-39de-29775831116d',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Technical development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '8b4b13e0-de22-b604-0583-fdaa5e00c6c2',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'Flash',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '913fe16f-a0ba-11c4-49d1-c70c4aecd431',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Open source',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '92d46be9-09bd-65f4-b1a4-310551bf066e',
    'vocabulary_machine_name' => 'software_type',
  );
  $terms[] = array(
    'name' => 'Java',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '9c06e931-8c3e-bc14-f96f-71ebbf1e1fd7',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Installation',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9de5aac9-621a-88f4-e15d-b586cc1591ca',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'Python',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => '9e6ba165-0f85-5a84-8503-4413276d5f48',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Joomla',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'a272193e-e372-cc74-ed5f-8da814556124',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Training',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'aafdb1b0-b017-6154-3dfa-fb4c9de0ffce',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'Technical support',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'ab022797-7c91-7cc4-c551-ef927b9bb285',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'PostGIS',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'af812e8a-7b51-7494-89af-acf95a7e4a4c',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Company',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '6',
    'uuid' => 'b14b498d-7185-a9e4-d5e0-eb88d3a0b76d',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'MySQL',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'b4bdca4d-bbdd-eb34-8127-aecd910e789d',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Multinational',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b5a55738-3c40-aef4-0931-ed78e9fbabc0',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'Windows',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'c26f963a-13cb-55f4-65fe-86b02e63ba1a',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'PostgreSQL',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'c425e455-708c-4084-456f-308ece4f3ee9',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Municipal',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '5',
    'uuid' => 'c4f32642-b538-6134-55b9-71c15944cec3',
    'vocabulary_machine_name' => 'organization_type',
  );
  $terms[] = array(
    'name' => 'CakePHP',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'd111e098-2636-31b4-fd71-45b04fe15919',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'IE7',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'd2e206bb-97b0-a174-31c4-5375d4991945',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'SOAP',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'd33a9c18-52b2-1164-8128-6a82d39615e7',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'MIT',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'd42d1608-3038-37b4-d5f5-184f8efe5cf4',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'Drupal',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'd57a99f3-5e83-7b84-358f-1ab68e5baf75',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Safari',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'd9d37603-6f1c-7ec4-cd3e-b24e4659a8d6',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Chrome',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'dd0130c8-741a-35d4-ad9c-da3ad8ef300b',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'MS Access',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ded05be0-b5fa-1674-f19c-df1317e900df',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'MongoDB',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'e3efb117-8f82-4d84-9936-7d4081c6cbf4',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Business development',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'e63f62d7-df6c-41a4-750f-8e49924ae627',
    'vocabulary_machine_name' => 'service',
  );
  $terms[] = array(
    'name' => 'git',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ebb8a19b-fcc7-3664-e52b-e773e46499da',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'Ruby on Rails',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'eeedeb89-5fde-7934-2944-845cfba543a4',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'OpenStreetMap',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'ef8c87d9-e757-8694-151e-5789e4443a10',
    'vocabulary_machine_name' => 'requirements',
  );
  $terms[] = array(
    'name' => 'BSD',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f472ad8c-5935-be24-d187-2e99497fafee',
    'vocabulary_machine_name' => 'license',
  );
  $terms[] = array(
    'name' => 'LAMP',
    'description' => NULL,
    'format' => NULL,
    'weight' => '0',
    'uuid' => 'fddd2ec4-4301-0194-2163-de0eb70e9275',
    'vocabulary_machine_name' => 'requirements',
  );
  return $terms;
}
