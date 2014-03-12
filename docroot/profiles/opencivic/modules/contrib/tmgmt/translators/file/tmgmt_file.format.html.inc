<?php

/**
 * Export into HTML.
 */
class TMGMTFileFormatHTML implements TMGMTFileFormatInterface {

  /**
   * Returns base64 encoded data that is safe for use in xml ids.
   */
  protected function encodeIdSafeBase64($data) {
    // Prefix with a b to enforce that the first character is a letter.
    return 'b' . rtrim(strtr(base64_encode($data), '+/', '-_'), '=');
  }

  /**
   * Returns decoded id safe base64 data.
   */
  protected function decodeIdSafeBase64($data) {
    // Remove prefixed b.
    $data = substr($data, 1);
    return base64_decode(str_pad(strtr($data, '-_', '+/'), strlen($data) % 4, '=', STR_PAD_RIGHT));
  }

  /**
   * {@inheritdoc}
   */
  public function export(TMGMTJob $job) {

    $items = array();
    foreach ($job->getItems() as $item) {
      $data = array_filter(tmgmt_flatten_data($item->getData()), '_tmgmt_filter_data');
      foreach ($data as $key => $value) {
        $items[$item->tjiid][$this->encodeIdSafeBase64($item->tjiid . '][' . $key)] = $value;
      }
    }
    return theme('tmgmt_file_html_template', array(
      'tjid' => $job->tjid,
      'source_language' => $job->getTranslator()->mapToRemoteLanguage($job->source_language),
      'target_language' => $job->getTranslator()->mapToRemoteLanguage($job->target_language),
      'items' => $items,
    ));
  }

  /**
   * {@inheritdoc}
   */
  public function import($imported_file) {
    $dom = new DOMDocument();
    $dom->loadHTMLFile($imported_file);
    $xml = simplexml_import_dom($dom);

    $data = array();
    foreach ($xml->xpath("//div[@class='atom']") as $atom) {
      // Assets are our strings (eq fields in nodes).
      $key = $this->decodeIdSafeBase64((string) $atom['id']);
      $data[$key]['#text'] = (string) $atom;
    }
    return tmgmt_unflatten_data($data);
  }

  /**
   *
   * @param type $imported_file
   */
  public function validateImport($imported_file) {
    $dom = new DOMDocument();
    if (!$dom->loadHTMLFile($imported_file)) {
      return FALSE;
    }
    $xml = simplexml_import_dom($dom);

    // Collect meta information.
    $meta_tags = $xml->xpath('//meta');
    $meta = array();
    foreach ($meta_tags as $meta_tag) {
      $meta[(string) $meta_tag['name']] = (string) $meta_tag['content'];
    }

    // Check required meta tags.
    foreach (array('JobID', 'languageSource', 'languageTarget') as $name) {
      if (!isset($meta[$name])) {
        return FALSE;
      }
    }

    // Attempt to load job.
    if (!$job = tmgmt_job_load($meta['JobID'])) {
      return FALSE;
    }


    // Check language.
    if ($meta['languageSource'] != $job->getTranslator()->mapToRemoteLanguage($job->source_language) ||
        $meta['languageTarget'] != $job->getTranslator()->mapToRemoteLanguage($job->target_language)) {
      return FALSE;
    }

    // Validation successful.
    return $job;
  }

}
