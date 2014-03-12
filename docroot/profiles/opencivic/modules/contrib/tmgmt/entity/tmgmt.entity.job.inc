<?php

/*
 * @file
 * Contains job entity class.
 */

/**
 * Entity class for the tmgmt_job entity.
 *
 * @ingroup tmgmt_job
 */
class TMGMTJob extends Entity {

  /**
   * Translation job identifier.
   *
   * @var integer
   */
  public $tjid;

  /**
   * A custom label for this job.
   */
  public $label;

  /**
   * Current state of the translation job
   * @var type
   */
  public $state;

  /**
   * Language to be translated from.
   *
   * @var string
   */
  public $source_language;

  /**
   * Language into which the data needs to be translated.
   *
   * @var varchar
   */
  public $target_language;

  /**
   * Reference to the used translator of this job.
   *
   * @see TMGMTJob::getTranslatorController()
   *
   * @var string
   */
  public $translator;

  /**
   * Translator specific configuration and context information for this job.
   *
   * @var array
   */
  public $settings;

  /**
   * Remote identification of this job.
   *
   * @var integer
   */
  public $reference;

  /**
   * The time when the job was created as a timestamp.
   *
   * @var integer
   */
  public $created;

  /**
   * The time when the job was changed as a timestamp.
   *
   * @var integer
   */
  public $changed;

  /**
   * The user id of the creator of the job.
   *
   * @var integer
   */
  public $uid;

  /**
   * {@inheritdoc}
   */
  public function __construct(array $values = array()) {
    parent::__construct($values, 'tmgmt_job');
    if (empty($this->tjid)) {
      $this->created = REQUEST_TIME;
    }
    if (!isset($this->state)) {
      $this->state = TMGMT_JOB_STATE_UNPROCESSED;
    }
  }

  /**
   * {@inheritdoc}
   */
  public function defaultLabel() {
    // In some cases we might have a user-defined label.
    if (!empty($this->label)) {
      return $this->label;
    }

    $items = $this->getItems();
    $count = count($items);
    if ($count > 0) {
      $t_args = array('@title' => reset($items)->getSourceLabel(), '@more' => $count - 1);
      return format_plural($count, '@title', '@title and @more more', $t_args);
    }
    else {
      $wrapper = entity_metadata_wrapper($this->entityType, $this);
      $source = $wrapper->source_language->label();
      if (empty($source)) {
        $source = '?';
      }
      $target = $wrapper->target_language->label();
      if (empty($target)) {
        $target = '?';
      }
      return t('From @source to @target', array('@source' => $source, '@target' => $target));
    }
  }

  /**
   * {@inheritdoc}
   */
  public function defaultUri() {
    return array('path' => 'admin/tmgmt/jobs/' . $this->tjid);
  }

  /**
   * {@inheritdoc}
   */
  public function buildContent($view_mode = 'full', $langcode = NULL) {
    $content = array();
    if (module_exists('tmgmt_ui')) {
      $content = entity_ui_get_form('tmgmt_job', $this);
    }
    return entity_get_controller($this->entityType)->buildContent($this, $view_mode, $langcode, $content);
  }

  /**
   * Adds an item to the translation job.
   *
   * @param $plugin
   *   The plugin name.
   * @param $item_type
   *   The source item type.
   * @param $item_id
   *   The source item id.
   *
   * @return TMGMTJobItem
   *   The job item that was added to the job or FALSE if it couldn't be saved.
   * @throws TMGMTException
   *   On zero item word count.
   */
  public function addItem($plugin, $item_type, $item_id) {

    $transaction = db_transaction();
    $is_new = FALSE;

    if (empty($this->tjid)) {
      $this->save();
      $is_new = TRUE;
    }

    $item = tmgmt_job_item_create($plugin, $item_type, $item_id, array('tjid' => $this->tjid));
    // Initialize job item data variable needed to determine word count
    // in job item getWordCount().
    $item->getData();
    $item->save();

    if ($item->getWordCount() == 0) {
      $transaction->rollback();

      // In case we got word count 0 for the first job item, NULL tjid so that
      // if there is another addItem() call the rolled back job object will get
      // persisted.
      if ($is_new) {
        $this->tjid = NULL;
      }

      throw new TMGMTException('Created job item with word count 0. Plugin: @plugin | Item type: @item_type | Item id: @item_id',
        array('@plugin' => $plugin, '@item_type' => $item_type, '@item_id' => $item_id));
    }

    return $item;
  }

