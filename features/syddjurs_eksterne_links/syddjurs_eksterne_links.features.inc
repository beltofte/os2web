<?php
/**
 * @file
 * syddjurs_eksterne_links.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function syddjurs_eksterne_links_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
