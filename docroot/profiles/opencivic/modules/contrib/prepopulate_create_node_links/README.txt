Description
===========
Enables an "Add new @content_type" in the node links section on nodes which can
be "Entity Reference" field values to nodes that can reference them. The
generated URL contains a query paramter that is used by "Entity Reference
Prepopulate".

Install
=======
1. Download and enable the module.
2. Visit admin/structure/types/manage/[ENTITY-TYPE]/fields/[FIELD-NAME]
3. Enable "Entity reference prepopulate node links" under the instance settings.

Configuration
=============
Enable Entity reference prepopulate node links:
  Check this to enable Entity reference prepopulate node links on this field.
Content Types
  Select the content types that should show an "Add an @this_type" link.

Usage
=====
All use cases are covered by the configuration of the "Entitry Reference" field.

Examples:
We have 2 content types. TypeA & TypeB. TypeB has an Entity Reference field to
TypeA. When viewing a node of TypeA, a link after the main content shows
"Add new TypeB". Following the link, brings you to the add TybeB node form with
the Entity Reference field prepopulated to point to TypeA.
