<?php

/**
 * @file
 * This file implements administration menus and functionality for
 * the provider module.
 */

/**
 * Page callback. Displays status page.
 */
function _os2web_esdh_provider_status() {
  $apis = array_keys(os2web_esdh_provider_ctools_plugin_type());
  $head = array('API name', 'Description', 'module', 'status');
  $rows = array();
  foreach ($apis as $api) {
    $plugins = ctools_get_plugins('os2web_esdh_provider', $api);
    if (count($plugins) > 0) {
      foreach ($plugins as $plugin) {
        $rows[] = array(
          $api,
          $plugin['description'],
          $plugin['module'],
          os2web_esdh_provider_has_api($api) ? 'Working' : 'Error',
        );
      }
    }
    else {
      $rows[] = array($api, 'Unavailable', 'Not enabled.', 'Error');
    }
  }
  return '<h2>' . t('ESDH Provider API plugin status') . '</h2>' .
      theme('table', array('header' => $head, 'rows' => $rows)) .
      '<h2>' . t('Import of MM Based ESDH documents. (Last import was run at %time)', array('%time' => format_date(variable_get('os2web_esdh_provider_last_import', 0)))) . '</h2>' .
      drupal_render(drupal_get_form('os2web_esdh_provider_import_form'));
}

/**
 * Import form.
 */
function os2web_esdh_provider_import_form() {
  $form = array();
  $form['run_import'] = array(
    '#type' => 'submit',
    '#value' => t('Run import'),
  );
  $form['group'] = array(
    '#type' => 'fieldset',
    '#title' => t('Extended options.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['group']['force'] = array(
    '#type' => 'checkbox',
    '#title' => t('Force recreation of nodes'),
    '#default_value' => FALSE,
    '#description' => t('WARNING: This will destroy existing nodes and replace with freshly imported. All node-id\s will change'),
  );
  $form['group']['focus'] = array(
    '#type' => 'textfield',
    '#title' => t('Focused import id'),
    '#description' => t('Ie. 1577 to reimport XML_1577.xml.'),
  );
  return $form;
}

/**
 * Implements hook_FORM_submit().
 */
function os2web_esdh_provider_import_form_submit($form, &$form_state) {
  drupal_goto('admin/config/os2web/esdh_provider/importconfirm', array(
    'query' => array(
      'id' => $form_state['values']['focus'],
      'force' => $form_state['values']['force'],
    ),
  ));
  return;
}

/**
 * Implements hook_form().
 */
function _os2web_esdh_provider_status_confirm($form, &$form_state) {
  $id = $_GET['id'];
  $force = (int) $_GET['force'];
  $form['_meeting_id'] = array(
    '#type' => 'hidden',
    '#value' => $id,
  );
  $form['_meeting_force'] = array(
    '#type' => 'hidden',
    '#value' => $force,
  );
  $msg = '';
  if ($id > 0) {
    $msg = t('<p>Importing meeting with id !focus <br/>', array('!focus' => $id));
  }
  else {
    $msg = t('<p>Importing all meetings.<br/>');
  }
  if ($force) {
    $msg .= t('All imported nodes will be re-imported, detroying existing data and importing new.<br/>');
  }
  else {
    $msg .= t('Only new nodes will be imported, existing data is preserved.</p>');
  }
  $msg .= t('<p>Are you sure you want to run this import?</p>');
  return confirm_form($form, t('Import meetings'), isset($_GET['destination']) ? $_GET['destination'] : "admin/config/os2web/esdh_provider", $msg, t('Run'), t('Cancel'));
}

/**
 * Implements hook_FORM_submit().
 */
function _os2web_esdh_provider_status_confirm_submit($form, &$form_state) {
  if (!os2web_esdh_provider_has_api('mm')) {
    drupal_set_message(t('ERROR: No valid MM importer plugin active!'), 'error');
    return;
  }
  $force = $form_state['values']['_meeting_force'] == 1;
  $focus = array_map('trim',explode(',',$form_state['values']['_meeting_id']));
  if (count($focus)===1 && $focus[0]==='') {
    $focus = array();
  }

  $batch = array(
    'title' => 'Dagsorden import',
    'operations' => array(),
    'file' => drupal_get_path('module', 'os2web_esdh_provider') . '/os2web_esdh_provider.mmapi.inc',
  );
  $meetings = os2web_esdh_provider_invoke('mm', 'get_import_list');
  foreach ($meetings as $meeting) {
    if (empty($focus) || in_array($meeting['id'], $focus)) {
      error_log("Var: \$meeting = " . print_r($meeting, 1));
      $batch['operations'][] = array(
        '_os2web_esdh_provider_import_meeting',
        array($meeting, $force));
    }
  }
  if (os2web_esdh_provider_supports('mm', 'post_import_process')) {
    $batch['operations'][] = array(
      'os2web_esdh_provider_invoke',
      array('mm', 'post_import_process'));
  }
  batch_set($batch);
  // This isn't entirely neccesary, but needed to make the redirect work.
  batch_process('admin/config/os2web/esdh_provider');
}
