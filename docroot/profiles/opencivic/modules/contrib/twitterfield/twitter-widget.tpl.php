<?php
/**
 * @var $type
 *  Allowed values are 'profile', 'list', and 'search'.
 *
 * @var $value
 *  The value depends on the $type parameter.
 *  - 'profile' or 'search': a string.  Search strings should be escaped to
 *    be safe to insert within a javascript string variable.
 *  - 'list': an array containing the user and list names.
 *  Usernames for 'profile' and 'list' should not contain the preceding '@'.
 *
 * @var $title
 *  (optional) Title for the widget.  This string should be escaped to
 *  be safe to insert within a javascript string variable.
 *
 * @var $subject
 *   (optional) Subject for the widget.  This string should be escaped to
 *  be safe to insert within a javascript string variable.
 */

if ($type == 'profile') {
  $widget_chain = ".setUser('" . $value . "')";
}
elseif ($type == 'list') {
  $widget_chain = ".setList('" . $value[0] . "', '" . $value[1] . "')";
}
?>

<script src="http://widgets.twimg.com/j/2/widget.js"></script>
<script>
new TWTR.Widget({
  version: 2,
  type: '<?php print $type; ?>',
<?php
    if ($type == 'search') {
      print "  search: '" . $value . "',\n";
    }

    if (!empty($title)) {
      print "  title: '" . $title . "',\n";
    }
    if (!empty($subject)) {
      print "  subject: '" . $subject . "',\n";
    }
?>
  rpp: 5,
  interval: 6000,
  width: 'auto',
  height: 300,
  theme: {
    shell: {
      background: '#BFD6EF',
      color: '#787879'
    },
    tweets: {
      background: '#BFD6EF',
      color: '#787879',
      links: '#eb9807'
    }
  },
  features: {
    scrollbar: false,
    loop: false,
    live: false,
    hashtags: true,
    timestamp: true,
    avatars: false,
    behavior: 'all'
  }
}).render()<?php print empty($widget_chain)? '' : $widget_chain; ?>.start();
</script>
