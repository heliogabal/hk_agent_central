<?php
/**
 * @file
 * hk_agent_central.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function hk_agent_central_default_crm_core_activity_type() {
  $items = array();
  $items['task'] = entity_import('crm_core_activity_type', '{
    "type" : "task",
    "label" : "Task",
    "weight" : 0,
    "activity_string" : "An agent created a task",
    "description" : "Agents can create tasks to fill their personal to-do list on the agent central view."
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_agent_central_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hk_agent_central_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_pet().
 */
function hk_agent_central_default_pet() {
  $items = array();
  $items['general_email_message'] = entity_import('pet', '{
    "name" : "general_email_message",
    "title" : "General Email Message",
    "subject" : "Nachricht von Herbert + Kohlmeyer",
    "mail_body" : "Hallo ,\\r\\n\\r\\ndas ist eine allgemeine Mail.\\r\\n\\r\\nmit freundlichem Gru\\u00df\\r\\nIhr Herbert + Kohlmeyer Team",
    "mail_body_plain" : "Hallo ,\\r\\n\\r\\ndas ist eine allgemeine Mail.\\r\\n\\r\\nmit freundlichem Gru\\u00df\\r\\nIhr Herbert + Kohlmeyer Team",
    "send_plain" : "0",
    "from_override" : "",
    "cc_default" : "",
    "bcc_default" : "",
    "recipient_callback" : ""
  }');
  return $items;
}
