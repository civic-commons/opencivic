<?php
/**
 * @file
 *
 * Template for small category icons in grid views
 */
$icons = array();
$row_field = 'field_' . $field->field;
if (!empty($row->$row_field)) {
  foreach($row->$row_field as $value) {
    $term = $value['raw']['taxonomy_term'];
    if (!empty($term->field_oc_small_icon[LANGUAGE_NONE])) {
      $image_vars = array(
        'path' => $term->field_oc_small_icon[LANGUAGE_NONE][0]['uri'], 
        'title' => $term->name,
        'alt' => $term->name,
      );
      $link_options = array(
        'html' => TRUE,
        'query' => array('f[0]' => "$field->field:$term->tid"),
      );
      $icons[] = l(theme('image', $image_vars), 'search', $link_options);      
    }
  }  
}
?>
<?php foreach($icons as $icon): ?>
<span class="category-icon"><?php print $icon; ?></span>
<?php endforeach; ?>
