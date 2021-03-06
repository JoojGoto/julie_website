<?php

/**
 * Implements hook_menu()
 */
function gp_global_menu() {
  $items = array();

  /* Blank placeholder for the front page */
  $items['home'] = array(
    'title' => 'Home', // Will likely be overriden by page_title module
    'description' => 'The front page',
    'page callback' => 'gp_global_page_front',
  );

/* Page to redirect to for incompatible browsers */
 $items['browser-unsupported'] = array(
  'title' => 'Your browser is unsupported',
  'description' => 'Browser unsupported page',
  'page callback' => 'gp_global_incompatible_browser_page',
  );


  // Merge in defaults.
  $defaults = array(
    'page callback' => 'gp_global_blank_page',
    'access callback' => TRUE,
    'type' => MENU_CALLBACK,
    'file' => 'includes/gp_global.pages.inc',
  );
  foreach($items as $key => $item) {
    $items[$key] += $defaults;
  }
  return $items;
}

/**
 * Implements hook_menu_alter()
 */
function gp_global_menu_alter(&$items) {

  /* Production Check will complain about this as a security risk if we leave it set */
  unset($items['node']);

}
