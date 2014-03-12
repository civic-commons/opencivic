<?php

/**
 * @file
 * Contains handler for the delete linked account link.
 */

/**
 * Provides a link to delete linked account. Based on code from the privatemsg
 * module.
 */
class rpx_ui_handler_field_delete_link extends views_handler_field {
  /**
   * Add aid as an additional field.
   */
  function construct() {
    parent::construct();
    $this->additional_fields['aid'] = 'aid';
    $this->additional_fields['uid'] = 'uid';
  }

  /**
   * Define our additional configuration setting.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['text'] = array('default' => t('Delete linked account'), 'translatable' => TRUE);
    $options['return'] = array('default' => TRUE, 'translatable' => FALSE);
    $options['custom_destination'] = array('default' => '', 'translatable' => FALSE);
    return $options;
  }

  /**
   * Define the configuration form for our textfield.
   */
  function options_form(&$form, &$form_state) {
    $form['label'] = array(
      '#type' => 'textfield',
      '#title' => t('Label'),
      '#default_value' => isset($this->options['label']) ? $this->options['label'] : '',
      '#description' => t('The label for this field that will be displayed to end users if the style requires it.'),
    );

    $form['text'] = array(
      '#type' => 'textfield',
      '#title' => t('Text to display'),
      '#default_value' => isset($this->options['text']) ? $this->options['text'] : '',
      '#description' => t('Define the text to use for the link title. You can use replacement tokens to insert any existing field output.'),
    );

    $form['return'] = array(
      '#type' => 'checkbox',
      '#title' => t('Return to view after linked account is deleted.'),
      '#default_value' => $this->options['return'],
      '#description' => t('Should the user be redirected back to the current view after the linked account is deleted.'),
    );

    $form['custom_destination'] = array(
      '#type' => 'textfield',
      '#title' => t('Custom destination'),
      '#default_value' => $this->options['custom_destination'],
      '#description' => t('If non-empty, users will be forwared to the given url. You can use replacement tokens to insert any existing field output.'),
      '#states' => array(
        'visible' => array(
          "input[name='options[return]']" => array('checked' => TRUE),
        ),
      ),
    );

    // Get a list of the available fields and arguments for token replacement.
    $options = array();
    foreach ($this->view->display_handler->get_handlers('field') as $field => $handler) {
      $options[t('Fields')]["[$field]"] = $handler->ui_name();
      // We only use fields up to (and including) this one.
      if ($field == $this->options['id']) {
        break;
      }
    }

    $count = 0; // This lets us prepare the key as we want it printed.
    foreach ($this->view->display_handler->get_handlers('argument') as $arg => $handler) {
      $options[t('Arguments')]['%' . ++$count] = t('@argument title', array('@argument' => $handler->ui_name()));
      $options[t('Arguments')]['!' . $count] = t('@argument input', array('@argument' => $handler->ui_name()));
    }

    $this->document_self_tokens($options[t('Fields')]);

    // Default text.
    $output = t('<p>You must add some additional fields to this display before using this field. These fields may be marked as <em>Exclude from display</em> if you prefer. Note that due to rendering order, you cannot use fields that come after this field; if you need a field not listed here, rearrange your fields.</p>');

    // We have some options, so make a list.
    if (!empty($options)) {
      $output = t('<p>The following substitution patterns are available for this display. Use the pattern shown on the left to display the value indicated on the right. Note that due to rendering order, you cannot use fields that come after this field; if you need a field not listed here, rearrange your fields.</p>');

      foreach (array_keys($options) as $type) {
        if (!empty($options[$type])) {
          $items = array();
          foreach ($options[$type] as $key => $value) {
            $items[] = $key . ' == ' . $value;
          }
          $output .= theme('item_list',
            array(
              'items' => $items,
              'type' => $type
            ));
        }
      }
    }

    $form['help'] = array(
      '#id' => 'views-tokens-help',
      '#markup' => '<div><fieldset id="views-tokens-help"><legend>' . t('Replacement patterns') . '</legend>' . $output . '</fieldset></div>',
    );
  }

  /**
   * Renders our field, displays a link if the user is allowed to.
   */
  function render($values) {
    if (isset($values->{$this->aliases['uid']})) {
      $uid = $values->{$this->aliases['uid']};
    }
    else {
      return '';
    }

    if (isset($values->{$this->aliases['aid']})) {
      $aid = $values->{$this->aliases['aid']};
    }
    else {
      return '';
    }

    // Make sure user has appropriate permissions.
    if(!_rpx_views_user_access('manage own identities', $aid)) {
      return '';
    }

    $text = t('Delete linked account');
    if (!empty($this->options['text'])) {
      $tokens = $this->get_render_tokens($this);
      $text = strip_tags(strtr($this->options['text'], $tokens));
    }

    $options = array();
    if ($this->options['return']) {
      if (!empty($this->options['custom_destination'])) {
        $tokens = $this->get_render_tokens($this);
        $destination = strip_tags(strtr($this->options['custom_destination'], $tokens));
        $options['query'] = array('destination' => $destination);
      }
      else {
        $options['query'] = drupal_get_destination();
      }
    }

    return l($text, "user/$uid/rpx/delete/$aid", $options);
  }

  /**
   * Basic checks.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
}
