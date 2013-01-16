<?php
/**
 * @file
 * appcat_misc_taxonomy_app_terms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function appcat_misc_taxonomy_app_terms_taxonomy_default_vocabularies() {
  return array(
    'application_category' => array(
      'name' => 'Application category',
      'machine_name' => 'application_category',
      'description' => 'A small number of high-level terms (4-7) describing the technical function of the software.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
    'application_subcategory' => array(
      'name' => 'Application subcategory',
      'machine_name' => 'application_subcategory',
      'description' => 'A longer list of terms describing the technical function of the software.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
