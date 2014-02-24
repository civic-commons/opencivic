api = 2
core = 7.x

; Include distro's make file.
includes[opencivic] = "../projects/opencivic/build-opencivic.make"
projects[drupal][version] = "7.25"

; DKAN
; projects[dkan][type] = profile
; projects[dkan][download][type] = git
; projects[dkan][download][url] = http://git.drupal.org/project/dkan.git
; projects[dkan][download][branch] = 7.x-1.x
; projects[dkan][patch][2150037] = https://drupal.org/files/issues/dkan-front_group_thumbs-2150037-1.patch

; Field Group
; projects[field_group][subdir] = dkan
; projects[field_group][version] = 1.3
; projects[field_group][patch][2042681] = https://drupal.org/files/issues/field-group-show-ajax-2042681-8.patch

; Entity Reference
; projects[entityreference][version] = 1.1
; projects[entityreference][subdir] = dkan
