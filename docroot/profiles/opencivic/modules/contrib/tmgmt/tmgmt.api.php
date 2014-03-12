<?php

/**
 * @file
 * Hooks provided by the Translation Management module.
 */

/**
 * @addtogroup tmgmt_source
 * @{
 */

/**
 * Provide information about source plugins.
 *
 * @see TMGMTTestSourcePluginController
 */
function hook_tmgmt_source_plugin_info() {
  return array(
    'test_source' => array(
      'label' => t('Test source'),
      'description' => t('Simple source for testing purposes.'),
      'controller class' => 'TMGMTTestSourcePluginController',
    ),
  );
}

/**
 * Alter source plugins information.
 *
 * @param $info
 *   The defined source plugin information.
 *
 * @see hook_tmgmt_source_plugin_info()
 */
function hook_tmgmt_source_plugin_info_alter(&$info) {
  $info['test_source']['description'] = t('Updated description');
}

/**
 * Return a list of suggested sources for job items.
 *
 * @param array $items
 *   An array with TMGMTJobItem objects which must be checked for suggested
 *   translations.
 *   - TMGMTJobItem A JobItem to check for suggestions.
 *   - ...
 * @param TMGMTJob $job
 *   The current translation job to check for additional translation items.
 *
 * @return array
 *   An array with all additional translation suggestions.
 *   - job_item: A TMGMTJobItem instance.
 *   - referenced: A string which indicates where this suggestion comes from.
 *   - from_job: The main TMGMTJob-ID which suggests this translation.
 */
function hook_tmgmt_source_suggestions(array $items, TMGMTJob $job) {
  return array(
    array(
      'job_item' => tmgmt_job_item_create('entity', 'node', 0),
      'reason' => t('Referenced @type of field @label', array('@type' => 'entity', '@label' => 'label')),
      'from_item' => $items[1]->tjiid,
    )
  );
}

/**
 * @} End of "addtogroup tmgmt_source".
 */

/**
 * @addtogroup tmgmt_translator
 * @{
 */

/**
 * Provide information about translator plugins.
 *
 * @see TMGMTTestTranslatorPluginController
 */
function hook_tmgmt_translator_plugin_info() {
  return array(
    'test_translator' => array(
      'label' => t('Test translator'),
      'description' => t('Simple translator for testing purposes.'),
      'plugin controller class' => 'TMGMTTestTranslatorPluginController',
      'ui controller class' => 'TMGMTTestTranslatorUIController',
      'default settings' => array(
        'expose_settings' => TRUE,
      ),
      // By default, a translator is automatically created with the default
      // settings. Set auto create to FALSE to prevent this.
      'auto create' => TRUE,
      // If the translator should provide remote languages mappings feature.
      // It defaults to TRUE.
      'map remote languages' => FALSE,
      // Flag defining if job settings are handled by plugin itself.
      // Defaults to FALSE.
      'job settings custom handling' => FALSE,
    ),
  );
}

/**
 * Alter information about translator plugins.
 */
function hook_tmgmt_translator_plugin_info_alter(&$info) {
  $info['test_source']['description'] = t('Updated description');
}

/**
 * @} End of "addtogroup tmgmt_translator".
 */

/**
 * @defgroup tmgmt_job Translation Jobs
 *
 * A single task to translate something into a given language using a @link
 * translator translator @endlink.
 *
 * Attached to these jobs are job items, which specify which @link source
 * sources @endlink are to be translated.
 *
 * To create a new translation job, first create a job and then assign items to
 * each. Each item needs to specify the source plugin that should be used
 * and the type and id, which the source plugin then uses to identify it later
 * on.
 *
 * @code
 * $job = tmgmt_job_create('en', $target_language);
 *
 * for ($i = 1; $i < 3; $i++) {
 *   $job->addItem('test_source', 'test', $i);
 * }
 * @endcode
 *
 * Once a job has been created, it can be assigned to a translator plugin, which
 * is the service that is going to do the translation.
 *
 * @code
 * $job->translator = 'test_translator';
 * // Translator specific settings.
 * $job->settings = array(
 *   'priority' => 5,
 * );
 * $job->save();
 *
 * // Get the translator plugin and request a translation.
 * if ($job->isTranslatable()) {
 *   $job->requestTranslation();
 * }
 * @endcode
 *
 * The translation plugin will then request the text from the source plugin.
 * Depending on the plugin, the text might be sent to an external service
 * or assign it to a local user or team of users. At some point, a translation
 * will be returned and saved in the job items.
 *
 * The translation can now be reviewed, accepted and the source plugins be told
 * to save the translation.
 *
 * @code
 * $job->accepted('Optional message');
 * @endcode
 */

/**
 * @defgroup tmgmt_translator Translators
 *
 * A translator plugin integrates a translation service.
 *
 * To define a translator, hook_tmgmt_translator_plugin_info() needs to be
 * implemented and a controller class (specified in the info) created.
 *
 * A translator plugin is then responsible for sending out a translation job and
 * storing the translated texts back into the job and marking it as needs review
 * once it's finished.
 *
 * TBD.
 */

/**
 * @defgroup tmgmt_source Translation source
 *
 * A source plugin represents translatable elements on a site.
 *
 * For example nodes, but also plain strings, menu items, other entities and so
 * on.
 *
 * To define a source, hook_tmgmt_source_plugin_info() needs to be implemented
 * and a controller class (specified in the info) created.
 *
 * A source has three separate tasks.
 *
 * - Allows to create a new @link job translation job @endlink and assign job
 *   items to itself.
 * - Extract the translatable text into a nested array when
 *   requested to do in their implementation of
 *   TMGMTSourcePluginControllerInterface::getData().
 * - Save the accepted translations returned by the translation plugin in their
 *   sources in their implementation of
 *   TMGMTSourcePluginControllerInterface::saveTranslation().
 */
