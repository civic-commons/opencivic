<?php

/**
 * @file
 * Provides the node source plugin controller.
 */

class TMGMTNodeSourcePluginController extends TMGMTDefaultSourcePluginController {

  /**
   * {@inheritdoc}
   *
   * Returns the data from the fields as a structure that can be processed by
   * the Translation Management system.
   */
  public function getData(TMGMTJobItem $job_item) {
    $node = node_load($job_item->item_id);
    $type = node_type_get_type($node);
    // Get all the fields that can be translated and arrange their values into
    // a specific structure.
    $structure = tmgmt_field_get_source_data('node', $node, $job_item->getJob()->source_language);
    $structure['node_title']['#label'] = $type->title_label;
    $structure['node_title']['#text'] = $node->title;
    return $structure;
  }

  /**
   * {@inheritdoc}
   */
  public function saveTranslation(TMGMTJobItem $job_item) {
    if ($node = node_load($job_item->item_id)) {
      $job = $job_item->getJob();
      if (empty($node->tnid)) {
        // We have no translation source nid, this is a new set, so create it.
        $node->tnid = $node->nid;
        node_save($node);
      }
      $translations = translation_node_get_translations($node->tnid);
      if (isset($translations[$job->target_language])) {
        // We have already a translation for the source node for the target
        // language, so load it.
        $tnode = node_load($translations[$job->target_language]->nid);
      }
      else {
        // We don't have a translation for the source node yet, so create one.
        $tnode = clone $node;
        unset($tnode->nid, $tnode->vid, $tnode->uuid, $tnode->vuuid);
        $tnode->language = $job->target_language;
        $tnode->translation_source = $node;
      }

      // Time to put the translated data into the node.
      $data = $job_item->getData();
      // Special case for the node title.
      if (isset($data['node_title']['#translation']['#text'])) {
        $tnode->title = $data['node_title']['#translation']['#text'];
        unset($data['node_title']);
      }
      tmgmt_field_populate_entity('node', $tnode, $job->target_language, $data, FALSE);
      // Reset translation field, which determines outdated status.
      $tnode->translation['status'] = 0;
      node_save($tnode);

      // We just saved the translation, set the sate of the job item to
      // 'finished'.
      $job_item->accepted();
    }
  }

  /**
   * {@inheritdoc}
   */
  public function getLabel(TMGMTJobItem $job_item) {
    if ($node = node_load($job_item->item_id)) {
      return entity_label('node', $node);
    }
    return parent::getLabel($job_item);
  }

  /**
   * {@inheritdoc}
   */
  public function getUri(TMGMTJobItem $job_item) {
    if ($node = node_load($job_item->item_id)) {
      return entity_uri('node', $node);
    }
    return parent::getUri($job_item);
  }

  /**
   * {@inheritdoc}
   */
  public function getType(TMGMTJobItem $job_item) {
    if ($node = node_load($job_item->item_id)) {
      return node_type_get_name($node);
    }
    return parent::getType($job_item);
  }


}
