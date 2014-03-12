<?php

/*
 * @file
 * Contains default rules.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tmgmt_node_ui_default_rules_configuration() {
  $data = '{ "tmgmt_node_ui_request_translation" : {
      "LABEL" : "Request translation",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt" ],
      "USES VARIABLES" : { "nodes" : { "label" : "Nodes", "type" : "list\u003Cnode\u003E" } },
      "DO" : [
        { "tmgmt_get_first_from_node_list" : {
            "USING" : { "list" : [ "nodes" ] },
            "PROVIDE" : { "first_node" : { "first_node" : "Node" } }
          }
        },
        { "tmgmt_rules_create_job" : {
            "USING" : { "source_language" : [ "first-node:language" ] },
            "PROVIDE" : { "job" : { "job" : "Job" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "nodes" ] },
            "ITEM" : { "node" : "Node" },
            "DO" : [
              { "tmgmt_rules_job_add_item" : {
                  "job" : [ "job" ],
                  "plugin" : "node",
                  "item_type" : "node",
                  "item_id" : [ "node:nid" ]
                }
              }
            ]
          }
        },
        { "tmgmt_rules_job_checkout" : { "job" : [ "job" ] } }
      ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;
  return $configs;
}
