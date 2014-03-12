(function ($) {

Drupal.behaviors.rpxUIProfileFields = {
  attach: function (context, settings) {
    $('.rpx-field-select', context).once('rpx-field-select', function() {
      var mid = getMID(this);
      var map = settings.map;
      var rpx_fields = settings.rpx_fields;

      this.initialValue = this.options[0].text;
      $(this).val(map[mid].fid);

      // Display the Engage datafield path in the label below the dropdown.
      $(this).bind('change keyup', function () {
        var fid = $(this).val();
        var path = fid in rpx_fields ? rpx_fields[fid].path : this.initialValue;
        $(this).siblings('.description').html(path);
      });

      // Trigger the above event on initial pageload to update the label.
      $(this).trigger('change', false);
    });

    $('.field-select', context).once('field-select', function() {
      // Save the call to action option.
      this.initialValue = this.options[0].text;
    });

    $('.field-bundle-select', context).once('field-bundle-select', function() {
      var sets = settings.catalog;
      var setDropdown = $('.field-set-select', $(this).parents('tr').eq(0));
      var fieldDropdown = $('.field-select', $(this).parents('tr').eq(0));

      this.initialValue = this.options[0].text;

      // User selected a bundle, populate the field select input so that they
      // can choose a field (that belongs to the selected bundle).
      $(this).bind('change keyup', function () {
        var selectedSet = setDropdown[0].options[setDropdown[0].selectedIndex].value;
        var selectedBundle = this.options[this.selectedIndex].value;
        var fields = sets[selectedSet].bundles[selectedBundle].fields;
        var options = {};

        $.each(fields, function (field) {
            options[field] = fields[field];
        });

        options = $.isEmptyObject(options) ? [] : options;
        fieldDropdown.rpxUIPopulateOptions(options);
      });
    });

    $('.field-set-select', context).once('field-set-select', function() {
      var mid = getMID(this);
      var sets = settings.catalog;
      var map = settings.map;
      var bundleDiv = $('.field-bundle-select', $(this).parents('tr').eq(0)).parents('div').eq(0);
      var bundleDropdown = $('.field-bundle-select', $(this).parents('tr').eq(0));
      var fieldDropdown = $('.field-select', $(this).parents('tr').eq(0));

      this.initialValue = this.options[0].text;

      // Populate the set select input, so that the user has something to work
      // with. If the field is already mapped, preselect the set.
      var options = {'' : this.initialValue};

      $.each(sets, function(set) {
        options[set] = sets[set].title;
      });

      var selected = map[mid].set;
      $(this).rpxUIPopulateOptions(options, selected);

      // Disable the bundle and field select inputs. This is done for the sake
      // of unmapped fields only; for the mapped ones, these conrols will be
      // updated to reflect the mapping (see below).
      bundleDropdown.rpxUIPopulateOptions([]);
      fieldDropdown.rpxUIPopulateOptions([]);

      // React to the user's selection.
      $(this).bind('change keyup', function () {
        var selectedSet = this.options[this.selectedIndex].value;

        if (!selectedSet) {
          // Disable the bundle and field select inputs, and show the
          // bundle select input in case it was hidden before.
          bundleDropdown.rpxUIPopulateOptions([]);
          fieldDropdown.rpxUIPopulateOptions([]);
          bundleDiv.show();
        }
        else if (sets[selectedSet].bundles['']) {
          // If the field set has no notion of bundles, hide the
          // bundle select input.
          bundleDiv.hide();
          // User should proceed to selecting a field, populate the field
          // select dropdown for them.
          var fields = sets[selectedSet].bundles[''].fields;
          var options = {};

          $.each(fields, function(field) {
              options[field] = fields[field];
          });

          options = $.isEmptyObject(options) ? [] : options;
          // If the (Engage) field is mapped, preselect the (Drupal) field
          // it is mapped to.
          var selected = (map[mid].set == selectedSet) ? map[mid].field : '';
          fieldDropdown.rpxUIPopulateOptions(options, selected);
        }
        else {
          bundleDiv.show();
          // User should now select a bundle, so populate the bundle select
          // input for them.
          var bundles = sets[selectedSet].bundles;
          var options = {};

          $.each(bundles, function (bundle) {
              options[bundle] = bundles[bundle].title;
          });

          options = $.isEmptyObject(options) ? [] : options;
          // If the (Engage) field is mapped, preselect the bundle for the
          // Drupal field it is mapped to.
          var selected = (map[mid].set == selectedSet) ? map[mid].bundle : '';
          bundleDropdown.rpxUIPopulateOptions(options, selected);

          // Populating the bundle select input automatically preselects
          // one of the bundles, therefore we should also populate the
          // field select input with the (pre)selected bundle contents.
          var selectedBundle = bundleDropdown[0].options[bundleDropdown[0].selectedIndex].value;
          var fields = sets[selectedSet].bundles[selectedBundle].fields;
          var options = {};

          $.each(fields, function (field) {
              options[field] = fields[field];
          });

          options = $.isEmptyObject(options) ? [] : options;
          // If the (Engage) field is mapped, preselect the (Drupal) field
          // it is mapped to.
          var selected = (map[mid].set == selectedSet && map[mid].bundle == selectedBundle) ? map[mid].field : '';
          fieldDropdown.rpxUIPopulateOptions(options, selected);
        }
      });
      // Trigger change on initial pageload to get the right selection in
      // bundle and field selects when field set comes pre-selected (for
      // existing mappings and on failed validation).
      $(this).trigger('change', false);
    });
  }
};

/**
 * Populates options in a select input
 * (shamelessly stolen from modules/field_ui/field_ui.js).
 */
jQuery.fn.rpxUIPopulateOptions = function (options, selected) {
  return this.each(function () {
    var disabled = false;

    if (options.length == 0) {
      options = [this.initialValue];
      disabled = true;
    }

    // If possible, keep the same widget selected when changing field type.
    // This is based on textual value, since the internal value might be
    // different (options_buttons vs. node_reference_buttons).
    var previousSelectedText = this.options[this.selectedIndex].text;

    var html = '';
    jQuery.each(options, function (value, text) {
      // Figure out which value should be selected. The 'selected' param
      // takes precedence.
      var is_selected = ((typeof selected != 'undefined' && value == selected) || (typeof selected == 'undefined' && text == previousSelectedText));
      html += '<option value="' + value + '"' + (is_selected ? ' selected="selected"' : '') + '>' + text + '</option>';
    });

    $(this).html(html).attr('disabled', disabled ? 'disabled' : '');
  });
};

/**
 * Return the mapping ID for the element's row.
 */
function getMID(element) {
  var classList = $(element).attr('class').split(/\s+/);
  var mid = "";

  $.each(classList, function(index, item) {
    if (item.substr(0,4) == 'mid-') {
        mid = item.substr(4);
        return false;
    }
  });

  if (mid) {
    return mid;
  }
  else {
    throw 'rpx_ui.js getMID(): element\'s class list does not contain a mid.';
  }
}

Drupal.behaviors.rpxPathTree = {
  attach: function (context, settings) {
    $('table.rpx-path-tree', context).once('rpx-path-tree', function () {
      $(this).treeTable();
    });
  }
};

Drupal.behaviors.rpxPathInsert = {
  attach: function (context, settings) {
    Drupal.settings.rpxPathInput = $('.rpx-path-input', context).eq(0);

    $('.rpx-path-click-insert .rpx-path', context).once('rpx-path-click-insert', function() {
      var newThis = $('<a href="javascript:void(0);" title="' + Drupal.t('Insert this path into your form') + '">' + $(this).html() + '</a>').click(function() {
        Drupal.settings.rpxPathInput.val($(this).text());
        // Compensation for the toolbar's height.
        var scrollCorrection = $('#toolbar') ? $('#toolbar').height() + 120 : 0;
        $('html,body').animate({scrollTop: $('.rpx-field-title-input').offset().top - scrollCorrection}, 500);
        return false;
      });

      $(this).html(newThis);
    });
  }
};

})(jQuery);
