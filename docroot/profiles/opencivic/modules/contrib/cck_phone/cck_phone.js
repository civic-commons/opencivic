(function ($) {
  Drupal.PhoneNumber = Drupal.PhoneNumber || {};

  /**
   * Filters checkboxes based on their label.
   * This code is shamelessly taken from checkbox_filter
   */
  Drupal.PhoneNumber.filter = function() {
    var field = $(this);
    var checkboxes = field.parent().parent().find('.form-checkboxes .form-item');
    var found = false;
    var label = "";
    var option = null;
    for (var i = 0; i < checkboxes.length; i++) {
      option = checkboxes.eq(i);
      label = Drupal.PhoneNumber.trim(option.text());
      if (label.toUpperCase().indexOf(field.val().toUpperCase()) < 0) {
        option.hide();
      } else {
        option.show();
      }
    }
  };

  /**
   * Trims whitespace from strings
   */
  Drupal.PhoneNumber.trim = function(str) {
	  var	str = str.replace(/^\s\s*/, ''),
		  ws = /\s/,
		  i = str.length;
	  while (ws.test(str.charAt(--i)));
	  return str.slice(0, i + 1);
  };

  /**
   * Check/Uncheck all checkboxes
   */
  Drupal.PhoneNumber.checkall = function(e) {
    var field = $(this);
    var checkboxes = $('.form-checkboxes .form-item:visible .form-checkbox', field.parent().parent());

    var checked = (field.text() == Drupal.t('Select all'));
    if (checked) {
      checkboxes.attr('checked', true);
      field.text(Drupal.t('Deselect all'));
    }
    else {
      checkboxes.attr('checked', false);
      Drupal.PhoneNumber.checkDefault();
      field.text(Drupal.t('Select all'));
    }
  };

  /**
   * Country selection should include default country code by default.
   */
  Drupal.PhoneNumber.checkDefault = function(e) {
    var defaultCC = $('#edit-instance-settings-default-country').val();
    var span = $('<span class="default-cc"></span>').append(Drupal.t('Default'));

    $('.cck-phone-settings .form-checkboxes').find('.form-checkbox').each(function() {
      if ($(this).val() == defaultCC) {
        $('.cck-phone-default-country')
          .removeClass('cck-phone-default-country')
          .find('span.default-cc').remove();

        // TODO: check for "Enable default country code" only set the checkbox
        $(this)
          // .attr('checked', 'checked')
          .parents('.form-item:first')
            .addClass('cck-phone-default-country')
            .append(span);
      }
    });
  };

  /**
   * Attach a filtering textfield to checkboxes.
   */
  Drupal.behaviors.PhoneNumber = {
    attach: function(context) {
      // Ensure the new default country is checked
      $('#edit-instance-settings-default-country, .cck-phone-settings .form-checkboxes').bind('change', Drupal.PhoneNumber.checkDefault);
      $('#edit-instance-settings-default-country').trigger('change');
      $('form#field-ui-field-edit-form').submit(Drupal.PhoneNumber.checkDefault);

      // Filter for countries
      var form = '<div class="form-item container-inline">'
               + '  <label>' + Drupal.t('Filter') + ':</label> '
               + '  <input class="cck-phone-filter form-text" type="text" size="30" />'
               + '  <a class="cck-phone-check" style="margin-left: 1em;" href="javascript://">' + Drupal.t('Select all') + '</a>'
               + '</div>';

      $('.cck-phone-settings .form-checkboxes', context).before(form);
      $('input.cck-phone-filter').bind('keyup', Drupal.PhoneNumber.filter);
      $('a.cck-phone-check').bind('click', Drupal.PhoneNumber.checkall);
    }
  };
})(jQuery);