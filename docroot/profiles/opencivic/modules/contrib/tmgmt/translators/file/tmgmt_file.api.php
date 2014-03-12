<?php

/*
 * @file
 * API and hook documentation for the File Translator module.
 */

/**
 * Provide information about available file format to export to and import from.
 *
 * @return
 *   An array of available file format plugin definitions. The key is the file
 *   extension for that format. It is therefore currently not possible to have
 *   two file formats which share the same file extension as there needs to be
 *   a way to identify them for the import. Each plugin info array then consists
 *   of a label and a plugin controller class, which needs to implement
 *   TMGMTFileFormatInterface.
 *
 * @see hook_tmgmt_file_format_plugin_info_alter()
 */
function hook_tmgmt_file_format_plugin_info() {
  return array(
    'xlf' => array(
      'label' => t('XLIFF'),
      'plugin controller class' => 'TMGMTFileFormatXLIFF',
    ),
    'html' => array(
      'label' => t('HTML'),
      'plugin controller class' => 'TMGMTFileFormatHTML',
    ),
  );
}

/**
 * Alter file format plugins provided by other modules.
 *
 * @see hook_tmgmt_file_format_plugin_info()
 */
function hook_tmgmt_file_format_plugin_info_alter($file_formats) {
  // Switch the used HTML plugin controller class.
  $file_formats['html']['plugin controller class'] = 'MyModuleCustomizedHTML';
}
