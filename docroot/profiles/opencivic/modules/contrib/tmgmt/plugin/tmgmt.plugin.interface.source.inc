<?php

/**
 * @file
 * Contains the source plugin interface.
 */

/**
 * Interface for source plugin controllers.
 *
 * @ingroup tmgmt_source
 */
interface TMGMTSourcePluginControllerInterface extends TMGMTPluginBaseInterface {

  /**
   * Returns an array with the data structured for translation.
   *
   * @param TMGMTJobItem $job_item
   *   The job item entity.
   *
   * @see TMGMTJobItem::getData()
   */
  public function getData(TMGMTJobItem $job_item);

  /**
   * Saves a translation.
   *
   * @param TMGMTJobItem $job_item
   *   The job item entity.
   *
   * @return boolean
   *   TRUE if the translation was saved successfully, FALSE otherwise.
   */
  public function saveTranslation(TMGMTJobItem $job_item);

  /**
   * Return a title for this job item.
   *
   * @param TMGMTJobItem $job_item
   *   The job item entity.
   */
  public function getLabel(TMGMTJobItem $job_item);

  /**
   * Returns the Uri for this job item.
   *
   * @param TMGMTJobItem $job_item
   *   The job item entity.
   *
   * @see entity_uri()
   */
  public function getUri(TMGMTJobItem $job_item);

  /**
   * Returns an array of translatable source item types.
   */
  public function getItemTypes();

  /**
   * Returns the label of a source item type.
   *
   * @param $type
   *   The identifier of a source item type.
   */
  public function getItemTypeLabel($type);

  /**
   * Returns the type of a job item.
   *
   * @param TMGMTJobItem $job_item
   *   The job item.
   *
   * @return string
   *   A type that describes the job item.
   */
  public function getType(TMGMTJobItem $job_item);

}
