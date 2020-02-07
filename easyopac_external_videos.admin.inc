<?php

/**
 * @file
 * Administration interface for external videos module.
 */

/**
 * Easyopac External Videos custom settings form.
 */
function easyopac_external_videos_settings_form($form, &$form_state) {
  $form['easyopac_external_videos_lms_service_url'] = [
    '#type' => 'textfield',
    '#title' => t('LMS Service URL'),
    '#description' => t('URL to LMS service with consumer attached. No trailing slash.'),
    '#default_value' => variable_get('easyopac_external_videos_lms_service_url', NULL),
  ];

  $types = variable_get('ting_well_types', _ting_fetch_well_types());

  $form['easyopac_external_videos_online'] = [
    '#type' => 'fieldset',
    '#title' => t('Online types'),
    '#description' => t('Ting objects defined as found online (not in the library collection).'),
    '#tree' => FALSE,
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  ];

  $form['easyopac_external_videos_online']['easyopac_external_videos_online_types'] = [
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc($types),
    '#default_value' => variable_get('easyopac_external_videos_online_types', _ting_default_online_types()),
  ];

  return system_settings_form($form);
}
