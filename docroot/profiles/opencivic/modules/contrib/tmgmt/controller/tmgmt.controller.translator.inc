<?php

/**
 * @file
 * Contains the translator controller class.
 */

/**
 * Controller class for the job entity.
 *
 * @ingroup tmgmt_translator
 */
class TMGMTTranslatorController extends EntityAPIControllerExportable {

  /**
   * {@inheritdoc}
   */
  protected function buildQuery($ids, $conditions = array(), $revision_id = FALSE) {
    $query = parent::buildQuery($ids, $conditions, $revision_id);
    if ($plugins = tmgmt_translator_plugin_info()) {
      $query->condition('plugin', array_keys($plugins));
    }
    else {
      // Don't return any translators if no plugin exists.
      $query->where('1 = 0');
    }
    // Sort by the weight of the translator.
    $query->orderBy('weight');
    return $query;
  }

  /**
   * {@inheritdoc}
   */
  public function delete($ids, DatabaseTransaction $transaction = NULL) {
    $cids = array();
    // We are never going to have many entities here, so we can risk a loop.
    foreach ($ids as $key => $name) {
      if (tmgmt_translator_busy($key)) {
        // The translator can't be deleted because it is currently busy. Remove
        // it from the ids so it wont get deleted in the parent implementation.
        unset($ids[$key]);
      }
      else {
        $cids[$key] = 'language:' . $key;
      }
    }
    // Clear the language cache for the deleted translators.
    cache_clear_all($cids, 'cache_tmgmt');
    parent::delete($ids, $transaction);
  }

  /**
  * {@inheritdoc}
  */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    $return = parent::save($entity, $transaction);
    // Clear the languages cache.
    cache_clear_all('language:' . $entity->name, 'cache_tmgmt');
    return $return;
  }
}
