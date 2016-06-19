<?php
/**
 * @file
 * hk_agent_central.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hk_agent_central_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_after_email_activity_saved'] = entity_import('rules_config', '{ "rules_send_email_after_email_activity_saved" : {
      "LABEL" : "Send Email after email activity saved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "hk" ],
      "REQUIRES" : [ "rules", "pet", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "crm-core-activity" ],
            "type" : "crm_core_activity",
            "bundle" : { "value" : { "email" : "email" } }
          }
        },
        { "entity_has_field" : { "entity" : [ "crm-core-activity" ], "field" : "field_activity_notes" } },
        { "entity_has_field" : {
            "entity" : [ "crm-core-activity:field-recipient" ],
            "field" : "field_e_mail"
          }
        }
      ],
      "DO" : [
        { "pet_action_send_pet" : {
            "pet_name" : "general_email_message",
            "to_text" : [ "crm-core-activity:field-recipient:primary-email" ],
            "to_account" : [ "" ],
            "account_subs" : [ "" ],
            "node_subs" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_send_general_email'] = entity_import('rules_config', '{ "rules_send_general_email" : {
      "LABEL" : "Send general Email",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "pet" ],
      "USES VARIABLES" : {
        "contact" : { "label" : "contact", "type" : "crm_core_contact" },
        "user" : { "label" : "user", "type" : "user" }
      },
      "ACTION SET" : [
        { "pet_action_send_pet" : {
            "pet_name" : "general_email_message",
            "to_text" : "[contact:primary-email]",
            "to_account" : [ "" ],
            "account_subs" : [ "user" ],
            "node_subs" : [ "" ]
          }
        },
        { "entity_create" : {
            "USING" : {
              "type" : "crm_core_activity",
              "param_type" : "email",
              "param_title" : "Email verschickt"
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Erstellte Entit\\u00e4t" } }
          }
        },
        { "list_add" : {
            "list" : [ "entity-created:field-activity-participants" ],
            "item" : [ "contact" ],
            "unique" : "1",
            "pos" : "start"
          }
        }
      ]
    }
  }');
  return $items;
}
