<?php
/**
 * @file
 * gp_gallery.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function gp_gallery_field_default_fields() {
  $fields = array();

  // Exported field: 'node-gallery_gallery-field_gallery_images'
  $fields['node-gallery_gallery-field_gallery_images'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gallery_images',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'gallery_gallery',
      'deleted' => '0',
      'description' => 'Upload, reference or provide a link to a new image and then edit it using one of the 3rd party providers listed. <br /><br />
If you are having difficulties getting an image to load in the editor view, this might be because the editor can\'t access the file. Try clicking the paintbrush icon and waiting for the icon\'s background to turn black then gray, this will temporarily upload the image to an external server which may help resolve the problem.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_gallery_images',
      'label' => 'Images',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'filefield_paths' => array(
          'active_updating' => 0,
          'file_name' => array(
            'options' => array(
              'pathauto' => 1,
              'transliterate' => 1,
            ),
            'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
          ),
          'file_path' => array(
            'options' => array(
              'pathauto' => 1,
              'transliterate' => 1,
            ),
            'value' => 'gallery/gallery_images/[current-date:custom:Y]/[current-date:custom:M]',
          ),
          'retroactive_update' => 0,
        ),
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'aviary_falcon_enabled' => 0,
          'aviary_falcon_position' => '0',
          'aviary_feather_enabled' => 0,
          'aviary_feather_position' => '0',
          'aviary_peacock_enabled' => 0,
          'aviary_peacock_position' => '0',
          'aviary_phoenix_enabled' => 0,
          'aviary_phoenix_position' => '0',
          'aviary_raven_enabled' => 0,
          'aviary_raven_position' => '0',
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'imageeditor' => 0,
              'plupload' => 'plupload',
              'reference' => 'reference',
              'remote' => 'remote',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'copy',
              'path' => 'file_attach',
            ),
            'source_imageeditor' => array(
              'source_imageeditor_image' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '1',
            ),
          ),
          'flauntr_styler_enabled' => 0,
          'flauntr_styler_position' => '0',
          'fotoflexer_enabled' => 0,
          'fotoflexer_position' => '0',
          'imageeditor_icons_position' => '1',
          'imageeditor_replace' => 1,
          'imageshack_upload_enabled' => 0,
          'imageshack_upload_position' => '0',
          'immio_upload_enabled' => 0,
          'immio_upload_position' => '0',
          'paintweb_enabled' => 0,
          'paintweb_position' => '0',
          'picnik_enabled' => 0,
          'picnik_position' => '0',
          'pixlr_editor_enabled' => 1,
          'pixlr_editor_position' => '0',
          'pixlr_express_enabled' => 1,
          'pixlr_express_position' => '0',
          'pixlr_upload_enabled' => 1,
          'pixlr_upload_position' => '0',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
          'snipshot_enabled' => 0,
          'snipshot_position' => '0',
          'sumopaint_enabled' => 0,
          'sumopaint_position' => '0',
          'svgedit_enabled' => 0,
          'svgedit_position' => '0',
        ),
        'type' => 'image_image',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');
  t('Upload, reference or provide a link to a new image and then edit it using one of the 3rd party providers listed. <br /><br />
If you are having difficulties getting an image to load in the editor view, this might be because the editor can\'t access the file. Try clicking the paintbrush icon and waiting for the icon\'s background to turn black then gray, this will temporarily upload the image to an external server which may help resolve the problem.');

  return $fields;
}
