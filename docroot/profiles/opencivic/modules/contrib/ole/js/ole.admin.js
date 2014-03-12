/**
 * @file
 * Javascript for OL UI Admin
 *
 * @ingroup openlayers
 */

// Namespace jQuery
(function ($) {

/**
 * Drupal behaviors for OpenLayers UI form.
 */
Drupal.behaviors.ole_admin = {
  'attach': function(context, settings) {
    $('.ole-version-check-message').once('ole-version-check-message', function() {
      // Determine version
      var version = 'unavailable';
      var $thisContainer = $(this);

      if (typeof OpenLayers != 'undefined' && 
          typeof OpenLayers.Editor != 'undefined' &&
          OpenLayers.Editor.hasOwnProperty('VERSION_NUMBER')) {
        version = OpenLayers.Editor.VERSION_NUMBER;
      }

      // Mark as loading, then do AJAX request
      $thisContainer.addClass('throbbing');
      var url = settings.basePath + '?q=admin/structure/openlayers/editor/callbacks/version_check/' + version;
      $.ajax({
        url: url,
        success: function(data) {
          $thisContainer.removeClass('throbbing');
          $thisContainer.html(data.response);
          if (data.status == 'valid') {
            $thisContainer.parent()
              .removeClass('warning')
              .addClass('status');
          }
          else {
            $thisContainer.parent()
              .removeClass('status')
              .addClass('warning');
          }
        },
        error: function(data) {
          $thisContainer.removeClass('throbbing');
          $thisContainer.html(Drupal.t('Error making request to server.'));
        }
      });
    });
  }
};

})(jQuery);
