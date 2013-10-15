api=2
core=7.x

projects[drupal][type] = core
projects[drupal][version] = "7.23"

; Use vocabulary machine name for permissions
; http://drupal.org/node/995156
projects[drupal][patch][995156] = http://drupal.org/files/issues/995156-5_portable_taxonomy_permissions.patch
; Maximum execution time error in installation profile
; http://drupal.org/node/1887924
projects[drupal][patch][1887924] = http://drupal.org/files/max_execution_error-1887924-1.patch
