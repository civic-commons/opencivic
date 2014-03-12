<?php

/**
 * @file
 * Contains the source plugin interface.
 */

/**
 * Interface for service plugin controllers.
 *
 * @ingroup tmgmt_translator
 */
interface TMGMTTranslatorPluginControllerInterface extends TMGMTPluginBaseInterface {

  /**
   * Checks whether a translator is available.
   *
   * @param TMGMTTranslator $translator
   *   The translator entity.
   *
   * @return boolean
   *   TRUE if the translator plugin is available, FALSE otherwise.
   */
  public function isAvailable(TMGMTTranslator $translator);

  /**
   * Return a reason why the translator is not available.
   *
   * @param TMGMTTranslator $translator
   *   The translator entity.
   *
   * Might be called when isAvailable() returns FALSE to get a reason that
   * can be displayed to the user.
   *
   * @todo Remove this once http://drupal.org/node/1420364 is done.
   */
  public function getNotAvailableReason(TMGMTTranslator $translator);

  /**
   * Check whether this service can handle a particular translation job.
   *
   * @param TMGMTTranslator $translator
   *   The TMGMTTranslator entity that should handle the translation.
   * @param TMGMTJob $job
   *   The TMGMTJob entity that should be translated.
   *
   * @return boolean
   *   TRUE if the job can be processed and translated, FALSE otherwise.
   */
  public function canTranslate(TMGMTTranslator $translator, TMGMTJob $job);

  /**
   * Return a reason why the translator is not able to translate this job.
   *
   * @param TMGMTJob $job
   *   The job entity.
   *
   * Might be called when canTranslate() returns FALSE to get a reason that
   * can be displayed to the user.
   *
   * @todo Remove this once http://drupal.org/node/1420364 is done.
   */
  public function getNotCanTranslateReason(TMGMTJob $job);

  /**
   * Specifies default mappings for local to remote language codes.
   *
   * @return array
   *   An array of local => remote language codes.
   */
  public function getDefaultRemoteLanguagesMappings();

  /**
   * Gets all supported languages of the translator.
   *
   * @param TMGMTTranslator $translator
   *   Translator entity for which to get supported languages.
   *
   * @return array
   *   An array of language codes which are provided by the translator
   *   (remote language codes).
   */
  public function getSupportedRemoteLanguages(TMGMTTranslator $translator);

  /**
   * Gets existing remote languages mappings.
   *
   * @param TMGMTTranslator $translator
   *   Translator entity for which to get mappings.
   *
   * @return array
   *   An array of local => remote language codes.
   */
  public function getRemoteLanguagesMappings(TMGMTTranslator $translator);

  /**
   * Maps local language to remote language.
   *
   * @param TMGMTTranslator $translator
   *   Translator entity for which to get remote language.
   * @param $language
   *   Local language code.
   *
   * @return string
   *   Remote language code.
   */
  public function mapToRemoteLanguage(TMGMTTranslator $translator, $language);

  /**
   * Maps remote language to local language.
   *
   * @param TMGMTTranslator $translator
   *   Translator entity for which to get local language.
   * @param $language
   *   Remote language code.
   *
   * @return string
   *   Local language code.
   */
  public function mapToLocalLanguage(TMGMTTranslator $translator, $language);

  /**
   * Returns all available target languages that are supported by this service
   * when given a source language.
   *
   * @param TMGMTTranslator $translator
   *   The translator entity.
   * @param $source_language
   *   The source language.
   *
   * @return array
   *   An array of remote languages in ISO format.
   */
  public function getSupportedTargetLanguages(TMGMTTranslator $translator, $source_language);

  /**
   * Returns supported language pairs.
   *
   * This info may be used by other plugins to find out what language pairs
   * can handle the translator.
   *
   * @param TMGMTTranslator $translator
   *   The translator entity.
   *
   * @return array
   *   List of language pairs where a pair is an associative array of
   *   source_language and target_language.
   *   Example:
   *   array(
   *     array('source_language' => 'en-US', 'target_language' => 'de-DE'),
   *     array('source_language' => 'en-US', 'target_language' => 'de-CH'),
   *   )
   */
  public function getSupportedLanguagePairs(TMGMTTranslator $translator);

  /**
   * @abstract
   *
   * Submits the translation request and sends it to the translation provider.
   *
   * @param TMGMTJob $job
   *   The job that should be submitted.
   */
  public function requestTranslation(TMGMTJob $job);

  /**
   * Cancels a translation job.
   *
   * @param TMGMTJob $job
   *   The job that should have its translation cancelled.
   *
   * @return boolean
   *   TRUE if the job could be cancelled, FALSE otherwise.
   */
  public function cancelTranslation(TMGMTJob $job);

  /**
   * Defines default settings.
   *
   * @return array
   *   An array of default settings.
   */
  public function defaultSettings();

  /**
   * Returns if the translator has any settings for the passed job.
   */
  public function hasCheckoutSettings(TMGMTJob $job);

  /**
   * Accept a single data item.
   *
   * @todo Using job item breaks the current convention which uses jobs.
   *
   * @param $job_item
   *   The Job item the accepted data item belongs to.
   * @param $key
   *   The key of the accepted data item.
   *   The key is an array containing the keys of a nested array hierarchy path.
   *
   * @return
   *   TRUE if the approving was succesfull, FALSE otherwise.
   *   In case of an error, it is the responsibility of the translator to
   *   provide informations about the failure by adding a message to the job
   *   item.
   */
  public function acceptetDataItem(TMGMTJobItem $job_item, array $key);

  /**
   * Returns the escaped #text of a data item.
   *
   * @param array $data_item
   *   A data item with a #text and optional #escape definitions.
   *
   * @return string
   *   The text of the data item with translator-specific escape patterns
   *   applied.
   */
  public function escapeText(array $data_item);

  /**
   * Removes escape patterns from an escaped text.
   *
   * @param string $text
   *   The text from which escape patterns should be removed.
   *
   * @return string
   *   The unescaped text.
   */
  public function unescapeText($text);

}
