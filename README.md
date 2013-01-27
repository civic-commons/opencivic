Apps Catalog 2.x for Drupal 7.x
----------------------------
Get started building with Drupal fast.

Apps Catalog is a basic distribution meant to capture elements that are generally
useful and make building Drupal sites and Drupal distributions easier.

Apps Catalog helps site builders

- use install profiles and drush make for defining projects
- manage the dev > staging > live workflow problem using Features and
  exportables
- keep track of important upstream patches that are critical to Drupal
  distributions


Requirements
------------
In addition to the standard Drupal requirements you will need the following to
make use of Apps Catalog:

- drush 3.1 - http://drupal.org/project/drush
- drush make 2.0 beta 9 - http://drupal.org/project/drush_make
- git - http://git-scm.com


Getting started
---------------
Apps Catalog for 7.x requies several patches to be applied to Drupal core. It
provides a `distro.make` file for building a full Drupal distro including core
patches as well as a copy of the `apps_catalog` install profile.

1. Grab the `distro.make` file from Apps Catalog and run:

        $ drush make distro.make [directory]

   or use its url on Drupal.org directly:

        $ drush make "http://drupalcode.org/project/apps_catalog.git/blob_plain/refs/heads/7.x-2.x:/distro.make" [directory]

2. Choose the "Apps Catalog" install profile when installing Drupal


Extending Apps Catalog
-------------------
Site builders can use Apps Catalog as a starting point for their own install
profiles. Basic steps for creating a new install profile called `myprofile` that
extends Apps Catalog:

1. Create the following directory and files:

        profiles/myprofile
        profiles/myprofile/distro.make
        profiles/myprofile/myprofile.info
        profiles/myprofile/myprofile.make
        profiles/myprofile/myprofile.install

2. Enter an include statement into `distro.make` to include the contents of the
  Apps Catalog distro makefile and then add your new install profile to it:

        ; Include Apps Catalog distro makefile via URL
        includes[] = http://drupalcode.org/project/apps_catalog.git/blob_plain/refs/heads/7.x-2.x:/distro.make

        ; Add myprofile to the full Drupal distro build
        projects[myprofile][type] = profile
        projects[myprofile][download][type] = git
        projects[myprofile][download][url] = git://github.com/myname/myprofile.git

3. Enter an include statement into `myprofile.make` to include the contents of
  the Apps Catalog install profile makefile and then add any additional projects
  or overrides:

        ; Include Apps Catalog install profile makefile via URL
        includes[] = http://drupalcode.org/project/apps_catalog.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

        projects[feeds][version] = 2.0-alpha1
        projects[job_scheduler][version] = 2.0-alpha1
        ...

  For more information about using makefiles see the [drush make README][1].

4. Copy the contents of `apps_catalog.info` into `myprofile.info` and then adjust
  its contents to reflect the metadata, modules and theme you want to enable.
  For example:

        name = My First Drupal Distro
        core = 6.x
        description = Hello world!

        dependencies[] = feeds
        ...

5. Implement `hook_install()` in `myprofile.install` to do any other setup
  tasks for your install profile:

        <?php

        function myprofile_install() {
          theme_enable(array('stark'));
          variable_set('theme_default', 'stark');
        }

6. Build a full distro using the following command from `profiles/myprofile`:

        $ drush make distro.make [directory]

7. Choose "My First Drupal Distro" when installing Drupal!


Maintainers
-----------
- Sheldon Rampton


[1]: http://drupalcode.org/project/drush_make.git/blob_plain/refs/heads/6.x-2.x:/README.txt
