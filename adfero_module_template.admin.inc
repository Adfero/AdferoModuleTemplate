<?php

function adfero_module_template_settings_form($form_state) {
  $form = array();

  $form['adfero_module_template_test'] = array(
    '#title' => t('Test field'),
    '#type' => 'textfield',
    '#default_value' => variable_get('adfero_module_template_test', ''),
    '#required' => TRUE,
    '#description' => t('Provide a brief sentence on use.'),
  );

  return system_settings_form($form);
}