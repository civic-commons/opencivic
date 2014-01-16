<?php
/**
 * @file
 * opencivic_organization.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function opencivic_organization_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'National',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '015ef97b-ae73-ec04-5536-cd54a0e3302b',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'National',
          'format' => NULL,
          'safe_value' => 'National',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Person',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => '413eeea4-79c9-a6f4-2543-51e86146dcba',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Person',
          'format' => NULL,
          'safe_value' => 'Person',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Government',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '4c079e6a-9a63-e3c4-1d82-58faf61c70c2',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Government',
          'format' => NULL,
          'safe_value' => 'Government',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Regional',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '59cf3fec-0a4b-5de4-e581-e0b80fe62b54',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Regional',
          'format' => NULL,
          'safe_value' => 'Regional',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nonprofit/Foundation/NGO',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '5bdb8fa8-4f14-acb4-d9e3-363648a7ba83',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Nonprofit/Foundation/NGO',
          'format' => NULL,
          'safe_value' => 'Nonprofit/Foundation/NGO',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'State',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '60ee3e65-7fc0-7524-cd44-e2d579c637c8',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'State',
          'format' => NULL,
          'safe_value' => 'State',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'County',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '814f8fa1-bc57-8cd4-a585-590e50c675b6',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'County',
          'format' => NULL,
          'safe_value' => 'County',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Company',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'b14b498d-7185-a9e4-d5e0-eb88d3a0b76d',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Company',
          'format' => NULL,
          'safe_value' => 'Company',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Multinational',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b5a55738-3c40-aef4-0931-ed78e9fbabc0',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Multinational',
          'format' => NULL,
          'safe_value' => 'Multinational',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Municipal',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'c4f32642-b538-6134-55b9-71c15944cec3',
    'vocabulary_machine_name' => 'organization_type',
    'description_field' => array(
      'und' => array(
        0 => array(
          'value' => '',
          'summary' => NULL,
          'format' => 'filtered_html',
          'safe_value' => '',
          'safe_summary' => '',
        ),
      ),
    ),
    'name_field' => array(
      'und' => array(
        0 => array(
          'value' => 'Municipal',
          'format' => NULL,
          'safe_value' => 'Municipal',
        ),
      ),
    ),
  );
  return $terms;
}
