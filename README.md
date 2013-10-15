OpenCivic for Drupal 7.x
========================

Introduction
------------
The OpenCivic distro of Drupal is designed to support communities of software developers in creating, cataloguing and sharing software applications. It is based on Code for America's [Civic Commons project](http://commons.codeforamerica.org/), which was created as a platform for sharing information specifically about "civic software" used by governments and nonprofit organizations to provide public services. The main goal of this distro therefore is to help build websites that enable people to share information about software applications — what they do, who created them and uses them, where they have been deployed, and how well the software works.


Requirements
------------
In addition to the standard Drupal requirements you will need the following to
make use of OpenCivic:

- drush 3.1 - http://drupal.org/project/drush
- drush make 2.0 beta 9 - http://drupal.org/project/drush_make
- git - http://git-scm.com


Getting started
---------------
OpenCivic for 7.x requires several patches to be applied to Drupal core. It
provides a `build-distro.make` file for building a full Drupal distro including core
patches as well as a copy of the `opencivic` install profile.

1. Grab the `distro.make` file from OpenCivic and run:

        $ drush make build-distro.make [directory]

   or use its url on Drupal.org directly:

        $ drush make "http://drupalcode.org/project/opencivic.git/blob_plain/refs/heads/7.x-2.x:/distro.make" [directory]

2. Choose the "OpenCivic" install profile when installing Drupal


Extending OpenCivic
-------------------
Site builders can use OpenCivic as a starting point for their own install
profiles. Basic steps for creating a new install profile called `myprofile` that
extends OpenCivic:

1. Create the following directory and files:

        profiles/myprofile
        profiles/myprofile/distro.make
        profiles/myprofile/myprofile.info
        profiles/myprofile/myprofile.make
        profiles/myprofile/myprofile.install

2. Enter an include statement into `distro.make` to include the contents of the
  OpenCivic distro makefile and then add your new install profile to it:

        ; Include OpenCivic distro makefile via URL
        includes[] = http://drupalcode.org/project/opencivic.git/blob_plain/refs/heads/7.x-2.x:/distro.make

        ; Add myprofile to the full Drupal distro build
        projects[myprofile][type] = profile
        projects[myprofile][download][type] = git
        projects[myprofile][download][url] = git://github.com/myname/myprofile.git

3. Enter an include statement into `myprofile.make` to include the contents of
  the OpenCivic install profile makefile and then add any additional projects
  or overrides:

        ; Include OpenCivic install profile makefile via URL
        includes[] = http://drupalcode.org/project/opencivic.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

        projects[feeds][version] = 2.0-alpha1
        projects[job_scheduler][version] = 2.0-alpha1
        ...

  For more information about using makefiles see the [drush make README][1].

4. Copy the contents of `opencivic.info` into `myprofile.info` and then adjust
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
