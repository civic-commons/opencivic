<?php
/**
 * @file
 * appcat_search_db.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function appcat_search_db_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function appcat_search_db_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function appcat_search_db_default_search_api_index() {
  $items = array();
  $items['apps_cat_db_nodes_index'] = entity_import('search_api_index', '{
    "name" : "apps_cat_db_nodes_index",
    "machine_name" : "apps_cat_db_nodes_index",
    "description" : null,
    "server" : "apps_cat_db_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "title" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_additional_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_civic_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_civic_sub_cate" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_keywords" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_member" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_related_applications" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_services" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_application_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_application_sub_cate" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_contributor" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_creator" : { "type" : "integer", "entity_type" : "node" },
        "field_license" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_requirements" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_software_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_add_deployment_for" : { "type" : "integer", "entity_type" : "node" },
        "search_api_language" : { "type" : "string" },
        "body:value" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function appcat_search_db_default_search_api_server() {
  $items = array();
  $items['apps_cat_db_server'] = entity_import('search_api_server', '{
    "name" : "apps_cat_db_server",
    "machine_name" : "apps_cat_db_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "apps_cat_db_nodes_index" : {
          "type" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_title",
            "type" : "string",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_additional_type" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_additional_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_civic_category" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_civic_category",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_civic_sub_cate" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_civic_sub_cate",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_keywords" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_keywords",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_member" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_member",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_related_applications" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_related_application",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_services" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_services",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_application_category" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_application_categor",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_application_sub_cate" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_application_sub_cat",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_contributor" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_contributor",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_creator" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_creator",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_license" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_license",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_requirements" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_requirements",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_software_type" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_software_type",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_add_deployment_for" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_field_add_deployment_for",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_apps_cat_db_nodes_index_status",
            "type" : "boolean",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
