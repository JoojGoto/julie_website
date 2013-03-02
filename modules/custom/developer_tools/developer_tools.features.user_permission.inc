<?php
/**
 * @file
 * developer_tools.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function developer_tools_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: access environment indicator.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(),
    'module' => 'environment_indicator',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(),
    'module' => 'devel',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(),
    'module' => 'devel',
  );

  return $permissions;
}
