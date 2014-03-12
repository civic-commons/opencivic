<?php
/**
 * @file
 * Generate link on nodes that are referenced by other nodes and have
 * entityreference_prepopulate enabled on them.
 */

/**
 * Field handler to present a link node edit.
 *
 * @ingroup views_field_handlers
 */
class views_handler_field_prepopulate_create_node_links extends views_handler_field_node_link {
  /**
   * Renders the link.
   */
  function render_link($node, $values) {
    list ($content_type,) = explode('_field_', $this->options['field'], 2);

    // Ensure user can create the content type.
    if (!node_access('create', $content_type)) {
      return;
    }

    $to_replace = array($content_type, 'create_link');
    $field_name = trim(str_replace($to_replace, '', $this->options['field']), '_');

    $instance = field_info_instance('node', $field_name, $content_type);

    if (empty($instance['settings']['behaviors']['node_links']['content_types'][$node->type])) {
      // This content type isn't referenced by the the field.
      return;
    }
    
    // Build link.
    $content_type_link = array(
      '!content_type' => str_replace('_', '-', $content_type),
    );
    $this->options['alter']['make_link'] = TRUE;
    $this->options['alter']['path'] = format_string('node/add/!content_type', $content_type_link);
    $this->options['alter']['query'] = array($field_name => $node->nid) + drupal_get_destination();

    $text = !empty($this->options['text']) ? $this->options['text'] : t('Add new @content_type', array('@content_type' => node_type_get_name($content_type)));
    return $text;
  }
}
