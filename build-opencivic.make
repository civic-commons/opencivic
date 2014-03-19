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

includes[] = drupal-org-core.make

projects[opencivic][type] = profile
projects[opencivic][download][type] = git
projects[opencivic][download][url] = http://git.drupal.org/project/opencivic.git
projects[opencivic][download][branch] = 7.x-2.x
