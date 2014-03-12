<?php

/**
 * Field handler which allows to render the job message with replaced variables.
 *
 * @ingroup views_field_handlers
 */
class tmgmt_handler_field_tmgmt_message_message extends views_handler_field_xss {

  function init(&$view, &$options) {
    parent::init($view, $options);
    $this->additional_fields['variables'] = 'variables';
  }

  function option_definition() {
    $options = parent::option_definition();
    $options['format'] = array('default' => 'formatted');
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['format'] = array(
      '#type' => 'select',
      '#title' => t('Format'),
      '#description' => t("Choose whether the field should display the raw text or display formatted text with replaced variables with it's values."),
      '#default_value' => $this->options['format'],
      '#options' => array(
        'formatted' => t('Formatted'),
        'raw' => t('Raw'),
      ),
    );
  }

  function render($values) {
    if ($message = $this->get_value($values)) {
      if ($this->options['format'] == 'formatted') {
        $message = $this->sanitize_value(t($message, unserialize($this->get_value($values, 'variables'))), 'xss');
      }
      else {
        $message = $this->sanitize_value($message, 'xss');
      }
      return $message;
    }
  }

}
