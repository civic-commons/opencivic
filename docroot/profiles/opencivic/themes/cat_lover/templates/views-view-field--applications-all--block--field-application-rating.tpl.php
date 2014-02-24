<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php 
  $pattern = '|<div class="clearfix">([\d]+)/([\d]+)</div>|i';
  preg_match_all($pattern, $output, $match);
  foreach ($match[0] as $key => $value) {
    $average = $match[1][$key];
    $count = $match[2][$key];
    $output = str_replace($value, '<div class="clearfix"><span class="hackathon-rating-avg">' . $average . '</span>/' . 
    '<span class="hackathon-rating-count">' . $count . '</span></div>', $output);
  }
  print $output;
?>