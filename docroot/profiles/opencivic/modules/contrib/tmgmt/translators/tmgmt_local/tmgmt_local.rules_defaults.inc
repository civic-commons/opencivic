<?php

/*
 * @file
 * Contains default rules.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tmgmt_local_default_rules_configuration() {
  $data = '{ "rules_tmgmt_local_task_assign_to_me" : {
      "LABEL" : "Assign Translation Task To Me",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt_local" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "task" : { "label" : "Task", "type" : "tmgmt_local_task" } },
      "DO" : [
        { "tmgmt_local_rules_task_assign" : { "task" : [ "task" ], "user" : [ "site:current-user" ] } }
      ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;

  $data = ' { "rules_tmgmt_local_task_assign" : {
      "LABEL" : "Assign Translation Task",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "task" : { "label" : "Task", "type" : "tmgmt_local_task" },
        "translator" : { "label" : "Translator", "type" : "user" }
      },
      "DO" : [
        { "tmgmt_local_rules_task_assign" : {
            "task" : [ "task" ],
            "translator" : [ "translator" ]
          }
        }
      ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;

  $data = ' { "rules_tmgmt_local_task_unassign" : {
      "LABEL" : "Unassign Translation Task",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt_local" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "task" : { "label" : "Task", "type" : "tmgmt_local_task" } },
      "DO" : [ { "tmgmt_local_rules_task_unassign" : { "task" : [ "task" ] } } ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;

  return $configs;
}
