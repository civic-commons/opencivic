
Description
-----------
Another CCK module to provide a phone number field type.

Main differences cck_phone from Phone (CCK) phone.module are:
- Single CCK widget instead of ever growing CCK widget per country
- Supports all/multiple countries in one CCK field
- Covers almost all country codes (239 on last count) out of the box, with generic phone number validation
- Includes all countries codes or select your own list of countries
- Custom country specific phone numbers validation & formatting
- Custom country validation can be turned off, configurable per field
- Better tel link support (RFC3966) or mobile support - iPhone, Android, iPad, Opera Mobile/Mini, etc.


Prerequisites
-------------
The cck_phone.module requires the content.module to be installed.


Installation
------------
To install, copy the cck_phone directory and all its contents to your modules directory.
To enable this module, go to Administer > Modules, and enable Phone Number.


Themable
--------
theme_phone_number($element)
- FAPI theme for an individual phone number elements.

theme_phone_number_extension($extension = '')
- Theme function for phone extension

theme_cck_phone_formatter_default($element)
- Theme function for 'default' or global phone number field formatter.

theme_cck_phone_formatter_local($element)
- Theme function for 'local' phone number field formatter.

theme_cck_phone_mobile_tel($element, $phone = '')
- Theme function for mobile tel.


Todo Tasks: (Contribution is welcome!)
-----------
- D7 port using Field API
- migration option from phone.module
- phone types (home, work, mobile, fax, etc) support
- simpletest

Ongoing Tasks:
--------------
- add validation support to all country phone numbers
- translation of the module


Bugs/Features/Patches:
----------------------
If you want to report bugs, feature requests, or submit a patch, please do so at the project page on the Drupal web site.
http://drupal.org/project/cck_phone


Credits
-------
Initially sponsored by forDrupal.com
