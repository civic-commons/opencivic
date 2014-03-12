TMGMT Local Translator
----------------------

A user interface to execute the actual translation of TMGMT source elements.
Includes management capabilities for handling translations and users.

Requirements
------------

Local Translator is a translation plugin for TMGMT and is included in TMGMT core.

Basic Concepts
--------------

Acts as a translator plugin for TMGMT. Can be used to do manual local
translation. In addition it offers some management capabilities to handle the
assignment of jobs to users.

The local translator adds two permissions:

- Provide translation services

  The user can assign jobs to himself (assuming he has the right skills) and
  execute the translation. Adds a 'Translate' link to the User menu.

- Administer translation tasks

  Assign jobs to other users for translation. Adds a 'Manage Translate Tasks'
  to the User Menu.


Getting started
---------------

In TMGMT, a translation job can be sent to the local translator. In the checkout
settings, the plugin offers the possibility to assign the job to a specific user.
Only users with the required language skills are listed at this moment. If no
person is selected, the job will be moved to the 'unassigned' task list for later
treatment.

Following the 'Translate' link in the User Menu, the user finds a listing
of the tasks assigned to him as well as eligible tasks to assign to himself,
depending on his skills. Assigned tasks will show a 'translate' link in the
action column. Follow it to get a list of the task items to be translated.
Choose to translate one item to get to the actual translation page.

It lists two panes for each data item contained in the task item. One showing
the text in the original language. The second one for writing in the translation.
Each line sports a check button to its right. Once the translation is done, the
data item can be checked off as complete. This check is purely informational
and has no functional consequences.

A translation task item can be saved at any time for later rework. It will show
up as pending or translated depending on the state of the check mark for each
item.

Once the data items are all translated, the 'Save as completed' button will
finalize the task and send it back to TMGMT core for further processing. Please
note: Completing a task item is independent of the state of the checkboxes.
