<?php

/**
 * @file
 * Provides the Entity source controller.
 */

class TMGMTEntitySourcePluginController extends TMGMTDefaultSourcePluginController {

  public function getLabel(TMGMTJobItem $job_item) {
    if ($entity = entity_load_single($job_item->item_type, $job_item->item_id)) {
      return entity_label($job_item->item_type, $entity);
    }
  }

  public function getUri(TMGMTJobItem $job_item) {
    if ($entity = entity_load_single($job_item->item_type, $job_item->item_id)) {
      return entity_uri($job_item->item_type, $entity);
    }
  }

  /**
   * {@inheritdoc}
   *
   * Returns the data from the fields as a structure that can be processed by
   * the Translation Management system.
   */
  public function getData(TMGMTJobItem $job_item) {
    $entity = entity_load_single($job_item->item_type, $job_item->item_id);
    if (!$entity) {
      throw new TMGMTException(t('Unable to load entity %type with id %id', array('%type' => $job_item->item_type, $job_item->item_id)));
    }
    return tmgmt_field_get_source_data($job_item->item_type, $entity, $job_item->getJob()->source_language, TRUE);
  }

  /**
   * {@inheritdoc}
   */
  public function saveTranslation(TMGMTJobItem $job_item) {
    $entity = entity_load_single($job_item->item_type, $job_item->item_id);
    $job = tmgmt_job_load($job_item->tjid);

    tmgmt_field_populate_entity($job_item->item_type, $entity, $job->target_language, $job_item->getData());

    // Change the active language of the entity to the target language.
    $handler = entity_translation_get_handler($job_item->item_type, $entity);
    $handler->setFormLanguage($job_item->getJob()->target_language);

    entity_save($job_item->item_type, $entity);

    $translation = array(
      // @todo Improve hardcoded values.
      'translate' => 0,
      'status' => TRUE,
      'language' => $job_item->getJob()->target_language,
      'source' => $job_item->getJob()->source_language,
    );
    $handler->setTranslation($translation);
    $handler->saveTranslations();
    $job_item->accepted();
  }

  /**
   * {@inheritdoc}
   */
  public function getType(TMGMTJobItem $job_item) {
    if ($entity = entity_load_single($job_item->item_type, $job_item->item_id)) {
      $bundles = tmgmt_entity_get_translatable_bundles($job_item->item_type);
      $info = entity_get_info($job_item->item_type);
      list(, , $bundle) = entity_extract_ids($job_item->item_type, $entity);
      // Display entity type and label if we have one and the bundle isn't
      // the same as the entity type.
      if (isset($bundles[$bundle]) && $bundle != $job_item->item_type) {
        return t('@type (@bundle)', array('@type' => $info['label'], '@bundle' => $bundles[$bundle]));
      }
      // Otherwise just display the entity type label.
      elseif (isset($info['label'])) {
        return $info['label'];
      }
      return parent::getType($job_item);
    }
  }


}
