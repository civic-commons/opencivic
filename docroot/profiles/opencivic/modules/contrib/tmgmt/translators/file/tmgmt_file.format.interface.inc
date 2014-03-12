<?php

/**
 * Interface for exporting to a given file format.
 */
interface TMGMTFileFormatInterface {

  /**
   * Return the file content for the job data.
   *
   * @param $job
   *   The translation job object to be exported.
   *
   * @return
   *   String with the file content.
   */
  function export(TMGMTJob $job);

  /**
   * Validates that the given file is valid and can be imported.
   *
   * @param $imported_file
   *   File path to the file to be imported.
   *
   * @return TMGMTJob
   *   Returns the corresponding translation job entity if the import file is
   *   valid, FALSE otherwise.
   */
  function validateImport($imported_file);

  /**
   * Converts an exported file content back to the translated data.
   *
   * @return
   *   Translated data array.
   */
  function import($imported_file);
}