  /**
   * Add a given TMGMTJobItem to this job.
   *
   * @param TMGMTJobItem $job
   *   The job item to add.
   */
  function addExistingItem(TMGMTJobItem &$item) {
    $item->tjid = $this->tjid;
    $item->save();
  }

  /**
   * Add a log message for this job.
   *
   * @param $message
   *   The message to store in the log. Keep $message translatable by not
   *   concatenating dynamic values into it! Variables in the message should be
   *   added by using placeholder strings alongside the variables argument to
   *   declare the value of the placeholders. See t() for documentation on how
   *   $message and $variables interact.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   * @param $type
   *   (Optional) The type of the message. Can be one of 'status', 'error',
   *   'warning' or 'debug'. Messages of the type 'debug' will not get printed
   *   to the screen.
   */
  public function addMessage($message, $variables = array(), $type = 'status') {
    // Save the job if it hasn't yet been saved.
    if (!empty($this->tjid) || $this->save()) {
      $message = tmgmt_message_create($message, $variables, array(
        'tjid' => $this->tjid,
        'type' => $type,
        'uid' => $GLOBALS['user']->uid,
      ));
      if ($message->save()) {
        return $message;
      }
    }
    return FALSE;
  }

  /**
   * Returns all job items attached to this job.
   *
   * @return array
   *   An array of translation job items.
   */
  public function getItems($conditions = array()) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'tmgmt_job_item');
    $query->propertyCondition('tjid', $this->tjid);
    foreach ($conditions as $key => $condition) {
      if (is_array($condition)) {
        $operator = isset($condition['operator']) ? $condition['operator'] : '=';
        $query->propertyCondition($key, $condition['value'], $operator);
      }
      else {
        $query->propertyCondition($key, $condition);
      }
    }
    $results = $query->execute();
    if (!empty($results['tmgmt_job_item'])) {
      return entity_load('tmgmt_job_item', array_keys($results['tmgmt_job_item']));
    }
    return array();
  }

  /**
   * Returns all job messages attached to this job.
   *
   * @return array
   *   An array of translation job messages.
   */
  public function getMessages($conditions = array()) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'tmgmt_message');
    $query->propertyCondition('tjid', $this->tjid);
    foreach ($conditions as $key => $condition) {
      if (is_array($condition)) {
        $operator = isset($condition['operator']) ? $condition['operator'] : '=';
        $query->propertyCondition($key, $condition['value'], $operator);
      }
      else {
        $query->propertyCondition($key, $condition);
      }
    }
    $results = $query->execute();
    if (!empty($results['tmgmt_message'])) {
      return entity_load('tmgmt_message', array_keys($results['tmgmt_message']));
    }
    return array();
  }

  /**
   * Returns all job messages attached to this job with timestamp newer than
   * $time.
   *
   * @param $time
   *   (Optional) Messages need to have a newer timestamp than $time. Defaults
   *   to REQUEST_TIME.
   *
   * @return array
   *   An array of translation job messages.
   */
  public function getMessagesSince($time = NULL) {
    $time = isset($time) ? $time : REQUEST_TIME;
    $conditions = array('created' => array('value' => $time, 'operator' => '>='));
    return $this->getMessages($conditions);
  }

  /**
   * Retrieves a setting value from the job settings. Pulls the default values
   * (if defined) from the plugin controller.
   *
   * @param $name
   *   The name of the setting.
   *
   * @return
   *   The setting value or $default if the setting value is not set. Returns
   *   NULL if the setting does not exist at all.
   */
  public function getSetting($name) {
    if (isset($this->settings[$name])) {
      return $this->settings[$name];
    }
    // The translator might provide default settings.
    if ($translator = $this->getTranslator()) {
      if (($setting = $translator->getSetting($name)) !== NULL) {
        return $setting;
      }
    }
    if ($controller = $this->getTranslatorController()) {
      $defaults = $controller->defaultSettings();
      if (isset($defaults[$name])) {
        return $defaults[$name];
      }
    }
  }

  /**
   * Returns the translator for this job.
   *
   * @return TMGMTTranslator
   *   The translator entity or FALSE if there was a problem.
   */
  public function getTranslator() {
    if (isset($this->translator)) {
      return tmgmt_translator_load($this->translator);
    }
    return FALSE;
  }

  /**
   * Returns the state of the job. Can be one of the job state constants.
   *
   * @return integer
   *   The state of the job or NULL if it hasn't been set yet.
   */
  public function getState() {
    // We don't need to check if the state is actually set because we always set
    // it in the constructor.
    return $this->state;
  }

  /**
   * Updates the state of the job.
   *
   * @param $state
   *   The new state of the job. Has to be one of the job state constants.
   * @param $message
   *   (Optional) The log message to be saved along with the state change.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   *
   * @return int
   *   The updated state of the job if it could be set.
   *
   * @see TMGMTJob::addMessage()
   */
  public function setState($state, $message = NULL, $variables = array(), $type = 'debug') {
    // Return TRUE if the state could be set. Return FALSE otherwise.
    if (array_key_exists($state, tmgmt_job_states())) {
      $this->state = $state;
      $this->save();
      // If a message is attached to this state change add it now.
      if (!empty($message)) {
        $this->addMessage($message, $variables, $type);
      }
    }
    return $this->state;
  }

  /**
   * Checks whether the passed value matches the current state.
   *
   * @param $state
   *   The value to check the current state against.
   *
   * @return boolean
   *   TRUE if the passed state matches the current state, FALSE otherwise.
   */
  public function isState($state) {
    return $this->getState() == $state;
  }

  /**
   * Checks whether the user described by $account is the author of this job.
   *
   * @param $account
   *   (Optional) A user object. Defaults to the currently logged in user.
   */
  public function isAuthor($account = NULL) {
    $account = isset($account) ? $account : $GLOBALS['user'];
    return $this->uid == $account->uid;
  }

  /**
   * Returns whether the state of this job is 'unprocessed'.
   *
   * @return boolean
   *   TRUE if the state is 'unprocessed', FALSE otherwise.
   */
  public function isUnprocessed() {
    return $this->isState(TMGMT_JOB_STATE_UNPROCESSED);
  }

  /**
   * Returns whether the state of this job is 'cancelled'.
   *
   * @return boolean
   *   TRUE if the state is 'cancelled', FALSE otherwise.
   */
  public function isCancelled() {
    return $this->isState(TMGMT_JOB_STATE_CANCELLED);
  }

  /**
   * Returns whether the state of this job is 'active'.
   *
   * @return boolean
   *   TRUE if the state is 'active', FALSE otherwise.
   */
  public function isActive() {
    return $this->isState(TMGMT_JOB_STATE_ACTIVE);
  }

  /**
   * Returns whether the state of this job is 'rejected'.
   *
   * @return boolean
   *   TRUE if the state is 'rejected', FALSE otherwise.
   */
  public function isRejected() {
    return $this->isState(TMGMT_JOB_STATE_REJECTED);
  }

  /**
   * Returns whether the state of this jon is 'finished'.
   *
   * @return boolean
   *   TRUE if the state is 'finished', FALSE otherwise.
   */
  public function isFinished() {
    return $this->isState(TMGMT_JOB_STATE_FINISHED);
  }

  /**
   * Checks whether a job is translatable.
   *
   * @return boolean
   *   TRUE if the job can be translated, FALSE otherwise.
   */
  public function isTranslatable() {
    if ($translator = $this->getTranslator()) {
      if ($translator->canTranslate($this)) {
        return TRUE;
      }
    }
    return FALSE;
  }

  /**
   * Checks whether a job is cancelable.
   *
   * @return boolean
   *   TRUE if the job can be cancelled, FALSE otherwise.
   */
  public function isCancelable() {
    // Only non-submitted translation jobs can be cancelled.
    return $this->isActive();
  }

  /**
   * Checks whether a job is submittable.
   *
   * @return boolean
   *   TRUE if the job can be submitted, FALSE otherwise.
   */
  public function isSubmittable() {
    return $this->isUnprocessed() || $this->isRejected() || $this->isCancelled();
  }

  /**
   * Checks whether a job is deletable.
   *
   * @return boolean
   *   TRUE if the job can be deleted, FALSE otherwise.
   */
  public function isDeletable() {
    return !$this->isActive();
  }

  /**
   * Set the state of the job to 'submitted'.
   *
   * @param $message
   *   The log message to be saved along with the state change.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   *
   * @return TMGMTJob
   *   The job entity.
   *
   * @see TMGMTJob::addMessage()
   */
  public function submitted($message = NULL, $variables = array(), $type = 'status') {
    if (!isset($message)) {
      $message = 'The translation job has been submitted.';
    }
    $this->setState(TMGMT_JOB_STATE_ACTIVE, $message, $variables, $type);
  }

  /**
   * Set the state of the job to 'finished'.
   *
   * @param $message
   *   The log message to be saved along with the state change.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   *
   * @return TMGMTJob
   *   The job entity.
   *
   * @see TMGMTJob::addMessage()
   */
  public function finished($message = NULL, $variables = array(), $type = 'status') {
    if (!isset($message)) {
      $message = 'The translation job has been finished.';
    }
    return $this->setState(TMGMT_JOB_STATE_FINISHED, $message, $variables, $type);
  }

  /**
   * Sets the state of the job to 'cancelled'.
   *
   * @param $message
   *   The log message to be saved along with the state change.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   *
   * Use TMGMTJob::cancelTranslation() to cancel a translation.
   *
   * @return TMGMTJob
   *   The job entity.
   *
   * @see TMGMTJob::addMessage()
   */
  public function cancelled($message = NULL, $variables = array(), $type = 'status') {
    if (!isset($message)) {
      $message = 'The translation job has been cancelled.';
    }
    return $this->setState(TMGMT_JOB_STATE_CANCELLED, $message, $variables, $type);
  }

  /**
   * Sets the state of the job to 'rejected'.
   *
   * @param $message
   *   The log message to be saved along with the state change.
   * @param $variables
   *   (Optional) An array of variables to replace in the message on display.
   *
   * @return TMGMTJob
   *   The job entity.
   *
   * @see TMGMTJob::addMessage()
   */
  public function rejected($message = NULL, $variables = array(), $type = 'error') {
    if (!isset($message)) {
      $message = 'The translation job has been rejected by the translation provider.';
    }
    return $this->setState(TMGMT_JOB_STATE_REJECTED, $message, $variables, $type);
  }

  /**
   * Request the translation of a job from the translator.
   *
   * @return integer
   *   The updated job status.
   */
  public function requestTranslation() {
    if (!$this->isTranslatable() || !$controller = $this->getTranslatorController()) {
      return FALSE;
    }
    // We don't know if the translator plugin already processed our
    // translation request after this point. That means that the plugin has to
    // set the 'submitted', 'needs review', etc. states on its own.
    $controller->requestTranslation($this);
  }

  /**
   * Attempts to cancel the translation job. Already accepted jobs can not be
   * cancelled, submitted jobs only if supported by the translator plugin.
   * Always use this method if you want to cancel a translation job.
   *
   * @return boolean
   *   TRUE if the translation job was cancelled, FALSE otherwise.
   */
  public function cancelTranslation() {
    if (!$this->isCancelable() || !$controller = $this->getTranslatorController()) {
      return FALSE;
    }
    // We don't know if the translator plugin was able to cancel the translation
    // job after this point. That means that the plugin has to set the
    // 'cancelled' state on its own.
    $controller->cancelTranslation($this);
  }

  /**
   * Returns the translator plugin controller of the translator of this job.
   *
   * @return TMGMTTranslatorPluginControllerInterface
   *   The controller of the translator plugin.
   */
  public function getTranslatorController() {
    if ($translator = $this->getTranslator($this)) {
      return $translator->getController();
    }
    return FALSE;
  }

  /**
   * Returns the source data of all job items.
   *
   * @param $key
   *   If present, only the subarray identified by key is returned.
   * @param $index
   *   Optional index of an attribute below $key.
   * @return array
   *   A nested array with the source data where the most upper key is the job
   *   item id.
   */
  public function getData(array $key = array(), $index = NULL) {
    $data = array();
    if (!empty($key)) {
      $tjiid = array_shift($key);
      $item = entity_load_single('tmgmt_job_item', $tjiid);
      if ($item) {
        $data[$tjiid] = $item->getData($key, $index);
        // If not set, use the job item label as the data label.
        if (!isset($data[$tjiid]['#label'])) {
          $data[$tjiid]['#label'] = $item->getSourceLabel();
        }
      }
    }
    else {
      foreach ($this->getItems() as $tjiid => $item) {
        $data[$tjiid] = $item->getData();
        // If not set, use the job item label as the data label.
        if (!isset($data[$tjiid]['#label'])) {
          $data[$tjiid]['#label'] = $item->getSourceLabel();
        }
      }
    }
    return $data;
  }

  /**
   * Sums up all pending counts of this jobs job items.
   *
   * @return
   *   The sum of all pending counts
   */
  public function getCountPending() {
    return tmgmt_job_statistic($this, 'count_pending');
  }

  /**
   * Sums up all translated counts of this jobs job items.
   *
   * @return
   *   The sum of all translated counts
   */
  public function getCountTranslated() {
    return tmgmt_job_statistic($this, 'count_translated');
  }

  /**
   * Sums up all accepted counts of this jobs job items.
   *
   * @return
   *   The sum of all accepted data items.
   */
  public function getCountAccepted() {
    return tmgmt_job_statistic($this, 'count_accepted');
  }

  /**
   * Sums up all accepted counts of this jobs job items.
   *
   * @return
   *   The sum of all accepted data items.
   */
  public function getCountReviewed() {
    return tmgmt_job_statistic($this, 'count_reviewed');
  }

  /**
   * Sums up all word counts of this jobs job items.
   *
   * @return
   *   The total word count of this job.
   */
  public function getWordCount() {
    return tmgmt_job_statistic($this, 'word_count');
  }

  /**
   * Store translated data back into the items.
   *
   * @param $data
   *   Partially or complete translated data, the most upper key needs to be
   *   the translation job item id.
   * @param $key
   *   (Optional) Either a flattened key (a 'key1][key2][key3' string) or a nested
   *   one, e.g. array('key1', 'key2', 'key2'). Defaults to an empty array which
   *   means that it will replace the whole translated data array. The most
   *   upper key entry needs to be the job id (tjiid).
   */
  public function addTranslatedData($data, $key = NULL) {
    $key = tmgmt_ensure_keys_array($key);
    $items = $this->getItems();
    // If there is a key, get the specific item and forward the call.
    if (!empty($key)) {
      $item_id = array_shift($key);
      if (isset($items[$item_id])) {
        $items[$item_id]->addTranslatedData($data, $key);
      }
    }
    else {
      foreach ($data as $key => $value) {
        if (isset($items[$key])) {
          $items[$key]->addTranslatedData($value);
        }
      }
    }
  }

  /**
   * Propagates the returned job item translations to the sources.
   *
   * @return boolean
   *   TRUE if we were able to propagate the translated data, FALSE otherwise.
   */
  public function acceptTranslation() {
    foreach ($this->getItems() as $item) {
      $item->acceptTranslation();
    }
  }

  /**
   * Gets remote mappings for current job.
   *
   * @return array
   *   List of TMGMTRemote entities.
   */
  public function getRemoteMappings() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'tmgmt_remote');
    $query->propertyCondition('tjid', $this->tjid);
    $result = $query->execute();

    if (isset($result['tmgmt_remote'])) {
      return entity_load('tmgmt_remote', array_keys($result['tmgmt_remote']));
    }

    return array();
  }

  /**
   * Invoke the hook 'hook_tmgmt_source_suggestions' to get all suggestions.
   *
   * @param arary $conditions
   *   Conditions to pass only some and not all items to the hook.
   *
   * @return array
   *   An array with all additional translation suggestions.
   *   - job_item: A TMGMTJobItem instance.
   *   - referenced: A string which indicates where this suggestion comes from.
   *   - from_job: The main TMGMTJob-ID which suggests this translation.
   */
  public function getSuggestions(array $conditions = array()) {
    $suggestions = module_invoke_all('tmgmt_source_suggestions', $this->getItems($conditions), $this);

    // Each TMGMTJob needs a job id to be able to count the words, because the
    // source-language is stored in the job and not the item.
    foreach ($suggestions as &$suggestion) {
      $jobItem = $suggestion['job_item'];
      $jobItem->tjid = $this->tjid;
      $jobItem->recalculateStatistics();
    }
    return $suggestions;
  }

  /**
   * Removes all suggestions from the given list which should not be processed.
   *
   * This function removes all suggestions from the given list which are already
   * assigned to a translation job or which should not be processed because
   * there are no words, no translation is needed, ...
   *
   * @param array &$suggestions
   *   Associative array of translation suggestions. It must contain at least:
   *   - tmgmt_job: An instance of a TMGMTJobItem.
   */
  public function cleanSuggestionsList(array &$suggestions) {
    foreach ($suggestions as $k => $suggestion) {
      if (is_array($suggestion) && isset($suggestion['job_item']) && ($suggestion['job_item'] instanceof TMGMTJobItem)) {
        $jobItem = $suggestion['job_item'];

        // Items with no words to translate should not be presented.
        if ($jobItem->getWordCount() <= 0) {
          unset($suggestions[$k]);
          continue;
        }

        // Check if there already exists a translation job for this item in the
        // current language.
        $items = tmgmt_job_item_load_all_latest($jobItem->plugin, $jobItem->item_type, $jobItem->item_id, $this->source_language);
        if ($items && isset($items[$this->target_language])) {
          unset($suggestions[$k]);
          continue;
        }
      } else {
        unset($suggestions[$k]);
        continue;
      }
    }
  }

}
