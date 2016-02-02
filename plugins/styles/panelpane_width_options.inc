<?php

/**
 * @file
 * Definition of the 'Full Width Pane Options' panel pane style.
 * Overrides Radix default panels-pane.tpl.php template in order to set width of pane.
 */

// Plugin definition
$plugin = array(
  'title' => t('Pane Width Options'),
  'description' => t('Set width of this pane. NOTE: This is only applicable to panes inside regions that already span the full width of the container.'),
  'render pane' => 'panelpane_width_options_render_pane',
  'pane settings form' => 'panelpane_width_options_settings_form',
  'weight' => -5,
);

/**
 * Settings form callback.
 */
function panelpane_width_options_settings_form($style_settings, $test, $test2) {
  $form['panelpane_width_options_form']['pane_width'] = array(
    '#type' => 'radios',
    '#title' => t('Width of pane:'),
    '#options' => array(
      'full' => t('Full Width/Full width of browser window'),
      'container' => t('Container Width/Width of site'),
    ),
    '#description' => t('Select a width for this pane.'),
    '#required' => TRUE,
    '#collapsible' => FALSE,
    '#default_value' => (isset($style_settings['panelpane_width_options_form']['pane_width'])) ? $style_settings['panelpane_width_options_form']['pane_width'] : 'container',
  );

  $form['panelpane_width_options_form']['pane_classes'] = array(
    '#type' => 'textfield',
    '#title' => t('Optional CSS classes for pane:'),
    '#description' => t('Optional CSS classes for this pane.'),
    '#required' => FALSE,
    '#collapsible' => FALSE,
    '#default_value' => (isset($style_settings['panelpane_width_options_form']['pane_classes'])) ? $style_settings['panelpane_width_options_form']['pane_classes'] : '',
  );
  return $form;
}

/**
 * Render callback for a single panel pane.
 */
function theme_panelpane_width_options_render_pane($vars) {
  return;
}