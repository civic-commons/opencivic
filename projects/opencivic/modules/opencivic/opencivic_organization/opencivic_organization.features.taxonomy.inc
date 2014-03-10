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
    'oc_organization_type' => array(
      'name' => 'Organization type',
      'machine_name' => 'oc_organization_type',
      'description' => 'Is this a company, an NGO, a government agency?',
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
