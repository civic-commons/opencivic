Mail Editor
===========

This module provides the ability to customize e-mail templates for mail sent
out using drupal_mail(). On multi-language sites it supports all available
languages.

Users with the 'Administer mail templates' permission may go to
admin/config/system/mail-edit, where they find a list of all templates that
can be customized.

To add Mail Editor support to a third-party module, refer to the
modules/mail_edit.user.inc file, which shows how Mail Editor support was
added to the User core module. Any module defining those three hooks
automatically appears in Mail Editor.
