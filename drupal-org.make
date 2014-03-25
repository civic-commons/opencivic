api = 2
core = 7.x

; Modules =====================================================================

; The Panopoly Foundation

projects[panopoly_core][version] = 1.1
projects[panopoly_core][subdir] = panopoly
; projects[panopoly_core][patch][1962642] = http://drupal.org/files/1962642-defaultconfig.undefinedindex-2.patch

projects[panopoly_images][version] = 1.1
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.1
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.1
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.1
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.1
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.1
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.1
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.1
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.1
projects[panopoly_search][subdir] = panopoly


; OpenCivic modules

projects[apps_compatible][subdir] = contrib
projects[apps_compatible][version] = 1.0-alpha3

projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[openidadmin][subdir] = contrib
projects[openidadmin][version] = 1.0

projects[addanother][subdir] = "contrib"
projects[addanother][version] = "2.1"

; Patched to support devel_generate integration
projects[addressfield][subdir] = "contrib"
projects[addressfield][version] = "1.0-beta5"

projects[addressfield_tokens][subdir] = "contrib"
projects[addressfield_tokens][version] = 1.3

projects[addtoany][subdir] = "contrib"
projects[addtoany][version] = 4.4

projects[admin_menu][subdir] = "contrib"

projects[auto_entitylabel][subdir] = "contrib"
projects[auto_entitylabel][version] = 1.2

; Since auto_entitylabel is intended to be a replacement for
; auto_nodetitle, we should probably deprecate this.
projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"

projects[autocomplete_deluxe][subdir] = "contrib"
projects[autocomplete_deluxe][version] = 2.0-beta3

projects[better_exposed_filters][subdir] = "contrib"
projects[better_exposed_filters][version] = "3.0-beta3"

projects[block_class][subdir] = "contrib"
projects[block_class][version] = 2.1

projects[calendar][subdir] = "contrib"
projects[calendar][version] = "3.4"

projects[compact_forms][subdir] = "contrib"
projects[compact_forms][version] = 1.0

projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.0-beta2"

projects[cck_phone][subdir] = "contrib"
projects[cck_phone][version] = "1.x-dev"
projects[cck_phone][download][type] = "git"
projects[cck_phone][download][url] = "http://git.drupal.org/project/cck_phone.git"
projects[cck_phone][download][revision] = 61ccc9fb055f2eefa29e8d654ec2794ecb32b119
projects[cck_phone][download][branch] = 7.x-1.x
projects[cck_phone][type] = "module"

projects[conditional_fields][subdir] = "contrib"
projects[conditional_fields][version] = "3.x-dev"
projects[conditional_fields][download][type] = "git"
projects[conditional_fields][download][url] = "http://git.drupal.org/project/conditional_fields.git"
projects[conditional_fields][download][revision] = cd29b003a592d375f3fdb4c46f5639d0f26ed0be
projects[conditional_fields][download][branch] = 7.x-3.x
projects[conditional_fields][type] = "module"

projects[connector][version] = 1.0-beta2
projects[connector][subdir] = contrib

projects[content_taxonomy][subdir] = "contrib"
projects[content_taxonomy][version] = "1.0-beta1"

projects[context][subdir] = "contrib"

projects[cer][subdir] = "contrib"
projects[cer][version] = "1.x-dev"
projects[cer][download][type] = "git"
projects[cer][download][url] = "http://git.drupal.org/project/cer.git"
projects[cer][download][revision] = 98a59bb024ad955cb02667b5009cc564dbb25416
projects[cer][download][branch] = 7.x-1.x
projects[cer][type] = "module"

projects[colorbox][version] = "2.x"
projects[colorbox][subdir] = "contrib"
projects[colorbox][download][type] = "git"
projects[colorbox][download][url] = "http://git.drupal.org/project/colorbox.git"
projects[colorbox][download][branch] = 7.x-2.x
projects[colorbox][type] = "module"

projects[date_ical][subdir] = "contrib"
projects[date_ical][version] = "1.1"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[delta][subdir] = "contrib"
projects[delta][version] = "3.0-beta11"

projects[email][subdir] = "contrib"
projects[email][version] = "1.2"

projects[entity_translation][subdir] = "contrib"
projects[entity_translation][version] = 1.0-beta3

projects[entityreference_prepopulate][subdir] = "contrib"
projects[entityreference_prepopulate][version] = "1.1"

