This feature is intended to work as a one-size-fits-all "Distro Feature" as defined by the KIT Specification. It is intended to work happily alongside KIT compliant Features.

KIT Specification can be found at http://drupal.org/project/kit

Things this module contains:

- Snippet in gp_global.module to automatically include .inc files in ./includes based on currently enabled modules
- New path registered and strongarm variable to create a "blank slate" front page
- User Roles and Permissions that attempt to get Core behaving something more like Wordpress out of the box http://codex.wordpress.org/Roles_and_Capabilities, since by default Drupal comes with... nothing
- Basic WYSIWYG Profile configuration + Associated filter
- Pathauto settings - Transliteration + [node:content-type]/[node:title] default node pattern
- Includes misc. other Strongarm variables so that they can be updated with a quick "$ drush fu" instead of rebuilding the whole Feature every time
