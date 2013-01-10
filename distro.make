; This file describes the core project requirements for Apps Catalog 7.x. Several
; patches against Drupal core and their associated issue numbers have been
; included here for reference.
;
; Use this file to build a full distro including Drupal core (with patches) and
; the Apps Catalog install profile using the following command:
;
;     $ drush make distro.make [directory]

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.18"

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch

projects[apps_catalog][type] = profile
projects[apps_catalog][download][type] = git
projects[apps_catalog][download][url] = https://github.com/nuams/apps_catalog.git
; projects[apps_catalog][download][branch] = 7.x-2.x
