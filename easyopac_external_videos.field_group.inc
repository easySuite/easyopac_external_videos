<?php
/**
 * @file
 * easyopac_external_videos.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function easyopac_external_videos_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_videos|ting_object|ting_object|default';
  $field_group->group_name = 'group_related_videos';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_ting_object_right_column';
  $field_group->data = array(
    'label' => 'Related videos',
    'weight' => '10',
    'children' => array(
      0 => 'field_easyopac_external_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related videos',
      'instance_settings' => array(
        'id' => 'ting_object_ting_object_full_group_related_videos',
        'classes' => 'group-related-videos field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_related_videos|ting_object|ting_object|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Related videos');

  return $field_groups;
}
