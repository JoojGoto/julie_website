<?php
/**
 * @file
 * Integrate gp.module with block.module
 */

/**
 * Implements hook_block_info().
 */
function gp_global_block_info() {
  $blocks = array();

  // Blank template block.
  $blocks['blank'] = array(
    'info' => t('Blank'),
  );

  $blocks['sidebar_projects_list'] = array(
    'info' => t('Sidebar projects list'),
    'cache' => DRUPAL_CACHE_GLOBAL,
  );

    $blocks['logo'] = array(
    'info' => t('The logo and title'),
    'cache' => DRUPAL_CACHE_GLOBAL,
  );

  return $blocks;
}

/**
 * Implements hook_block_view().
 */
function gp_global_block_view($delta = ''){
  $ret = array();

  $function = __FUNCTION__ . '_' . $delta;
  if(function_exists($function)) {
    $rendered = $function();
    $ret += is_string($rendered) ? array('content' => $rendered) : $rendered;
  }

  // Merge in blank placeholders.
  $ret += array(
    'content' => '',
    'subject' => '',
  );

  return $ret;
}

/**
 * Renders 'blank' block.
 */
function gp_global_block_view_blank() {
  $block = array();
  // The block title.
  $block['subject'] = '';
  // The content of the block.
  $block['content'] = '';
  // Save ourselves some typing; we'll be concatenating a lot to this variable.
  $content = &$block['content'];

  $content .= '<h2>Blank</h2>';

  return $block;
}

/**
 * Renders a list of content for the front page.
 */
function gp_global_block_view_sidebar_projects_list() {
  $project_nid_list = gp_global_get_front_project_nidlist();
  $nodes = node_load_multiple($project_nid_list);

  // No need to render a full node display mode, just need linked titles.
  $ret = '';
  foreach($nodes as $node) {
    $path_alias = drupal_lookup_path('alias', 'node/' . $node->nid);
    $ret .= l($node->title, $path_alias);
  }

  return $ret;
}


/**
 * Renders logo title and image.
 */
function gp_global_block_view_logo() {
  $block = array();
  // The block title.
  $block['subject'] = 'Logo for sidebar';
  // The content of the block.
  $block['content'] = '';
  // Save ourselves some typing; we'll be concatenating a lot to this variable.
  $content = &$block['content'];

  $content .= '<img src="' . drupal_get_path('theme', 'gp_theme') . '/css/img/logo-image.jpg">';

  return $block;
}
