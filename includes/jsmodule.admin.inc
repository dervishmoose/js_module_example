<?php
/**
 * @file
 *
 *
 *
 * Orginal waypoints module work done by Kálmán Hosszu - hosszu.kalman@gmail.com - http://www.kalman-hosszu.com
 *
 * Hacking and converting to demo done by @author Mark W. Breneman
 * This example is intended mostly for my own notes, but use it as you wish.
 */

/**
 * Build jsmodule_settings_form form.
 *
 * @param array $form_state
 * @return array The created form.
 */
function jsmodule_settings_form($form_state) {
  $form = array();

  $form['jsmodule_always_add_js'] = array(
    '#type' => 'checkbox',
    '#title' => t('Always include JavaScript file to the site.'),
    '#default_value' => variable_get('jsmodule_always_add_js'),
  );


  return system_settings_form($form);
}
