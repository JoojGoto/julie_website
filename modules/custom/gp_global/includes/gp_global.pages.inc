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

  $out = array();

  // Render each node individually so we can append a link.
  $l_options = array(
    'attributes' => array('class' => 'block-link'),
  );
  foreach($nodes as $node) {
    // $rendered_node = $node_view($node, 'teaser');
    $path_alias = drupal_lookup_path('alias', 'node/' . $node->nid);
    $node_view = node_view($node, 'teaser');

    $node_view['title']['#prefix'] = l('', $path_alias, $l_options);
    $out[] = $node_view;
  }

  return $out;
}
