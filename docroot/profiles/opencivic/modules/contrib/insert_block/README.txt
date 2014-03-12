OVERVIEW
--------
Sidebar blocks contain all sorts of nifty stuff, but sometimes you want to stick that stuff into the body of your node. Instead of using PHP snippets (a possible security hole on public sites), you can use this module. When it's activated...

[block:<name of module>=<delta of block>]

...will insert the contents of a rendered sidebar block into the body of your node. If no delta is specified, the default block for that module will be displayed.

INSTALLATION
------------
You may want to read the PERFORMANCE NOTE, below, before installing.

To install Insert Block, drop it into your modules folder and turn it on.
Then enable the Insert Block filter for the input formats in which you want
to use Insert Block tags. To do this, click the configure link for an input
format at /admin/settings/filters and then enable the filter. 

IMPORTANT SECURITY NOTE: in the input format filter settings you will want
to check the "Check the roles assigned by the Block module" checkbox if you 
want Insert Block to honor the Block module's role access settings for the 
blocks you insert.

USAGE
-----

Insert Block is intended for use in node content areas but may also be useful
anywhere Drupal's filters are enabled. It works by intercepting the content
stream, detecting that a block request has been made ([block:user=1] for 
example) and inserting the results of the block specified into the HTML stream.

Determining a Block's Delta

You can determine the "module" and "delta" by going to the /admin/build/block
page for administering blocks. In the list of blocks, you'll see a "configure"
link for each row. If you hover your mouse over the configure link, and look in
the status bar at the bottom of your browser, you'll see a URL similar to the 
following: http://localhost/admin/build/block/configure/user/0. In that URL, the
"user" is the module, and the "0" is the delta. In this instance we're looking 
at the user login block. If you look at the navigation block, you'll see 
something like http://localhost/admin/build/block/configure/user/1. Modules can
define more than one block, thus the delta is simply a numbering scheme.

In the case of user created blocks, the "block" module will be the owning 
module. The trick of hovering over the configure links works for these blocks,
too.

PEFORMANCE NOTE
---------------
Previous versions of Insert Block for Drupal 4.7 and Drupal 5 were pseudo-
filters, meaning they used hook_nodeapi to perform replacements. With the
Drupal 6.x version of Insert Block we've converted to be a regular filter
module. One side effect of this is that we turn off caching for the input
format to which the Insert Block filter is applied. This is necesary for
the proper display of dynamic blocks - unfortunately it can mean a
performance hit. Because of this it is recommended you not apply the Insert
Block filter to your default format and instead create a special input format
just for Insert Block.

UPGRADING
---------
In versions of Drupal before 6.x, you didn't actually have to apply the Insert
Block filter to an input format due to the reasons described in the
section above. In Drupal 6.x, though, you now _do_ have to do this. See above 
for more info and be sure to run upgrade.php.
