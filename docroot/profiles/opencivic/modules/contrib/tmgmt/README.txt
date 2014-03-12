Translation Management Tool (tmgmt)
-------------------------------------

A collection of tools to facilitate the translation of text elements in Drupal.

Requirements
------------------

Translation Management Tool was built for Drupal 7. There will be no backport.

To use Translation Management Tool you need to install and activate the
following modules:

 * Entity API
 * Views
 * Chaos Tools (Required for Views)
 * Views Bulk Operations
 * Content Translation
 * Locale
 * Rules

Optional dependencies:
 * Internationalization/i18n
   (Only necessary for i18n_string translation)
 * Entity Translation (only for entity sources)

Basic concepts
------------------

With TMGMT installed, the 'translate' tab of a node changes. You can choose
one or more languages to translate the node to and 'Request a translation' with
the corresponding button.

A translation job is created for each language chosen. It will run through the
following states:

Unprocessed     Translation requested in the 'translate' tab of a node.
                Settings of the job (label set, translator chosen) defined.
                The job was saved.
Active          The job is in the process of being translated. Depending on
                the chosen translator, the actual translation happens auto-
                matically or by a human being.
                In all cases the job is returned to the job queue for review.
                When the review is done, the status of the job item goes from
                'needs review' to 'accepted'.
Finished        The job has been accepted and the translated node was created

The project also provides overviews for the supported sources that allow to
translate multiple pieces of content (job items) in a single job and see the
current translation status for your site content.

Getting started
------------------

The first simple translation job using Microsoft's translation service.

1) Preparation

- Make sure you have downloaded all of the listed dependencies.
- Define a second language using locale
- Modify one content type to be multilingual. Choose 'Enabled, with translation'
  from the Publishing Options / Multilingual support.

2) Set up Translation Management Tool

- Download tmgmt module
- Download tmgmt_microsoft module
- Enable the following modules, this will also include all dependencies
  - Translation Management UI
  - Content translation Source UI
  - Microsoft Translator
- A translator has been automatically created. Go to the Translator management
  page at:

    Configuration > Regional and language > Translation Management Translators

  Adjust the label to your liking and get a client ID and client secret using
  the provided link in the settings. Then save the updated translator.

- Adjust the Auto Acceptance settings to your liking. You can choose to accept
  jobs without review by checking  'Auto accept finished translations' for each
  of your translators individually.

3) Translate

- Create a new piece of content of the multilingual content type defined before.
  Make sure to choose a language.
- Once the node has been saved, click on the "Translate" tab.
- Choose the language you want to translate the node to with the checkbox.
- Click on 'Request Translation' and the foreign language version of the node
  will be created immediately.
- If the auto acceptance is not set, find the job in the jobs queue and choose
  the 'review' link. Accept the translation and the translated node is created.
- Check the translated node!

For further options, see the documentation on http://drupal.org/node/1445790.

Features
----------

This projects consists of 3 major parts. The starting point are the sources,
which expose translatable content like nodes, other entities and i18n strings.

On the other side are the so called translators, which are responsible for
getting the requested sources translated.

The core system combine these two parts and provide the ability to create,
manage and review translation jobs.

The main features of the core system include:

- Creation of translations and managing their progress
- Review of returned translations, ability to request revisions and communicate
  with the translator if supported.
- Translation overviews that allow to see which content is available in which
  language and what translation jobs are currently ongoing.
- The same information is provided on the translate tab of the supported
  sources.
- A suggestions system that makes recommendations about related content that
  could be translated with the same job.
- Sources can declare which parts of a source text should not be translated,
  for example placeholders for user interface strings.

The following sources are currently supported:

- Content Translation
  Integrates with the core translation module to translate nodes.

- Entity Translation
  Integrates with the entity_translation module that allows to translate fields
  on any entity type.

- Internationalization (i18n)
  Integrates with the i18n project (http://drupal.org/project/i18n) and allows
  to translate various configuration elements of a site: blocks, terms, fields,
  node types, contact categories and many more.

- Locale
  Allows to translate locale strings. Currently limited to the default
  textgroup (user interface strings passed through t()).

Two translators are included in the project:

- File translator
  Allows to export jobs into files and import them once they have been
  translated. Contains a pluggable system to support various file formats,
  currently XLIFF and HTML.

- Local Translator
  The local translator allows to manage translators on your own site so that
  they can translate your content in a central place and defined workflows.
  Together with the TMGMT Server, it can be used to build your own translation
  server. Check the Hermes installation profile for more information:
  http://drupal.org/project/hermes

Translators in separate projects:

- Microsoft Translator
  Machine translation using Microsoft's Bing translation.
  http://drupal.org/project/tmgmt_microsoft.

- Google
  Machine translation using Google Translate.
  Moved to http://drupal.org/project/tmgmt_google.

- Gengo (Previously named MyGengo)
  Human translation that integrates with http://www.gengo.com.
  http://drupal.org/project/tmgmt_mygengo.

- Supertext
  Human translation that integrates with http://www.supertext.ch.
  http://drupal.org/project/tmgmt_supertext.

- Nativy
  Human translation that integrates with http://www.nativy.com.
  http://drupal.org/project/tmgmt_nativy.

- One Hour Translation
  Human translation that integrates with http://www.onehourtranslation.com.
  http://drupal.org/project/tmgmt_oht
