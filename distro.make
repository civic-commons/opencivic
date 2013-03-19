; This file describes the core project requirements for OpenCivic 7.x. Several
; patches against Drupal core and their associated issue numbers have been
; included here for reference.
;
; Use this file to build a full distro including Drupal core (with patches) and
; the OpenCivic install profile using the following command:
;
;     $ drush make distro.make [directory]

api = 2
core = 7.x

projects[drupal][type] = core
projects[drupal][version] = "7.21"

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch
; Maximum execution time error in installation profile
; http://drupal.org/node/1887924
projects[drupal][patch][1887924] = http://drupal.org/files/max_execution_error-1887924-1.patch
; Remove file_attach_load() from file_field_update()
; http://drupal.org/node/995156
projects[drupal][patch][985642] = http://drupal.org/files/field-attach-load-entity-original-985642-58.patch

projects[opencivic][type] = profile
projects[opencivic][download][type] = git
projects[opencivic][download][url] = http://git.drupal.org/project/opencivic.git
projects[opencivic][download][branch] = 7.x-1.x