projects[extlink][subdir] = "contrib"
projects[extlink][version] = 1.13

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = 1.0-beta1

projects[features][subdir] = "contrib"
projects[features][version] = 2.0

projects[feeds][subdir] = "contrib"
projects[feeds][version] = 2.0-alpha8

projects[field_group][subdir] = "contrib"
projects[field_group][version] = 1.3

projects[styles][subdir] = "contrib"
projects[styles][version] = "2.0-alpha8"

projects[fivestar][subdir] = "contrib"
projects[fivestar][version] = "2.0-alpha2"

projects[flag][subdir] = "contrib"
projects[flag][version] = 3.2

projects[geocoder][subdir] = contrib
projects[geocoder][version] = "1.2"

projects[geofield][subdir] = "contrib"
projects[geofield][version] = 2.0

projects[geophp][subdir] = "contrib"
projects[geophp][version] = 1.7

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.5"

projects[fontyourface][version] = 2.8
projects[fontyourface][subdir] = "contrib"

projects[google_analytics][version] = 1.4
projects[google_analytics][subdir] = "contrib"

projects[http_client][version] = 2.4
projects[http_client][subdir] = contrib

projects[honeypot][version] = 1.15
projects[honeypot][subdir] = contrib

projects[i18n][subdir] = "contrib"
projects[i18n][version] = 1.10

projects[imagecache_actions][subdir] = "contrib"
projects[imagecache_actions][version] = 1.4

projects[insert_block][subdir] = "contrib"
projects[insert_block][version] = "1.x-dev"
projects[insert_block][download][type] = "git"
projects[insert_block][download][url] = "http://git.drupal.org/project/insert_block.git"
projects[insert_block][download][revision] = be4314aef56af4b6bdf78d2f18e005c959d8cdd9
projects[insert_block][download][branch] = 7.x-1.x
projects[insert_block][type] = "module"

projects[job_scheduler][subdir] = "contrib"
projects[job_scheduler][version] = "2.0-alpha3"

projects[jump_menu][subdir] = "contrib"
projects[jump_menu][version] = "1.4"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.0-beta3"

projects[l10n_client][subdir] = "contrib"
projects[l10n_client][version] = 1.3

projects[label_help][subdir] = contrib
projects[label_help][version] = "1.0"

projects[languageicons][subdir] = "contrib"
projects[languageicons][version] = "1.0"

; Getting dev version until a new release after 1.0-beta3 is made, to get
; around https://drupal.org/node/1954942
projects[leaflet][subdir] = "contrib"
projects[leaflet][version] = 1.x-dev

projects[leaflet_more_maps][subdir] = "contrib"
projects[leaflet_more_maps][version] = 1.7

projects[link][subdir] = "contrib"
projects[link][version] = 1.1

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.3"

projects[mail_edit][subdir] = "contrib"
projects[mail_edit][version] = "1.0"
projects[mail_edit][patch][1826220] = https://drupal.org/files/mail_edit-undefined_index_path-1826220-2.patch

projects[maxlength][subdir] = "contrib"
projects[maxlength][version] = 3.0-beta1
;projects[maxlength][download][type] = "git"
;projects[maxlength][download][url] = "http://git.drupal.org/project/maxlength.git"
;projects[maxlength][download][revision] = 0fd9604a75c559fe14fe7d726211b5910f663746
;projects[maxlength][download][branch] = 7.x-3.x
;projects[maxlength][type] = "module"

projects[menu_block][subdir] = "contrib"
projects[menu_block][version] = 2.3
;projects[menu_block][download][type] = "git"
;projects[menu_block][download][url] = "http://git.drupal.org/project/menu_block.git"
;projects[menu_block][download][revision] = 32ab1cf08b729c93302455d67dd05f64ad2fc056
;projects[menu_block][download][branch] = 7.x-2.x
;projects[menu_block][type] = "module"

; References has been replaced with the Entity Reference module
; projects[references][subdir] = "contrib"
; projects[references][version] = "2.0"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.0-beta1"

; projects[nodereference_url][subdir] = "contrib"
; projects[nodereference_url][version] = "1.12"

;projects[oauth][version] = 3.1
;projects[oauth][subdir] = contrib

