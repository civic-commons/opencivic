<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (!$label_hidden) : ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>&nbsp;</div>
  <?php endif; 
  if((($element['#field_name']=='field_application_description')||($element['#field_name']=='field_desc')||($element['#field_name']=='field_organization_decs'))&&isset($items[0])&&empty($items[0]['#markup'])){
	$items[0]['#markup']=t('No Description added yet.').'<span class="add-data-button"><a href="/node/'.arg(1).'/edit">'.t('Add one').'</a></span>';
  }
  
  ?>
  
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item) : ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php 
		print render($item); 
	  ?></div>
    <?php endforeach; ?>
  </div>
</div>
<?php 
global $app_in_act;
if($element['#field_name']=='field_application_tutors' && $app_in_act==0){?>
	<div class="edit-content-button"><?php print t(''); ?>
<?php }
if($element['#field_name']=='field_videos' && $app_in_act==0){?>
	<div class="edit-content-button"><?php print t(''); ?>
<?php }
if($element['#field_name']=='field_application_description'){ ?>
<div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#edit-field-application-description"><?php print t('+ edit description');?></a></div>
<?php }
if($element['#field_name']=='field_desc'){ ?>
<div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#field-desc-add-more-wrapper"><?php print t('+ edit description');?></a></div>
<?php }
if($element['#field_name']=='field_organization_decs'){ ?>
<div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#edit-field-organization-decs"><?php print t('+ edit description');?></a></div>

<?php }
if($element['#field_name']=='field_application_tutors'){?>
<div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#edit-field-application-screenshots"><?php print t('+ add a photo or video');?></a></div>
<?php }
if($element['#field_name']=='field_videos'){?>
<div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#edit-field-screenshots"><?php print t('+ add a photo or video');?></a></div>
<?php }  
if($element['#field_name']=='field_application_featurs'){?>
<div class="region-content field"><div class="edit-content-button"><a href="/node/<?php print arg(1);?>/edit#edit-field-application-featurs"><?php print t('+ edit key features');?></a></div></div><?php }

?>

