<?php
/**
 * @file
 * appcat_misc_default_content.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function appcat_misc_default_content_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => 'World Bank',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'f070bb2c-4bde-421f-852d-5d3a62382e14',
  'type' => 'sponsor',
  'language' => 'und',
  'created' => '1360653086',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '9277d104-aac5-48e5-8368-07057a2070bd',
  'revision_uid' => '1',
  'body' => array(),
  'field_logo' => array(
    'und' => array(
      0 => array(
        'fid' => '36',
        'alt' => '',
        'title' => '',
        'width' => '73',
        'height' => '73',
        'uid' => '1',
        'filename' => 'wbcube-m logo medium.gif',
        'uri' => 'public://content/organizations/logos/wbcube-m logo medium.gif',
        'filemime' => 'image/gif',
        'filesize' => '1316',
        'status' => '1',
        'timestamp' => '1360653086',
        'type' => 'image',
        'uuid' => '248eb8bd-23fa-45bb-b452-f37dc50a97ce',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.worldbank.org',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'subscriptions_notify' => TRUE,
  'date' => '2013-02-12 01:11:26 -0600',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Civic Commons',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '1bc95fd2-84ff-4c20-b821-09432138471b',
  'type' => 'sponsor',
  'language' => 'und',
  'created' => '1360653421',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => '99eb98c2-d050-4eaa-b3b6-b330b6db1b5c',
  'revision_uid' => '1',
  'body' => array(),
  'field_logo' => array(
    'und' => array(
      0 => array(
        'fid' => '40',
        'alt' => '',
        'title' => '',
        'width' => '256',
        'height' => '101',
        'uid' => '1',
        'filename' => 'CivicCommons.png',
        'uri' => 'public://content/organizations/logos/CivicCommons.png',
        'filemime' => 'image/png',
        'filesize' => '22112',
        'status' => '1',
        'timestamp' => '1360653421',
        'type' => 'image',
        'uuid' => '0cb7f088-2b36-485d-a028-0cca88d37c86',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_url' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'subscriptions_notify' => TRUE,
  'date' => '2013-02-12 01:17:01 -0600',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Water and Sanitation Program',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'bc75dfc7-ea1a-407c-a17f-6933981e3c29',
  'type' => 'sponsor',
  'language' => 'und',
  'created' => '1360653166',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'a824a779-7500-43eb-99dd-0719efe6596b',
  'revision_uid' => '1',
  'body' => array(),
  'field_logo' => array(
    'und' => array(
      0 => array(
        'fid' => '37',
        'alt' => '',
        'title' => '',
        'width' => '188',
        'height' => '66',
        'uid' => '1',
        'filename' => 'WSP.jpg',
        'uri' => 'public://content/organizations/logos/WSP.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '4332',
        'status' => '1',
        'timestamp' => '1360653166',
        'type' => 'image',
        'uuid' => '712d906f-e9ab-4db5-889f-4f801910cfe7',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.wsp.org/',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'subscriptions_notify' => TRUE,
  'date' => '2013-02-12 01:12:46 -0600',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'UNICEF',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => 'c3c2a1b8-5fd5-4ad9-bfe1-0801055222ea',
  'type' => 'sponsor',
  'language' => 'und',
  'created' => '1360653241',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'c2774736-1a1b-4017-8e21-8dddc945b527',
  'revision_uid' => '1',
  'body' => array(),
  'field_logo' => array(
    'und' => array(
      0 => array(
        'fid' => '38',
        'alt' => '',
        'title' => '',
        'width' => '503',
        'height' => '122',
        'uid' => '1',
        'filename' => 'UNICEF_logo_blue.png',
        'uri' => 'public://content/organizations/logos/UNICEF_logo_blue.png',
        'filemime' => 'image/png',
        'filesize' => '29323',
        'status' => '1',
        'timestamp' => '1360653241',
        'type' => 'image',
        'uuid' => '41722f02-a93f-41d6-8751-3144bf853409',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.unicef.org/',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'subscriptions_notify' => TRUE,
  'date' => '2013-02-12 01:14:01 -0600',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => 'Bill & Melinda Gates Foundation',
  'log' => '',
  'status' => '1',
  'comment' => '2',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '7d22333e-cb3d-4572-8545-fd2f918cd324',
  'type' => 'sponsor',
  'language' => 'und',
  'created' => '1360653336',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'ef19933b-12c9-4799-b3ac-89bcfc5a8540',
  'revision_uid' => '1',
  'body' => array(),
  'field_logo' => array(
    'und' => array(
      0 => array(
        'fid' => '39',
        'alt' => '',
        'title' => '',
        'width' => '300',
        'height' => '60',
        'uid' => '1',
        'filename' => 'BMGF.jpg',
        'uri' => 'public://content/organizations/logos/BMGF.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => '9228',
        'status' => '1',
        'timestamp' => '1360653336',
        'type' => 'image',
        'uuid' => '283b1218-1e2c-493e-92de-36ac6ad52827',
        'rdf_mapping' => array(),
      ),
    ),
  ),
  'field_url' => array(
    'und' => array(
      0 => array(
        'url' => 'http://www.gatesfoundation.org/',
        'title' => NULL,
        'attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'schema:Organization',
      1 => 'sioc:Item',
      2 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'schema:summary',
        1 => 'schema:description',
        2 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'schema:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
      'type' => 'rel',
    ),
    'field_url' => array(
      'predicates' => array(
        0 => 'schema:url',
      ),
    ),
    'field_logo' => array(
      'predicates' => array(
        0 => 'schema:logo',
      ),
      'type' => 'rel',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'name' => 'admin',
  'picture' => '0',
  'data' => 'a:1:{s:7:"contact";i:1;}',
  'subscriptions_notify' => TRUE,
  'date' => '2013-02-12 01:15:36 -0600',
);
  return $nodes;
}