;projects[oauth2][version] = 1.x-dev
;projects[oauth2][subdir] = contrib
;projects[oauth2][download][type] = "git"
;projects[oauth2][download][url] = "http://git.drupal.org/project/oauth2.git"
;projects[oauth2][download][revision] = c9723e67ebe906b8eca2d7d6c2dd3bbe97093b1f
;projects[oauth2][download][branch] = 7.x-1.x
;projects[oauth2][type] = "module"

;projects[oauthconnector][version] = 1.0-beta2
;projects[oauthconnector][subdir] = contrib

projects[omega_tools][subdir] = "contrib"
projects[omega_tools][version] = "3.0-rc4"

projects[ole][subdir]  = "contrib"
projects[ole][version] = "1.0-beta3"

; Ideally this should be pulling from an official release or from a specific git commit,
; but that isn't currently feasible due to a library in a git repo that Drupal.org hasn't
; whitelisted. See http://drupal.org/node/1913594
; projects[olfp][subdir] = "contrib"
; projects[olfp][version] = "2.x-dev"
; projects[olfp][download][type] = "git"
; projects[olfp][download][url] = "http://git.drupal.org/project/olfp.git"
; projects[olfp][download][revision] = 659e7bb3b21751534efc1ba7c201c0b81d9d1e10
; projects[olfp][download][branch] = 7.x-2.x
; projects[olfp][type] = "module"

projects[potx][subdir] = "contrib"
projects[potx][version] = 1.0

projects[prepopulate][subdir] = "contrib"
projects[prepopulate][version] = "2.x-dev"
projects[prepopulate][download][type] = "git"
projects[prepopulate][download][url] = "http://git.drupal.org/project/prepopulate.git"
projects[prepopulate][download][revision] = 8789036e8abd0d9e9f183031575f35eef05b0c72
projects[prepopulate][download][branch] = 7.x-2.x
projects[prepopulate][type] = "module"

projects[prepopulate_create_node_links][subdir] = contrib
projects[prepopulate_create_node_links][download][type] = "git"
projects[prepopulate_create_node_links][download][url] = "http://git.drupal.org/sandbox/hazah/1488826.git"
projects[prepopulate_create_node_links][download][revision] = 4dc5dd7a6b90c6423428336a15b5f0592aa45ad0
projects[prepopulate_create_node_links][download][branch] = 7.x-1.x
projects[prepopulate_create_node_links][type] = "module"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = 1.10

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-rc1"

projects[references_dialog][subdir] = "contrib"
projects[references_dialog][version] = "1.0-alpha4"
projects[references_dialog][patch][1856978] = http://drupal.org/files/references_dialog-1856978-2.patch

projects[rpx][subdir] = "contrib"
projects[rpx][version] = 2.5

projects[rules][subdir] = "contrib"
projects[rules][version] = 2.6

projects[search_api_spellcheck][subdir] = "contrib"
projects[search_api_spellcheck][version] = "1.0"

projects[services][subdir] = "contrib"
projects[services][version] = 3.5

projects[services_views][subdir] = "contrib"
projects[services_views][version] = "1.0-beta2"

projects[service_links][subdir] = "contrib"
projects[service_links][version] = 2.3-beta1

projects[stringoverrides][subdir] = "contrib"
projects[stringoverrides][version] = "1.8"

projects[subscriptions][subdir] = "contrib"
projects[subscriptions][version] = "1.1"

projects[syntaxhighlighter][subdir] = "contrib"
projects[syntaxhighlighter][version] = "2.0"

projects[taxonomy_csv][subdir] = "contrib"
projects[taxonomy_csv][version] = "5.10"

projects[taxonomy_manager][subdir] = "contrib"
projects[taxonomy_manager][version] = 1.0

projects[title][subdir] = "contrib"
projects[title][version] = "1.0-alpha7"

projects[tmgmt][subdir] = "contrib"
projects[tmgmt][version] = 1.0-beta2

projects[tmgmt_microsoft][subdir] = "contrib"
projects[tmgmt_microsoft][version] = "1.0-alpha2"

projects[translation_helpers][subdir] = "contrib"
projects[translation_helpers][version] = 1.0

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.1"

projects[twitter][subdir] = "contrib"
projects[twitter][version] = 5.8

projects[twitterfield][subdir] = "contrib"
projects[twitterfield][version] = 1.0-rc1

projects[variable][subdir] = "contrib"
projects[variable][version] = 2.3

projects[viewfield][subdir] = "contrib"
projects[viewfield][version] = "2.0"

