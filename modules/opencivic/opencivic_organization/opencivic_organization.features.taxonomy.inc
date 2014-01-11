<?php
/**
 * @file
 * opencivic_organization.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opencivic_organization_taxonomy_default_vocabularies() {
  return array(
    'civic_category' => array(
      'name' => 'Civic sector',
      'machine_name' => 'civic_category',
      'description' => 'The public service provided by the software.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
