<?php

/**
 * @file
 * Contains the base plugin interface.
 */

/**
 * Base interface for Translation Management plugins.
 */
interface TMGMTPluginBaseInterface {

  /**
   * Constructor.
   *
   * @param $type
   *   The plugin type.
   * @param $plugin
   *   The machine-readable name of the plugin.
   */
  public function __construct($type, $plugin);

  /**
   * Returns the info of the type of the plugin.
   *
   * @see tmgmt_source_plugin_info()
   */
  public function pluginInfo();

  /**
   * Returns the type of the plugin.
   */
  public function pluginType();

}
