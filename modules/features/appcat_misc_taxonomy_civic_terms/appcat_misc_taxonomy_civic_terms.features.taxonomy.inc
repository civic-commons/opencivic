<?php
/**
 * @file
 * appcat_misc_taxonomy_civic_terms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function appcat_misc_taxonomy_civic_terms_taxonomy_default_vocabularies() {
  return array(
    'civic_category' => array(
      'name' => 'Civic category',
      'machine_name' => 'civic_category',
      'description' => 'A small number of high-level terms (4-7) describing the public service provided by the software.',
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
    'civic_subcategory' => array(
      'name' => 'Civic subcategory',
      'machine_name' => 'civic_subcategory',
      'description' => 'A longer list of terms describing the public service provided by the software.',
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
