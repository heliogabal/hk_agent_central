<?php
/**
 * @file
 * hk_agent_central.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function hk_agent_central_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'email';
  $crm_core_profile->label = 'Email';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Kontakt',
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Aktivität',
      'status' => 1,
      'bundle' => 'email',
      'fields_container' => array(
        'fields' => array(
          'field_activity_participants' => 'field_activity_participants',
          'field_activity_date' => 'field_activity_date',
          'field_activity_notes' => 'field_activity_notes',
          'field_email_type' => 'field_email_type',
          'field_expose_file_field' => 'field_expose_file_field',
          'field_recipient' => 'field_recipient',
          'title' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_activity_email_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => array(),
      'weight' => '50',
    ),
    'crm_core_activity_email_field_activity_date' => array(
      'field_name' => 'field_activity_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '49',
    ),
    'crm_core_activity_email_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '48',
    ),
    'crm_core_activity_email_field_email_type' => array(
      'field_name' => 'field_email_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '47',
    ),
    'crm_core_activity_email_field_expose_file_field' => array(
      'field_name' => 'field_expose_file_field',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '46',
    ),
    'crm_core_activity_email_field_recipient' => array(
      'field_name' => 'field_recipient',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'email',
      'status' => 1,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Create email';
  $crm_core_profile->page_path = 'email';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1466349928;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'selected_user_or_contact_and_admins';
  $crm_core_profile->access_control_perm = 'administer views';
  $crm_core_profile->roles = array(
    'agent' => 'agent',
  );
  $export['email'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'task';
  $crm_core_profile->label = 'Task';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Kontakt',
      'status' => 0,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 0,
          'field_e_mail' => 0,
          'field_phone' => 0,
          'field_crm_address' => 0,
          'field_crm_bemerkungen' => 0,
          'field_crm_ansprechpartner' => 0,
          'field_other' => 0,
          'field_birthday' => 0,
          'field_company' => 0,
          'field_individual_type' => 0,
          'field_job_title' => 0,
          'field_profile_picture' => 0,
          'field_languages' => 0,
        ),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Aktivität',
      'status' => 1,
      'bundle' => 'task',
      'fields_container' => array(
        'fields' => array(
          'field_task_type' => 'field_task_type',
          'field_activity_notes' => 'field_activity_notes',
          'field_activity_date' => 'field_activity_date',
          'field_activity_participants' => 'field_activity_participants',
          'title' => 0,
          'field_erledigt' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_activity_task_field_task_type' => array(
      'field_name' => 'field_task_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'task',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_activity_task_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'task',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_activity_task_field_activity_date' => array(
      'field_name' => 'field_activity_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'task',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_activity_task_field_activity_participants' => array(
      'field_name' => 'field_activity_participants',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'task',
      'status' => 1,
      'hidden' => 0,
      'default' => array(),
      'weight' => '-47',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = 'Create Task';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'create task';
  $crm_core_profile->page_path = 'task';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Task has been successfully created.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1466269779;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'selected_user_or_contact_and_admins';
  $crm_core_profile->access_control_perm = 'administer views';
  $crm_core_profile->roles = array(
    'agent' => 'agent',
  );
  $export['task'] = $crm_core_profile;

  return $export;
}
