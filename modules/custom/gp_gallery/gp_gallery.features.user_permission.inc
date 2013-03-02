<?php
/**
 * @file
 * gp_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gp_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gallery_gallery content.
  $permissions['create gallery_gallery content'] = array(
    'name' => 'create gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any gallery_gallery content.
  $permissions['delete any gallery_gallery content'] = array(
    'name' => 'delete any gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own gallery_gallery content.
  $permissions['delete own gallery_gallery content'] = array(
    'name' => 'delete own gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any gallery_gallery content.
  $permissions['edit any gallery_gallery content'] = array(
    'name' => 'edit any gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own gallery_gallery content.
  $permissions['edit own gallery_gallery content'] = array(
    'name' => 'edit own gallery_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
