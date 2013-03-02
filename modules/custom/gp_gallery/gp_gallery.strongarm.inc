<?php
/**
 * @file
 * gp_gallery.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gp_gallery_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_gallery_gallery';
  $strongarm->value = 'edit-page-title';
  $export['additional_settings__active_tab_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_gallery_gallery';
  $strongarm->value = 1;
  $export['enable_revisions_page_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_gallery_gallery';
  $strongarm->value = array();
  $export['menu_options_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_gallery_gallery';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_gallery_gallery_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_gallery_images' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Images',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_gallery_gallery_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_gallery_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_gallery_gallery';
  $strongarm->value = '0';
  $export['node_preview_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_gallery_gallery';
  $strongarm->value = 1;
  $export['node_submitted_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_gallery_gallery';
  $strongarm->value = '';
  $export['page_title_type_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_title_type_gallery_gallery_showfield';
  $strongarm->value = 0;
  $export['page_title_type_gallery_gallery_showfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_gallery_gallery_pattern';
  $strongarm->value = 'gallery/[node:title]';
  $export['pathauto_node_gallery_gallery_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_gallery_gallery';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_gallery_gallery';
  $strongarm->value = 0;
  $export['show_diff_inline_gallery_gallery'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_gallery_gallery';
  $strongarm->value = 1;
  $export['show_preview_changes_gallery_gallery'] = $strongarm;

  return $export;
}
