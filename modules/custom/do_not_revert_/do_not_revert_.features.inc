<?php
/**
 * @file
 * do_not_revert_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function do_not_revert__ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
