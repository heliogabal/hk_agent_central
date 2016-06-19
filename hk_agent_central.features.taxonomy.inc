<?php
/**
 * @file
 * hk_agent_central.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_agent_central_taxonomy_default_vocabularies() {
  return array(
    'task_type' => array(
      'name' => 'Task type',
      'machine_name' => 'task_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
