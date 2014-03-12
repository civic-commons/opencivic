jQuery(function($) {
  $('#edit-syntaxhighlighter-use-autoloader').click(function() {
    if (this.checked) {
      $('#edit-syntaxhighlighter-enabled-languages input[name^="syntaxhighlighter_enabled_languages"]').each(function() { this.checked = true; });
    }
  });
});