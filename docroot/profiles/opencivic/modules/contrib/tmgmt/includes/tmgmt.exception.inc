<?php

/**
 * TMGMT Exception class
 */
class TMGMTException extends Exception {

  /**
   * @param string $message
   * @param array $data
   *   Associative array of dynamic data that will be inserted into $message.
   * @param int $code
   */
  function __construct($message = "", $data = array(), $code = 0) {
    parent::__construct(strtr($message, $data), $code);
  }
}
