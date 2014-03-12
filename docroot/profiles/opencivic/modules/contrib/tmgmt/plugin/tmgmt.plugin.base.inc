<?php

/**
 * @file
 * Contains the base plugin class.
 */

/**
 * Base class for Translation Management plugins.
 */
class TMGMTPluginBase implements TMGMTPluginBaseInterface {

  protected $pluginType;
  protected $pluginInfo;

  /**
   * {@inheritdoc}
   */
  public function __construct($type, $plugin) {
    $this->pluginType = $plugin;
    $this->pluginInfo = _tmgmt_plugin_info($type, $plugin);
  }

  /**
   * {@inheritdoc}
   */
  public function pluginInfo() {
    return $this->pluginInfo;
  }

  /**
   * {@inheritdoc}
   */
  public function pluginType() {
    return $this->pluginType;
  }

}
