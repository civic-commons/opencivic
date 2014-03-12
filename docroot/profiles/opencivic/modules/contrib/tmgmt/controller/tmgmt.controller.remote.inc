<?php

/**
 * @file
 * Contains the remote controller class.
 */

/**
 * Controller class for the remote job mapping entity.
 *
 * @ingroup tmgmt_job
 */
class TMGMTRemoteController extends EntityAPIController {

  public function load($ids = array(), $conditions = array()) {
    $entities = parent::load($ids, $conditions);

    foreach ($entities as &$entity) {
      if (is_string($entity->remote_data)) {
        $entity->remote_data = unserialize($entity->remote_data);
      }
    }

    return $entities;
  }

  /**
   * Loads remote mappings based on local data.
   *
   * @param int $tjid
   *   Translation job id.
   * @param int $tjiid
   *   Translation job item id.
   * @param int $data_item_key
   *   Data item key.
   *
   * @return array
   *   Array of TMGMTRemote entities.
   */
  function loadByLocalData($tjid = NULL, $tjiid = NULL, $data_item_key = NULL) {
    $data_item_key = tmgmt_ensure_keys_string($data_item_key);

    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'tmgmt_remote');

    if (!empty($tjid)) {
      $query->propertyCondition('tjid', $tjid);
    }
    if (!empty($tjiid)) {
      $query->propertyCondition('tjiid', $tjiid);
    }
    if (!empty($data_item_key)) {
      $query->propertyCondition('data_item_key', $data_item_key);
    }

    $result = $query->execute();

    if (isset($result['tmgmt_remote'])) {
      return entity_load('tmgmt_remote', array_keys($result['tmgmt_remote']));
    }

    return array();
  }

  /**
   * Loads remote mapping entities based on remote identifier.
   *
   * @param int $remote_identifier_1
   * @param int $remote_identifier_2
   * @param int $remote_identifier_3
   *
   * @return array
   *   Array of TMGMTRemote entities.
   */
  function loadByRemoteIdentifier($remote_identifier_1 = NULL, $remote_identifier_2 = NULL, $remote_identifier_3 = NULL) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'tmgmt_remote');

    if ($remote_identifier_1 !== NULL) {
      $query->propertyCondition('remote_identifier_1', $remote_identifier_1);
    }
    if ($remote_identifier_2 !== NULL) {
      $query->propertyCondition('remote_identifier_2', $remote_identifier_2);
    }
    if ($remote_identifier_3 !== NULL) {
      $query->propertyCondition('remote_identifier_3', $remote_identifier_3);
    }

    $result = $query->execute();

    if (isset($result['tmgmt_remote'])) {
      return entity_load('tmgmt_remote', array_keys($result['tmgmt_remote']));
    }

    return array();
  }
}
