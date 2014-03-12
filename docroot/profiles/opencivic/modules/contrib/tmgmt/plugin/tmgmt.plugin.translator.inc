<?php

/**
 * @file
 * Contains the abstract translator base plugin class.
 */

/**
 * Default controller class for service plugins.
 *
 * @ingroup tmgmt_translator
 */
abstract class TMGMTDefaultTranslatorPluginController extends TMGMTPluginBase implements TMGMTTranslatorPluginControllerInterface {

  protected $supportedRemoteLanguages = array();
  protected $remoteLanguagesMappings = array();

  /**
   * Characters that indicate the beginning of an escaped string.
   *
   * @var string
   */
  protected $escapeStart = '';

  /**
   * Characters that indicate the end of an escaped string.
   *
   * @var string
   */
  protected $escapeEnd = '';

  /**
   * {@inheritdoc}
   */
  public function isAvailable(TMGMTTranslator $translator) {
    // Assume that the translation service is always available.
    return TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function canTranslate(TMGMTTranslator $translator, TMGMTJob $job) {
    // The job is only translatable if the translator is available too.
    if ($this->isAvailable($translator) && array_key_exists($job->target_language, $translator->getSupportedTargetLanguages($job->source_language))) {
      // We can only translate this job if the target language of the job is in
      // one of the supported languages.
      return TRUE;
    }
    return FALSE;
  }

  /**
   * {@inheritdoc}
   */
  public function cancelTranslation(TMGMTJob $job) {
    // Assume that we can cancel a translation job at any time.
    $job->setState(TMGMT_JOB_STATE_CANCELLED);
    return TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function getDefaultRemoteLanguagesMappings() {
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function getSupportedRemoteLanguages(TMGMTTranslator $translator) {
    return array();
  }

  /**
   * {@inheritdoc}
   */
  public function getRemoteLanguagesMappings(TMGMTTranslator $translator) {
    if (!empty($this->remoteLanguagesMappings)) {
      return $this->remoteLanguagesMappings;
    }

    foreach (language_list() as $language => $info) {
      $this->remoteLanguagesMappings[$language] = $this->mapToRemoteLanguage($translator, $language);
    }

    return $this->remoteLanguagesMappings;
  }

  /**
   * {@inheritdoc}
   */
  public function mapToRemoteLanguage(TMGMTTranslator $translator, $language) {
    if (!tmgmt_provide_remote_languages_mappings($translator)) {
      return $language;
    }

    if (!empty($translator->settings['remote_languages_mappings'][$language])) {
      return $translator->settings['remote_languages_mappings'][$language];
    }

    $default_mappings = $this->getDefaultRemoteLanguagesMappings();

    if (isset($default_mappings[$language])) {
      return $default_mappings[$language];
    }

    return $language;
  }

  /**
   * {@inheritdoc}
   */
  public function mapToLocalLanguage(TMGMTTranslator $translator, $language) {
    if (!tmgmt_provide_remote_languages_mappings($translator)) {
      return $language;
    }

    if (isset($translator->settings['remote_languages_mappings']) && is_array($translator->settings['remote_languages_mappings'])) {
      $mappings = $translator->settings['remote_languages_mappings'];
    }
    else {
      $mappings = $this->getDefaultRemoteLanguagesMappings();
    }

    if ($remote_language = array_search($language, $mappings)) {
      return $remote_language;
    }

    return $language;
  }

  /**
   * {@inheritdoc}
   */
  public function getSupportedTargetLanguages(TMGMTTranslator $translator, $source_language) {
    $languages = entity_metadata_language_list();
    unset($languages[LANGUAGE_NONE], $languages[$source_language]);
    return drupal_map_assoc(array_keys($languages));
  }

  /**
   * {@inheritdoc}
   *
   * Default implementation that gets target languages for each remote language.
   * This approach is ineffective and therefore it is advised that a plugin
   * should provide own implementation.
   */
  public function getSupportedLanguagePairs(TMGMTTranslator $translator) {
    $language_pairs = array();

    foreach ($this->getSupportedRemoteLanguages($translator) as $source_language) {
      foreach ($this->getSupportedTargetLanguages($translator, $source_language) as $target_language) {
        $language_pairs[] = array('source_language' => $source_language, 'target_language' => $target_language);
      }
    }

    return $language_pairs;
  }

  /**
   * {@inheritdoc}
   */
  public function getNotCanTranslateReason(TMGMTJob $job) {
    $wrapper = entity_metadata_wrapper('tmgmt_job', $job);
    return t('@translator can not translate from @source to @target.', array('@translator' => $job->getTranslator()->label(), '@source' => $wrapper->source_language->label(), '@target' => $wrapper->target_language->label()));
  }

  /**
   * {@inheritdoc}
   */
  public function getNotAvailableReason(TMGMTTranslator $translator) {
    return t('@translator is not available. Make sure it is properly !configured.', array('@translator' => $this->pluginInfo['label'], '!configured' => l(t('configured'), 'admin/config/regional/tmgmt_translator/manage/' . $translator->name)));
  }

  /**
   * {@inheritdoc}
   */
  public function defaultSettings() {
    $defaults = array('auto_accept' => FALSE);
    // Check if any default settings are defined in the plugin info.
    if (isset($this->pluginInfo['default settings'])) {
      return array_merge($defaults, $this->pluginInfo['default settings']);
    }
    return $defaults;
  }

  /**
   * {@inheritdoc}
   */
  public function hasCheckoutSettings(TMGMTJob $job) {
    return TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function acceptetDataItem(TMGMTJobItem $job_item, array $key) {
    return TRUE;
  }

  /**
   * {@inheritdoc}
   */
  public function escapeText(array $data_item) {
    if (empty($data_item['#escape'])) {
      return $data_item['#text'];
    }

    $text = $data_item['#text'];
    $escape = $data_item['#escape'];

    // Sort them in reverse order based/ on the position and process them,
    // so that positions don't change.
    krsort($escape, SORT_NUMERIC);

    foreach ($escape as $position => $info) {
      $text = substr_replace($text, $this->getEscapedString($info['string']), $position, strlen($info['string']));
    }

    return $text;
  }

  /**
   * Returns the escaped string.
   *
   * Defaults to use the escapeStart and escapeEnd properties but can be
   * overriden if a non-static replacement pattern is used.
   *
   * @param string $string
   *   String that should be escaped.
   * @return string
   */
  protected function getEscapedString($string) {
    return $this->escapeStart . $string . $this->escapeEnd;
  }

  /**
   * {@inheritdoc}
   */
  public function unescapeText($text) {
    return preg_replace('/' . preg_quote($this->escapeStart, '/') . '(.+)' . preg_quote($this->escapeEnd, '/') . '/U', '$1', $text);
  }
}
