<?php
/**
 * @file
 * easyopac_external_videos.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function easyopac_external_videos_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_easyopac_external_videos'.
  $field_bases['field_easyopac_external_videos'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'field_easyopac_external_videos',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'easyopac_external_videos',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'easyopac_external_videos',
  );

  return $field_bases;
}
