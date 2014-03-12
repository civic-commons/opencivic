/* $Id: README.txt,v 1.4 2011/01/09 06:22:40 sun Exp $ */

-- SUMMARY --

Compact Forms presents text fields for selected forms in a more compact fashion
using jQuery.

The form item/element fields are overlaid with their respective labels.  When
the user focuses a field the label fades away nicely, and if the field is left
empty the label fades back in again.

By default, only the user login block is switched to compact style, but the
behavior can be added to any form by adding the corresponding CSS ids to the
Compact Forms configuration.

For a full description of the module, visit the project page:
  http://drupal.org/project/compact_forms

To submit bug reports and feature suggestions, or to track changes:
  http://drupal.org/project/issues/compact_forms


-- REQUIREMENTS --

* None.


-- INSTALLATION --

* Install as usual, see http://drupal.org/node/70151 for further information.


-- CONFIGURATION --

* Configure forms to display compact in Administration » Configuration »
  User interface » Compact Forms.


-- CUSTOMIZATION --

* To programmatically disable the compact forms behavior on a particular form,
  set the following property on the $form element in your form constructor
  function or via hook_form_alter():

    $form['#compact_forms'] = FALSE;


-- CONTACT --

Current maintainers:
* Daniel F. Kudwien (sun) - http://drupal.org/user/54136

Previous maintainers:
* Tom Sundström (tomsun) - http://drupal.org/user/63478

This project has been sponsored by:
* UNLEASHED MIND
  Specialized in consulting and planning of Drupal powered sites, UNLEASHED
  MIND offers installation, development, theming, customization, and hosting
  to get you started. Visit http://www.unleashedmind.com for more information.

