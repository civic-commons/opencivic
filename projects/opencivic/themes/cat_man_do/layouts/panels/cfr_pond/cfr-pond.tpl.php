<?php
/**
 * @file
 * Template for Panopoly cfr-pond.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>

<div class="panel-display cfr-pond clearfix <?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <div class="cfr-pond-container cfr-pond-header clearfix panel-panel">
    <div class="cfr-pond-container-inner cfr-pond-header-inner panel-panel-inner">
      <?php print $content['header']; ?>
    </div>
  </div>
  
  <div class="cfr-pond-container cfr-pond-column-content cfr-pond-column-content-row1 clearfix">
    <div class="cfr-pond-column-content-region cfr-pond-column cfr-pond-column1 panel-panel">
      <div class="cfr-pond-column-content-region-inner cfr-pond-column-inner cfr-pond-column1-inner panel-panel-inner">
        <?php print $content['column1']; ?>
      </div>
    </div>
    <div class="cfr-pond-column-content-region cfr-pond-column cfr-pond-column2 panel-panel">
      <div class="cfr-pond-column-content-region-inner cfr-pond-column-inner cfr-pond-column2-inner panel-panel-inner">
        <?php print $content['column2']; ?>
      </div>
    </div>
    <div class="cfr-pond-column-content-region cfr-pond-column cfr-pond-column3 panel-panel">
      <div class="cfr-pond-column-content-region-inner cfr-pond-column-inner cfr-pond-column3-inner panel-panel-inner">
        <?php print $content['column3']; ?>
      </div>
    </div>
  </div>

  <div class="cfr-pond-container cfr-pond-middle clearfix panel-panel">
    <div class="cfr-pond-container-inner cfr-pond-middle-inner panel-panel-inner">
      <?php print $content['middle']; ?>
    </div>
  </div>
  
  <div class="cfr-pond-container cfr-pond-secondary-column-content cfr-pond-column-content-row2 clearfix">
    <div class="cfr-pond-secondary-column-content-region cfr-pond-column cfr-pond-secondary-column1 panel-panel">
      <div class="cfr-pond-secondary-column-content-region-inner cfr-pond-column-inner cfr-pond-secondary-column1-inner panel-panel-inner">
        <?php print $content['secondarycolumn1']; ?>
      </div>
    </div>
    <div class="cfr-pond-secondary-column-content-region cfr-pond-column cfr-pond-secondary-column2 panel-panel">
      <div class="cfr-pond-secondary-column-content-region-inner cfr-pond-column-inner cfr-pond-secondary-column2-inner panel-panel-inner">
        <?php print $content['secondarycolumn2']; ?>
      </div>
    </div>
    <div class="cfr-pond-secondary-column-content-region cfr-pond-column cfr-pond-secondary-column3 panel-panel">
      <div class="cfr-pond-secondary-column-content-region-inner cfr-pond-column-inner cfr-pond-secondary-column3-inner panel-panel-inner">
        <?php print $content['secondarycolumn3']; ?>
      </div>
    </div>
  </div>
  
  <div class="cfr-pond-container cfr-pond-footer clearfix panel-panel">
    <div class="cfr-pond-container-inner cfr-pond-footer-inner panel-panel-inner">
      <?php print $content['footer']; ?>
    </div>
  </div>
  
</div><!-- /.cfr-pond -->
