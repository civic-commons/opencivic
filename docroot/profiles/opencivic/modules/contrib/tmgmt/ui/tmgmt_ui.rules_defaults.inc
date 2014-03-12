<?php

/*
 * @file
 * Contains default rules.
 */

/**
 * Implements hook_default_rules_configuration().
 */
function tmgmt_ui_default_rules_configuration() {
  $data = '{ "rules_tmgmt_job_accept_translation" : {
      "LABEL" : "Accept Translation",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt" ],
      "USES VARIABLES" : { "job" : { "label" : "Job", "type" : "tmgmt_job" } },
      "DO" : [ { "tmgmt_rules_job_accept_translation" : { "job" : [ "job" ] } } ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;
  $data = '{ "rules_tmgmt_job_cancel_translation" : {
      "LABEL" : "Cancel Translation",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "tmgmt" ],
      "USES VARIABLES" : { "job" : { "label" : "Job", "type" : "tmgmt_job" } },
      "DO" : [ { "tmgmt_rules_job_cancel_translation" : { "job" : [ "job" ] } } ]
    }
  }';
  $rule = rules_import($data);
  $configs[$rule->name] = $rule;
  return $configs;
}
