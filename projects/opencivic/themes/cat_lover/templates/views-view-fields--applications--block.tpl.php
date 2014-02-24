<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php foreach ($fields as $id => $field): ?>

  <?php if(in_array($id, array('field_application_logo', 'title', 'field_application_sdesc', 'field_interaction_organization'))): ?>

    <?php print $field->wrapper_prefix; ?>
    <?php print $field->label_html; ?>
    <?php print $field->content; ?>
    <?php print $field->wrapper_suffix; ?>

  <?php endif; ?>

<?php endforeach; ?>

<div class="meta">
<?php foreach ($fields as $id => $field): ?>

  <?php if($id == 'field_application_civfunction'): ?>
    <span class="civic-function">
    <?php print $field->content; ?>
    </span>
  <?php endif; ?>

  <?php if($id == 'php'): ?>
    <span class="places-used">
    <?php print $field->content; ?>
    </span>  
  <?php endif; ?>
  
  <?php if($id == 'count'): ?>
    <span class="places-used">
    <?php print $field->content; ?>
    </span>  
  <?php endif; ?>

  <?php if($id == 'changed'): ?>
    <span class="date-updated">
    updated <?php print $field->content; ?>
    </span>  
  <?php endif; ?>
  
  <?php if($id == 'field_interaction_date'): ?>
    <span class="date-updated">
    <?php print $field->content; ?>
    </span>  
  <?php endif; ?>

<?php endforeach; ?>
</div>

