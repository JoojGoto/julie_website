<?php

/**
 * Generates a blank page for menu callbacks.
 */
function gp_global_blank_page() {
  return '';
}

/**
 * Renders the front page.
 */
function gp_global_page_front() {
  $project_nid_list = gp_global_get_front_project_nidlist();
  $nodes = node_load_multiple($project_nid_list);

  return '';
}
