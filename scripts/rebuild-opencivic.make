api = 2
core = 7.x

; Include distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic.make"
projects[drupal][version] = "7.25"

; DKAN
projects[dkan][type] = profile
projects[dkan][download][type] = git
projects[dkan][download][url] = http://git.drupal.org/project/dkan_dataset.git
projects[dkan][download][branch] = 7.x-1.x

Field Group
projects[field_group][subdir] = dkan
projects[field_group][version] = 1.4

; Entity Reference
; projects[entityreference][version] = 1.1
; projects[entityreference][subdir] = dkan
