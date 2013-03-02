<?php
/**
 * @file
 * Page callbacks for gd_deny_legacy_browsers.module
 */

/**
 * Generates a page to block unsupported browsers.
 */
function gd_deny_legacy_browsers_incompatible_browser_page() {

  /* add some extra CSS to the page that we don't normally include */
  drupal_add_css(drupal_get_path('module', 'gd_deny_legacy_browsers') . '/css/browser-deny.css', 'file');
  $browser = browscap_get_browser();

  $output = '';
  $output .= '<table width="100%">';
  $output .= '<tr>';
  $output .= '<td width="10000"></td>';
  $output .= '<td>';
  $output .= '<div id="browser-deny">';
  $output .= 'We have detected that you are using a browser that is known to be incompatible with many modern web features and has multiple security vulnerabilities.<br /><br />';
  $output .= variable_get('site_name', 'This website') . ' is <strong>not compatible</strong> with the following browsers:<br />';
  $output .= '<ul>';
  $output .= '<li>Internet Explorer 6 (August 2001)</li>';
  $output .= '</ul>';
  $output .= '<br />';
  $output .= 'You are using <span style="color: red;">' . $browser['comment'] . '</span>';
  $output .= '<br /><br />';
  $output .= 'We recommend that you download and upgrade to one of these following <strong>free, popular and modern</strong> browsers:';
  $output .= '<ul>';
  $output .= '<li><a href="google.com/chrome">Google Chrome</a></li>';
  $output .= '<li><a href="http://www.mozilla.org/en-US/firefox/new/">Mozilla Firefox</a></li>';
  $output .= '<li><a href="http://www.apple.com/safari/download/">Apple Safari</a></li>';
  $output .= '<li><a href="http://ie.microsoft.com/testdrive/Info/Downloads/Default.html">Microsoft Internet Explorer 10</a></li>';
  $output .= '<li><a href="http://www.microsoft.com/en-us/download/details.aspx?id=13950">Microsoft Internet Explorer 9</a></li>';
  $output .= '<li><a href="http://windows.microsoft.com/en-US/internet-explorer/downloads/ie-8">Microsoft Internet Explorer 8</a> (Only recommended for Windows XP)</li>';
  $output .= '</ul>';
  $output .= '</div>';
  $output .= '</td>';
  $output .= '<td width="10000"></td>';
  $output .= '</tr>';
  $output .= '</table>';

  return $output;
}