projects[views_data_export][subdir] = "contrib"
projects[views_data_export][version] = "3.0-beta6"

projects[views_field_view][subdir] = "contrib"
projects[views_field_view][version] = 1.1

projects[views_random_seed][subdir] = "contrib"
projects[views_random_seed][version] = "1.2"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0"

projects[votingapi][subdir] = "contrib"
projects[votingapi][version] = 2.11

projects[webform][subdir] = "contrib"
projects[webform][version] = 3.19


; Schema.org kickstart modules ======================================================

; This dev release fixes a bug with devel_generate integration
projects[entityreference][version] = "1.x-dev"
projects[entityreference][subdir] = "contrib"
projects[entityreference][download][url] = "http://git.drupal.org/project/entityreference.git"
projects[entityreference][download][revision] = 06089a92ee8b269f153064ad3090ce6b464f38aa
projects[entityreference][download][branch] = 7.x-1.x
projects[entityreference][type] = "module"

projects[rdfx][version] = "2.0-alpha4"
projects[rdfx][subdir] = "contrib"

projects[field_tools][version] = "1.0-alpha3"
projects[field_tools][subdir] = "contrib"

projects[inline_entity_form][version] = 1.3
projects[inline_entity_form][subdir] = "contrib"

projects[schemaorg][version] = "1.0-beta3"
projects[schemaorg][subdir] = "contrib"
; Support Schema.org cache integration
projects[schemaorg][patch][1185978] = http://drupal.org/files/schemaorg_cache_integration-1185978-2.patch
; Fix bug affected features exports
projects[schemaorg][patch][1853590] = http://drupal.org/files/exportfix-1853590-1.patch


; Nuams modules =====================================================================

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
; projects[fivestar_green][subdir] = contrib
; projects[fivestar_green][download][type] = ""
; projects[fivestar_green][download][url] = ""
; projects[fivestar_green][type] = "module"

; Search API DB module.
projects[search_api_db][subdir] = contrib

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
; projects[subscriptions_subscribers][subdir] = contrib
; projects[subscriptions_subscribers][download][type] = ""
; projects[subscriptions_subscribers][download][url] = ""
; projects[subscriptions_subscribers][type] = "module"

; Transclude module.
projects[transclude][subdir] = contrib
projects[transclude][download][type] = "git"
projects[transclude][download][url] = "http://git.drupal.org/sandbox/sheldon/1827730.git"
projects[transclude][type] = "module"


; DKAN ========================================================================

;projects[dkan_dataset][subdir] = dkan
;projects[dkan_dataset][download][type] = git
;projects[dkan_dataset][download][tag] = 7.x-1.0-beta2
;projects[dkan_dataset][download][url] = "http://git.drupal.org/project/dkan_dataset.git"
;projects[dkan_dataset][type] = "module"

;projects[dkan_datastore][subdir] = dkan
;projects[dkan_datastore][download][type] = git
;projects[dkan_datastore][download][tag] = 7.x-1.0-beta1
;projects[dkan_datastore][download][url] = "http://git.drupal.org/project/dkan_datastore.git"
;projects[dkan_datastore][type] = "module"


; Development modules ===========================================================

projects[coder][subdir] = devel
projects[coder][version] = 1.2

projects[bundle_copy][subdir] = "devel"
projects[bundle_copy][version] = "1.1"

projects[uuid_features][version] = "1.x-dev"
projects[uuid_features][subdir] = "devel"
projects[uuid_features][download][url] = "http://git.drupal.org/project/uuid_features.git"
projects[uuid_features][download][revision] = dba29f80e743e5e22ddf035b894a9c1542bfc8cd
projects[uuid_features][download][branch] = 7.x-1.x
projects[uuid_features][type] = "module"

projects[node_export][version] = "3.x"
projects[node_export][subdir] = "devel"
projects[node_export][download][type] = "git"
projects[node_export][download][url] = "http://git.drupal.org/project/node_export.git"
projects[node_export][download][revision] = ebef56784374f977f3cfdb87f4a5ba42182b3477
projects[node_export][download][branch] = 7.x-3.x
projects[node_export][patch][1896384] = http://drupal.org/files/correct_entitity_references-1896384-4.patch
projects[node_export][type] = "module"

; Architecture module.
projects[architecture][subdir] = devel

