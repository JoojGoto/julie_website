<?php
/**
 * @file
 * gp_global.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gp_global_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '5',
  );

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => '3',
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => '2',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => '4',
  );

  return $roles;
}
