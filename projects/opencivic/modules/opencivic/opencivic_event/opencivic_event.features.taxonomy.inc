<?php
/**
 * @file
 * opencivic_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function opencivic_event_taxonomy_default_vocabularies() {
  return array(
    'oc_event_type' => array(
      'name' => 'Event type',
      'machine_name' => 'oc_event_type',
      'description' => 'For use in classifying events.',
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
