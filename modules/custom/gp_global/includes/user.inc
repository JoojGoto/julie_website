<?php
/**
 * @file
 * Integrates with the user system.
 */

/**
 * Implements hook_permission().
 */
function gp_global_permission() {
  $permissions = array();

  /* This is enforced on hook_node_presave in node.inc */
  $permissions['publish_content'] = array(
    'title' => t('Publish content'),
  );

  return $permissions;
}
