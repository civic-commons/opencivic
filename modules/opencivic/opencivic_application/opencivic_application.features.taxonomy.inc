<?php
/**
 * @file
 * opencivic_application.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opencivic_application_taxonomy_default_vocabularies() {
  return array(
    'oc_application_category' => array(
      'name' => 'Application function',
      'machine_name' => 'oc_application_category',
      'description' => 'The technical function of the software.',
      'hierarchy' => 0,
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
