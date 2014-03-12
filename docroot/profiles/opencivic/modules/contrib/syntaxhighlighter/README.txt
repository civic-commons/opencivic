
INSTALLATION
-------------

Step 1) Download the latest Syntax highlighter javascript library from
http://alexgorbatchev.com/, extract the content and place the entire directory
inside any of the following directories:

  -  sites/all/libraries
       Recommended. This is Drupal's standard third party library install location.
  -  profiles/{profilename}/libraries
       Recommended if this library is to be profile specific.
  -  Site-file-directory-path
       usually sites/<site_domain>/files. This location is not recommended.
       Only use this if you for some reason need to run different versions of
       the syntaxhighlighter library for different sites in your multi-site install.
  -  Inside the syntaxhighlighter module directory
       This is not recommended. It's only for backward compability.

Library directory can be nested in any sub-directory of any name **except 'src'**.
Do not use the 'src' directory name to store the library.

After install, you should have something like this:
       
  sites/all/libraries/syntaxhighlighter_3.0.83/...
  
Note: If you want the toolbar with options to view source and flash-based copy
to clipboard, you will need to use the older 2.x version. See http://alexgorbatchev.com/
for details.

       
WARNING!
-------
Library location is determined by file scan. This scan is performed only once
and the location is cached. If the library location is changed for any reason
(such as after upgrading the js lib), visit admin/reports/status to force a
re-scan and make sure the "Syntax highlighter js library" status entry shows
"Installed".

Step 2) Enable the syntaxhighlighter module.


SETUP
-----

Enable the Syntaxhighlighter filter in a text format where you want to
highlight code using the syntaxhighlighter filter.  You do not need to enable
the Syntaxhighlighter filter in any text format that do not do HTML filtering
(e.g. Full HTML)

IMPORTANT! Place the filters in the following relative ordering positions:

+ Limit allowed HTML tags filter (or Wysiwyg filter or whatever HTML filter you use)
+ Syntax highlighter
+ Line break converter (Autop)


CONFIGURATION
-------------

Go to admin/config/content/syntaxhighlighter to configure.


USAGE
-----

Mark up code with as specified in http://alexgorbatchev.com/.

NOTE: you must make sure your markup is proper HTML. This means if your code
have any HTML tags or entities in them, you need to change the '<' character
to '&lt;' (e.g. <script> to &lt;script>), convert '&' in any HTML entity to
'&amp;' (e.g. &gt; to &amp;gt;).


About AJAX Usage
----------------

On Ajax update, call Drupal.attachBehaviors(context) where context
is the element you have updated.

Known problem:

Autoloader and Ajax will not work if the brush is not already used on the page
when the page is first loaded. For example: if on the page, there is no 'cpp'
code block, then you ajax update some 'cpp' code block, then you will get "brush
not found" error.

If you need to do Ajax, it's probably best to not use autoloader.
