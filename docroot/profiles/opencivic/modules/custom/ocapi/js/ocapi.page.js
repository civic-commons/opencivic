/**
 * @file
 * Main JS file for the OpenCivic API documentation page.
 */

// Namespace $ for jQuery
(function($) {

/**
 * Drupal behavior for the documentation page.
 */
Drupal.behaviors.ocAPIDocPage = {
  attach: function(context, settings) {
    $('body').once('cc-api-toc', function() {
      // Hack around a full content container
      $('#region-content').addClass('grid-16')
        .addClass('grid-11');
        
      // UI Tabs
      $('.children-tabs').each(function() {
        $children = $(this);
        
        // Get each h4 element and make a tab
        var $tabList = $('<ul class="children-tabs-list"></ul>');
        $('h4', $children).each(function() {
          var $item = $('<li></li>');
          var $link = $('<a>')
            .text($(this).text())
            .attr('href', '#' + $(this).parent().attr('id'));
          $item.append($link);
          $tabList.append($item);
        });
        
        // Add list and then tab it up.
        $children.prepend($tabList);
        $children.tabs();
      });
    });
  }
};
	
})(jQuery);