<?php
/**
 * @file
 * gp_global.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gp_global_filter_default_formats() {
  $formats = array();

  // Exported format: Wysiwyg basic.
  $formats['wysiwyg_basic'] = array(
    'format' => 'wysiwyg_basic',
    'name' => 'Wysiwyg basic',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