; Entity Fields Builder module
projects[efb][subdir] = devel
projects[efb][version] = "1.x"
projects[efb][download][type] = "git"
projects[efb][download][url] = "http://git.drupal.org/project/efb.git"
projects[efb][download][revision] = 0e70d160245d9720ba4af34e66674acd03ada1a0
projects[efb][download][branch] = 7.x-1.x
projects[efb][type] = "module"

; Schema.org cache module
projects[schemaorg_cache][subdir] = devel
projects[schemaorg_cache][version] = "1.x"
projects[schemaorg_cache][download][type] = "git"
projects[schemaorg_cache][download][url] = "http://git.drupal.org/project/schemaorg_cache.git"
projects[schemaorg_cache][download][revision] = 167f480946b579d91ba9467ccdfa68c5fe0c935e
projects[schemaorg_cache][download][branch] = 7.x-1.x
projects[schemaorg_cache][type] = "module"

; Libraries =====================================================================

libraries[ole][download][type]        = file
libraries[ole][download][url]         = https://github.com/downloads/geops/ole/ole-1.0-beta3.tar.gz
libraries[ole][download][subtree]     = client

libraries[colorbox][download][type]        = get
libraries[colorbox][download][url]         = https://github.com/jackmoore/colorbox/archive/1.x.zip
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"

libraries[oauth2-php][download][type] = file
libraries[oauth2-php][download][url] = https://oauth2-php.googlecode.com/files/oauth2-php-23.tar.gz

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
; libraries[FirePHPCore][download][type] = ""
; libraries[FirePHPCore][download][url] = ""
; libraries[FirePHPCore][directory_name] = "FirePHPCore"
; libraries[FirePHPCore][type] = "library"

; geoPHP download URL taken from cm.
; libraries[geophp][download][type] = "get"
; https://github.com/phayes/geoPHP
; https://github.com/phayes/geoPHP/archive/master.zip
; https://github.com/downloads/phayes/geoPHP/geoPHP.tar.gz

; libraries[geophp][download][url] = "https://github.com/downloads/phayes/geoPHP/geoPHP.tar.gz"
; libraries[geophp][destination] = "libraries"
; libraries[geophp][directory_name] = "geophp"

;libraries[geoPHP][type] = "library"

libraries[leaflet][download][type] = "file"
libraries[leaflet][download][url] = "http://leaflet-cdn.s3.amazonaws.com/build/leaflet-0.6.4.zip"
libraries[leaflet][destination] = "libraries"
libraries[leaflet][directory_name] = "leaflet"

; JQuery Cycle Plugin download URL taken from cm.
libraries[cycle][download][type] = "get"
libraries[cycle][download][url] = "https://raw.github.com/malsup/cycle/8704578d7364ef0f24fe4927215a32a20b7eb11c/jquery.cycle.all.js"
libraries[cycle][download][filename] = "jquery.cycle.all.js"
libraries[cycle][destination] = "libraries"
libraries[cycle][directory_name] = "jquery.cycle"
; libraries[jquery.cycle][download][type] = ""
; libraries[jquery.cycle][download][url] = ""
; libraries[jquery.cycle][directory_name] = "jquery.cycle"
; libraries[jquery.cycle][type] = "library"

; OpenAcademy has this jQuery download URL:
; libraries[jquery.cycle][download][type] = get
; libraries[jquery.cycle][download][url] = https://github.com/malsup/cycle/zipball/master

; Shadowbox module has been removed anyway.
; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
; libraries[shadowbox][download][type] = ""
; libraries[shadowbox][download][url] = ""
; libraries[shadowbox][directory_name] = "shadowbox"
; libraries[shadowbox][type] = "library"

; Please fill the following out. Type may be one of get, git, bzr or svn,
; and url is the url of the download.
; libraries[syntaxhighlighter_3.0.83][download][type] = ""
; libraries[syntaxhighlighter_3.0.83][download][url] = ""
; libraries[syntaxhighlighter_3.0.83][directory_name] = "syntaxhighlighter_3.0.83"
; libraries[syntaxhighlighter_3.0.83][type] = "library"


; Themes ======================================================================

projects[tao][version] = 3.0-beta4
projects[rubik][version] = 4.0-beta8
projects[omega][version] = 3.1
projects[adaptivetheme][version] = 3.1

; projects[cat_lover][download][type] = "git"
; projects[cat_lover][download][url] = "https://github.com/NewAmsterdamIdeas/cat_lover.git"
; projects[cat_lover][type] = "theme"

