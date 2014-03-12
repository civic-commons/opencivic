Install...
Normal procedure:
1) Place in modules/contrib/jump_menu
2) Enable at admin/build/modules or via drush.


Menus...
This modules runs from: any exsisting menu, from any parent item, to any depth.
Create the menu you want manually, via nodes, Taxonomy Menu, Auto Menu, etc.
A great place to easily find the menu ID number is the edit link within the
admin/build/menu area.


Placing...
This module will create a jump down block for each menu on your site.
These blocks are created to allow non-developers to make use of this module.

Additionally this module can be used by developers to place drop-down menus via
the nice clean output function. Though it's sacrilege, you can just place this
code in a block with PHP Input Format. However what you should do is create a
small module to provide the blocks you need.


Code...
jump_menu($menu, $parent, $btn = false, $maxDepth = 0, $choose = 'Select Now');

A hard coded specific menu would look something like this:
<?php
function MYMODULE_block($op = 'list', $delta = 0) {
  $menu_name = 'YOUR MENU MACHINE NAME HERE';
  if (module_exists('jump_menu')) {
    switch ($op) {
      case 'list':
        $blocks = array();
        $blocks['mymodule_' . $menu_name]['info'] = t('My Jump Menu');
        $blocks['mymodule_' . $menu_name]['cache'] = BLOCK_NO_CACHE;
        return $blocks;
        break;

      case 'view':
        $data['subject'] = t('My Jump Menu Title');
        $data['content'] = jump_menu($menu_name, 0, FALSE, 0, '-- Select destination --');
        return $data;
        break;
 
    }
  }
}
?>

Recommendations...
Admin drop downs are pretty useful, either based on the Navigation menu or
better yet one created specificly for your various editor roles.

<?php
if (module_exists('jump_menu')) {
  echo jump_menu('navigation', 18, 'Go!', 0, 'Manage the Site');
}
