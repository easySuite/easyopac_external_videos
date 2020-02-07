<?php
/**
 * @file
 * easyopac_external_videos.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function easyopac_external_videos_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|1"] = 'group_in_public_lists';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|2"] = 'group_holdings_available';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|3"] = 'group_on_this_site';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|4"] = 'group_periodical_issues';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|5"] = 'group_ting_object_meta';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|6"] = 'group_ting_object_right_a';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|7"] = 'group_ting_object_right_c';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|8"] = 'group_related_videos';

 return $overrides;
}
