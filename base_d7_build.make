core = 7.x
api = 2

; Themes

projects[rubik][version] = "4.0-beta7"
projects[rubik][subdir] = contrib

projects[tao][version] = "3.0-beta4"
projects[tao][subdir] = "contrib"

projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"
projects[omega][patch][] = http://drupal.org/files/preprocess-aggregation-1627478-14.patch

; Contrib

projects[browscap][version] = "1.3"
projects[browscap][subdir] = "contrib"

projects[coffee][version] = "1.0"
projects[coffee][subdir] = "contrib"

projects[context][version] = "3.0-beta4"
projects[context][subdir] = "contrib"

projects[devel][version] = "1.3"
projects[devel][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[dynamic_cache][version] = "1.0-rc1"
projects[dynamic_cache][subdir] = "contrib"

projects[elysia_cron][download][type] = "git"
projects[elysia_cron][download][revision] = "34e3a97d3b2b257775ff07db1e5ca7eb49a4fef1"
projects[elysia_cron][subdir] = "contrib"
projects[elysia_cron][patch][] = "http://drupal.org/files/elysia_cron_install_profile_fail-1204488-14.patch"
; projects[elysia_cron][patch][] = "http://drupal.org/files/elysia_cron_drush_compatibility-939592-16.patch"

projects[entitycache][download][type] = "git"
projects[entitycache][download][revision] = "7e390b5d4112b581ac2885d8bd0f2cb5ce873284"
projects[entitycache][subdir] = "contrib"

projects[entity][version] = "1.0-rc1"
projects[entity][subdir] = "contrib"

projects[environment_indicator][version] = "1.1"
projects[environment_indicator][subdir] = "contrib"

projects[filecache][version] = "1.0-beta2"
projects[filecache][subdir] = "contrib"

projects[ctools][version] = "1.2"
projects[ctools][subdir] = "contrib"

projects[filefield_paths][version] = "1.0-beta3"
projects[filefield_paths][subdir] = "contrib"

projects[filefield_sources][version] = "1.7"
projects[filefield_sources][subdir] = "contrib"

projects[filefield_sources_plupload][download][type] = "git"
projects[filefield_sources_plupload][download][url] = "http://git.drupal.org/project/filefield_sources_plupload.git"
projects[filefield_sources_plupload][download][revision] = "da374770b80fcbc0dab17158d38c8436ef29caca"
projects[filefield_sources_plupload][subdir] = "contrib"

projects[google_analytics][version] = "1.3"
projects[google_analytics][subdir] = "contrib"

; updates jquery to 1.5.2
projects[jquery_update][version] = "2.2"
projects[jquery_update][subdir] = "contrib"

projects[menu_block][version] = "2.3"
projects[menu_block][subdir] = "contrib"

projects[metatag][version] = "1.0-beta4"
projects[metatag][subdir] = "contrib"

projects[nodeformcols][version] = "1.x-dev"
projects[nodeformcols][subdir] = "contrib"

projects[page_title][version] = "2.7"
projects[page_title][subdir] = "contrib"

projects[panels][version] = "3.2"
projects[panels][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"

projects[plupload][version] = "1.0-rc1"
projects[plupload][subdir] = "contrib"

projects[prod_check][version] = "1.4"
projects[prod_check][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"

projects[rules][version] = "2.1"
projects[rules][subdir] = "contrib"

projects[smartcrop][version] = "1.0-beta2"
projects[smartcrop][subdir] = "contrib"

projects[token][version] = "1.4"
projects[token][subdir] = "contrib"

projects[transliteration][version] = "3.1"
projects[transliteration][subdir] = "contrib"

projects[views][version] = "3.5"
projects[views][subdir] = "contrib"

projects[views_bulk_operations][version] = "3.0-rc1"
projects[views_bulk_operations][subdir] = "contrib"

; wysiwyg + crap to make wysiwyg settings exportable
projects[wysiwyg][version] = "2.2"
projects[wysiwyg][subdir] = "contrib"

projects[xmlsitemap][version] = "2.0-rc1"
projects[xmlsitemap][subdir] = "contrib"

libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://downloads.sourceforge.net/project/tinymce/TinyMCE/3.2.7/tinymce_3_2_7.zip"
libraries[tinymce][directory_name] = "tinymce"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[webform][version] = "3.18"
projects[webform][subdir] = "contrib"

projects[features][download][type] = "git"
projects[features][download][revision] = "63db687c75d7880bb5d2652fa9227e3ca6e4e9f0"
projects[features][subdir] = "contrib"

; Display Suite
projects[ds][version] = "1.5"
projects[ds][subdir] = "contrib"

; UUID
projects[uuid][version] = "1.0-alpha3"
projects[uuid][subdir] = "contrib"

projects[uuid_features][version] = "1.0-alpha1"
projects[uuid_features][subdir] = "contrib"

; Image Editor
projects[imageeditor][version] = "1.9"
projects[imageeditor][subdir] = "contrib"

; Libraries
projects[libraries][version] = "1.0"
projects[libraries][subdir] = "contrib"

; Less
projects[less][version] = "2.6"
projects[less][subdir] = "contrib"

; Libraries

libraries[lessphp][download][type] = "git"
libraries[lessphp][download][url] = "git://github.com/leafo/lessphp.git"
libraries[lessphp][destination] = "libraries"
libraries[lessphp][download][revision] = "42ff6ddf9e3ee4f8ead1df11b89da9f841f19e02"

libraries[plupload][download][type] = "file"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip"
libraries[plupload][destination] = "libraries"
