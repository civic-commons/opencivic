api = 2
core = 7.x

; Drupal
includes[] = drupal-org-core.make

; OpenCivic
projects[opencivic][type] = profile
projects[opencivic][download][type] = git
projects[opencivic][download][url] = https://github.com/civic-commons/opencivic.git
projects[opencivic][download][branch] = 7.x-2.x
; If you want to specify a version of the distro, uncomment this line and put in the correct version, e.g., 1.2, beta1, etc.
; projects[opencivic][version] = alpha1
; If you want to specify a specific commit of the distro, uncomment this line and put in the commit SHA.
; projects[opencivic][download][revision] = dabe640aae87ba137db790987c63cc0a0f9c2456
