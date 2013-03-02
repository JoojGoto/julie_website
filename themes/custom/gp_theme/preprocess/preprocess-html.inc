<?php

/**
 * Implements hook_preprocess_page()
 */
function gp_theme_alpha_preprocess_html(&$vars) {
  
  /* Dropping the system path args onto the body class is often really useful for theming */
  $arg_array = arg();
  foreach($arg_array as $i => $arg) {
    $arg_class = drupal_strtolower('arg' . $i . '-' . $arg);
    $vars['classes_array'][] = $arg_class;
    $vars['attributes_array']['class'][] = $arg_class;
  }

}
