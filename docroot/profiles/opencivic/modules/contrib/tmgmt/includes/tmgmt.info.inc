<?php

/**
 * @file
 * Contains the metadata controller classes for the Translation Management Tool
 * entities.
 */

/**
 * Metadata controller for the job entity.
 */
class TMGMTJobMetadataController extends EntityDefaultMetadataController {

  /**
   * {@inheritdoc}
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $info = _tmgmt_override_property_description($info, $this->type);
    $properties = &$info[$this->type]['properties'];

    // Make the created and changed property appear as date.
    $properties['changed']['type'] = $properties['created']['type'] = 'date';

    // Use the defined entity label callback instead of the custom label directly.
    $properties['label']['getter callback'] = 'entity_class_label';

    // Allow to change the properties.
    foreach (array('target_language', 'source_language', 'translator') as $property) {
      $properties[$property]['setter callback'] = 'entity_property_verbatim_set';
    }

    // Add the options list for the available languages.
    $properties['target_language']['options list'] = $properties['source_language']['options list'] = 'entity_metadata_language_list';

    // Add the options list for the defined state constants.
    $properties['state']['options list'] = 'tmgmt_job_states';

    // Add the options list for all available translator plugins.
    $properties['translator']['type'] = 'tmgmt_translator';
    $properties['translator']['options list'] = 'tmgmt_translator_labels';

    // Link the author property to the corresponding user entity.
    $properties['author'] = array(
      'label' => t('Author'),
      'type' => 'user',
      'description' => t('The author of the translation job.'),
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer tmgmt',
      'required' => TRUE,
      'schema field' => 'uid',
    );

    return $info;
  }

}

/**
 * Metadata controller for the job item entity.
 */
class TMGMTJobItemMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $info = _tmgmt_override_property_description($info, $this->type);
    $properties = &$info[$this->type]['properties'];

    // Make the created and changed property appear as date.
    $properties['changed']['type'] = 'date';

    // Add the options list for the defined state constants.
    $properties['state']['options list'] = 'tmgmt_job_item_states';

    // Link the job id property to the corresponding job entity.
    $properties['tjid'] = array(
      'description' => t('Corresponding job entity.'),
      'type' => 'tmgmt_job',
    ) + $properties['tjid'];

    // Add the options list for all available source plugins.
    $properties['plugin']['options list'] = 'tmgmt_source_plugin_labels';

    $properties['word_count']['label'] = t('Word count');

    return $info;
  }

}

/**
 * Metadata controller for the job message entity.
 */
class TMGMTMessageMetadataController extends EntityDefaultMetadataController {

  /**
   * {@inheritdoc}
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $info = _tmgmt_override_property_description($info, $this->type);
    $properties = &$info[$this->type]['properties'];

    // Make the created property appear as date.
    $properties['created']['type'] = 'date';

    // Link the job id property to the corresponding job entity.
    $properties['tjid'] = array(
      'description' => t('Corresponding job entity.'),
      'type' => 'tmgmt_job',
    ) + $properties['tjid'];

    // Link the job item id property to the corresponding job item entity.
    $properties['tjiid'] = array(
      'description' => t('Corresponding job item entity.'),
      'type' => 'tmgmt_job_item',
    ) + $properties['tjiid'];

    // Link user, was added in an update so make sure that it doesn't explode
    // if the schema cache was not cleared.
    $properties['uid'] = array(
      'type' => 'user',
      'description' => t('User associated with TMGMT Job Message entity.'),
    ) + (isset($properties['uid']) ? $properties['uid'] : array());

    return $info;
  }

}

/**
 * Metadata controller for the translator entity.
 */
class TMGMTTranslatorMetadataController extends EntityDefaultMetadataController {

  /**
   * {@inheritdoc}
   */
  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $info = _tmgmt_override_property_description($info, $this->type);
    $properties = &$info[$this->type]['properties'];

    // Options list callback for the translator plugin labels.
    $properties['plugin']['options list'] = 'tmgmt_translator_plugin_labels';

    return $info;
  }

}

/**
 * Populates all entity property descriptions based on the schema definition.
 *
 * @param $info
 *  Entity propety info array.
 *
 * @return
 *   The altered entity properties array.
 */
function _tmgmt_override_property_description($info, $entity_type) {
  // Load tmgmt.install so we can access the schema.
  module_load_install('tmgmt');
  $entity_info = entity_get_info($entity_type);
  $schema = tmgmt_schema();
  $fields = $schema[$entity_info['base table']]['fields'];
  $properties = &$info[$entity_type]['properties'];
  foreach ($properties as $name => $property_info) {
    if (isset($fields[$name]['description'])) {
      $properties[$name]['description'] = $fields[$name]['description'];
    }
  }
  return $info;
}
