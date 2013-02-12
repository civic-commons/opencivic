<?php
/**
 * @file
 * appcat_sponsor_node.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function appcat_sponsor_node_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'World Bank\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f070bb2c-4bde-421f-852d-5d3a62382e14\',
      \'nid\' => \'12\',
      \'type\' => \'sponsor\',
      \'language\' => \'und\',
      \'created\' => \'1360653086\',
      \'changed\' => \'1360653086\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9277d104-aac5-48e5-8368-07057a2070bd\',
      \'revision_timestamp\' => \'1360653086\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'73\',
            \'height\' => \'73\',
            \'uid\' => \'1\',
            \'filename\' => \'wbcube-m logo medium.gif\',
            \'uri\' => \'public://content/organizations/logos/wbcube-m logo medium.gif\',
            \'filemime\' => \'image/gif\',
            \'filesize\' => \'1316\',
            \'status\' => \'1\',
            \'timestamp\' => \'1360653086\',
            \'type\' => \'image\',
            \'uuid\' => \'248eb8bd-23fa-45bb-b452-f37dc50a97ce\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'R0lGODdhSQBJAMQAAP///+/v797e3s7Ozr29va2trZycnIyMjISEhHNzc2NjY1JSUkJCQjExMSEhIRAQEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACwAAAAASQBJAAAF/yAkjmRpnmiqrmzrvnAsz3Rt33iu7+/DIAUCYEgEDAiIhYOXcySExajUeFgyZYzCdLsdKK4uBrSIXDBOjAWCEIgKvmCUYzw0LB6whaFNHJzjJAl8AAEIeDQPCgJFB4dgD1pDhY4kkEMLEA1tAocMlAqDA1ZMDgNEBaMQCloNEAZECBAMfSKLBZgiDwdEAa08mpJwIopDBRALRQmyRbGzQ28jDIPCOMCEvseLkg8P2kPNUa27RAS+D6ZD1DUOfAOHlkVfCFHgZBAPg9+5Y38150PuRDTwBvBePgDKnMVTJYXAoUi9bLwi9I7gkDPz6GWSIqCWG3PoAs5QIAkbhDlFBv+IOAigXpQvJIk0qqTtwAx86YYN8EUMwJcEUxJOIbASQLlcBWxuvChjorGlAGaqIgrBoj6F4Y5hQ8AHTsaOMJwFwNOtSCES7Ka4LCIA172ekqxoU/YCSiwI46KcjbYm2TJJBBKYFDRUhFhKKho8E8jFwMkElBwwmHxyMmIFZ4BugQNFXYqJdOlEwTSugALEJh7oaWPsARewzsCucE3xJJcAHlMaQMBgiY8EB9AVwSN6YVWmK2I6dtUYqtq/myFoLiy9DotIuFgSkccFIfQpxhRzWeJg8Yo2uI91J959rZT02ofQRWfShPineTmK6N7S+ZRWkVA3Dl0oaHaXcFI4Jh7/F+5JwR0XIiADwHIojPNHewx1J5SG30lxRnlGqQDFElh5CEFGDHbYkG1cwEGEiEMY1l0rE6VY4ooQYAgBOirwIcJ0U4hQXBQbvpZbUEIOkUoJ5jWAAAIJPBkllHcpIOWVVPL2GJZTTjlMl1j+AUU/JgxBFSA2jJmCeZJN5uabAr0p52S+zTlnnHb2liQAZJbg44nd7Wkjf+kNqQ8EI6YAhYwQQhDgFkVuQRWHiMao6BB43FgERvw1GMWkXND1YgoW3tMdJjGluOAWsaxqIm1nnqAZXVbBoqJGmi4k4RaZWpeCeMs9+ul+HOZKxBL5ufGjfOcBAFaq74mAoBSeFiGo/xRKRVKfCdqyuIU4GBoLQGunEitbCjFlm+KuSIqrDLvKZkhhCrSBBW9KRelFgAEfHkBArUvUSK0IkfSJwkS41Kokc4SYtiRaCuxREATxpQfiuYmZOUyoxxBwWh4GvJsiw55dyue1RTw1QgMJGMBGf7MEQMABCiyJoht4gDjWC7Ex5oYwDkhMpIoCVBFNcbhEQqALE901HTSGGfRcrph4YtgYy/UcA04A+LLHXQ9wBUDAz7lqXgB7qRKASlKfLENMIlmxgDc2mQ0zkqkGQBc3BA+h1AxOjQAPL+wNfePOFjk0wjgi3YQOhQJfNfCNsUAL0CExRWRDWhOOACQhS4jmXqlHXMs0QqoGz2CNAYc0gGB4ho+GF1v95FUyDdaIcro3Z+S3FlEK6S14gLevg47wp5vCSVmSb3OcFyQwoI3mTAx+1Mp3WfOFQn8IhlaNO6FJWB0P35OAMGqU70B+UqGJEjkfx6BHSqkDIkYUBSRQ/8oJFJAP1GhCQRamIAACGPAAQfjXFKAXQBY4wVBcGMABttXA2fwgCAssQ/kqyMEOevCDIAyhCEcYgxAAADs=\',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.worldbank.org\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:summary\',
            \'schema:description\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1360653086\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'70\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/world-bank\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Civic Commons\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1bc95fd2-84ff-4c20-b821-09432138471b\',
      \'nid\' => \'16\',
      \'type\' => \'sponsor\',
      \'language\' => \'und\',
      \'created\' => \'1360653421\',
      \'changed\' => \'1360653421\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99eb98c2-d050-4eaa-b3b6-b330b6db1b5c\',
      \'revision_timestamp\' => \'1360653421\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'256\',
            \'height\' => \'101\',
            \'uid\' => \'1\',
            \'filename\' => \'CivicCommons.png\',
            \'uri\' => \'public://content/organizations/logos/CivicCommons.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'22112\',
            \'status\' => \'1\',
            \'timestamp\' => \'1360653421\',
            \'type\' => \'image\',
            \'uuid\' => \'0cb7f088-2b36-485d-a028-0cca88d37c86\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_url\' => array(),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:summary\',
            \'schema:description\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1360653421\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'74\',
        \'source\' => \'node/16\',
        \'alias\' => \'content/civic-commons\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Water and Sanitation Program\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'bc75dfc7-ea1a-407c-a17f-6933981e3c29\',
      \'nid\' => \'13\',
      \'type\' => \'sponsor\',
      \'language\' => \'und\',
      \'created\' => \'1360653166\',
      \'changed\' => \'1360653166\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a824a779-7500-43eb-99dd-0719efe6596b\',
      \'revision_timestamp\' => \'1360653166\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'188\',
            \'height\' => \'66\',
            \'uid\' => \'1\',
            \'filename\' => \'WSP.jpg\',
            \'uri\' => \'public://content/organizations/logos/WSP.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'4332\',
            \'status\' => \'1\',
            \'timestamp\' => \'1360653166\',
            \'type\' => \'image\',
            \'uuid\' => \'712d906f-e9ab-4db5-889f-4f801910cfe7\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.wsp.org/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:summary\',
            \'schema:description\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1360653166\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'71\',
        \'source\' => \'node/13\',
        \'alias\' => \'content/water-and-sanitation-program\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'UNICEF\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c3c2a1b8-5fd5-4ad9-bfe1-0801055222ea\',
      \'nid\' => \'14\',
      \'type\' => \'sponsor\',
      \'language\' => \'und\',
      \'created\' => \'1360653241\',
      \'changed\' => \'1360653241\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'c2774736-1a1b-4017-8e21-8dddc945b527\',
      \'revision_timestamp\' => \'1360653241\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'503\',
            \'height\' => \'122\',
            \'uid\' => \'1\',
            \'filename\' => \'UNICEF_logo_blue.png\',
            \'uri\' => \'public://content/organizations/logos/UNICEF_logo_blue.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'29323\',
            \'status\' => \'1\',
            \'timestamp\' => \'1360653241\',
            \'type\' => \'image\',
            \'uuid\' => \'41722f02-a93f-41d6-8751-3144bf853409\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'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\',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.unicef.org/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:summary\',
            \'schema:description\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1360653241\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'72\',
        \'source\' => \'node/14\',
        \'alias\' => \'content/unicef\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Bill & Melinda Gates Foundation\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'2\',
      \'promote\' => \'1\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'7d22333e-cb3d-4572-8545-fd2f918cd324\',
      \'nid\' => \'15\',
      \'type\' => \'sponsor\',
      \'language\' => \'und\',
      \'created\' => \'1360653336\',
      \'changed\' => \'1360653336\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ef19933b-12c9-4799-b3ac-89bcfc5a8540\',
      \'revision_timestamp\' => \'1360653336\',
      \'revision_uid\' => \'1\',
      \'body\' => array(),
      \'field_logo\' => array(
        \'und\' => array(
          array(
            \'fid\' => NULL,
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'300\',
            \'height\' => \'60\',
            \'uid\' => \'1\',
            \'filename\' => \'BMGF.jpg\',
            \'uri\' => \'public://content/organizations/logos/BMGF.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'9228\',
            \'status\' => \'1\',
            \'timestamp\' => \'1360653336\',
            \'type\' => \'image\',
            \'uuid\' => \'283b1218-1e2c-493e-92de-36ac6ad52827\',
            \'rdf_mapping\' => array(),
            \'node_export_file_data\' => \'/9j/4QAYRXhpZgAASUkqAAgAAAAAAAAAAAAAAP/sABFEdWNreQABAAQAAAA8AAD/4QNyaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wLwA8P3hwYWNrZXQgYmVnaW49Iu+7vyIgaWQ9Ilc1TTBNcENlaGlIenJlU3pOVGN6a2M5ZCI/PiA8eDp4bXBtZXRhIHhtbG5zOng9ImFkb2JlOm5zOm1ldGEvIiB4OnhtcHRrPSJBZG9iZSBYTVAgQ29yZSA1LjAtYzA2MSA2NC4xNDA5NDksIDIwMTAvMTIvMDctMTA6NTc6MDEgICAgICAgICI+IDxyZGY6UkRGIHhtbG5zOnJkZj0iaHR0cDovL3d3dy53My5vcmcvMTk5OS8wMi8yMi1yZGYtc3ludGF4LW5zIyI+IDxyZGY6RGVzY3JpcHRpb24gcmRmOmFib3V0PSIiIHhtbG5zOnhtcFJpZ2h0cz0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3JpZ2h0cy8iIHhtbG5zOnhtcE1NPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvbW0vIiB4bWxuczpzdFJlZj0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL3NUeXBlL1Jlc291cmNlUmVmIyIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bXBSaWdodHM6TWFya2VkPSJGYWxzZSIgeG1wTU06RG9jdW1lbnRJRD0ieG1wLmRpZDo5N0JDNjJCODI0NDkxMUUyOUUyQThENDlCQ0ZGODIwQSIgeG1wTU06SW5zdGFuY2VJRD0ieG1wLmlpZDo5N0JDNjJCNzI0NDkxMUUyOUUyQThENDlCQ0ZGODIwQSIgeG1wOkNyZWF0b3JUb29sPSJBZG9iZSBQaG90b3Nob3AgQ1MzIFdpbmRvd3MiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0idXVpZDoyQ0UwNUFGNjE5NjdEQzExQUI2RkE4OTlERTNEMkVBNyIgc3RSZWY6ZG9jdW1lbnRJRD0idXVpZDoyQkUwNUFGNjE5NjdEQzExQUI2RkE4OTlERTNEMkVBNyIvPiA8L3JkZjpEZXNjcmlwdGlvbj4gPC9yZGY6UkRGPiA8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\',
          ),
        ),
      ),
      \'field_url\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.gatesfoundation.org/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'schema:Organization\',
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'schema:summary\',
            \'schema:description\',
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'schema:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
          \'type\' => \'rel\',
        ),
        \'field_url\' => array(
          \'predicates\' => array(
            \'schema:url\',
          ),
        ),
        \'field_logo\' => array(
          \'predicates\' => array(
            \'schema:logo\',
          ),
          \'type\' => \'rel\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1360653336\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'subscriptions_notify\' => TRUE,
      \'path\' => array(
        \'pid\' => \'73\',
        \'source\' => \'node/15\',
        \'alias\' => \'content/bill-melinda-gates-foundation\',
        \'language\' => \'und\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
