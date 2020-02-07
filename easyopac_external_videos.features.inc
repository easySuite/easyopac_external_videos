<?php
/**
 * @file
 * easyopac_external_videos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyopac_external_videos_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == 'field_group' && $api == 'field_group') {
    return array('version' => 1);
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function easyopac_external_videos_field_group_info_alter(&$data) {
  if (isset($data['group_ting_object_right_column|ting_object|ting_object|default'])) {
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['1'] = 'group_in_public_lists'; /* WAS: 'group_oembed' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['2'] = 'group_holdings_available'; /* WAS: 'group_in_public_lists' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['3'] = 'group_on_this_site'; /* WAS: 'group_holdings_available' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['4'] = 'group_periodical_issues'; /* WAS: 'group_on_this_site' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['5'] = 'group_ting_object_meta'; /* WAS: 'group_periodical_issues' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['6'] = 'group_ting_object_right_a'; /* WAS: 'group_ting_object_meta' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['7'] = 'group_ting_object_right_c'; /* WAS: 'group_ting_object_right_a' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['8'] = 'group_related_videos'; /* WAS: 'group_ting_object_right_c' */
  }
}
