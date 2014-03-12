As this is the next evolution of Corresponding Node References,
I would like to say thanks for all the work done over on Corresponding Node
References. This is almost a direct upgrade from CNR to include handling of 
entities.


Description

It syncs the entity reference between two entity types which have an entity
reference to each other, so double editing entities is no longer needed. If one
entity has a reference, the other entity also receives a reference to the saved
entity if it is referenced in that entity.


Dependencies

7.x: Entity Reference


Example

Entity type A has an entity reference to entity type B and entity type B has an
entity reference to entity type A. When you create entity X of type A and
reference it to entity Y of type B entity Y will also receive an update in its
entity reference field pointing to entity X.

Known Issues

Corresponding Entity References only works with the simple mode of selecting
entities. Using a view to select which entities are able to be referenced
breaks things and causes errors.

Install

- To install enable the module at admin/build/modules
- Create entity type A
- Create entity type B
- Create a entity reference field on entity type A pointing to entity B
- Create a entity reference field on entity type B pointing to entity A
- Go to the settings page at admin/config/system/cer. 
  Select to enable the corresponding referencing for these node types pointing 
  to each other.
- Create some entities and reference them to each other