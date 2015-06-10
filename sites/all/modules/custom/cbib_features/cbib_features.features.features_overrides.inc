<?php
/**
 * @file
 * cbib_features.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cbib_features_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: panelizer_defaults
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-04035a6e-e80a-4153-862f-74c8d7116a66"] = (object) array(
      'pid' => 'new-04035a6e-e80a-4153-862f-74c8d7116a66',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_events_upcoming-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => '04035a6e-e80a-4153-862f-74c8d7116a66',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-1512ad54-2a3d-439f-9a31-899f837f176d"] = (object) array(
      'pid' => 'new-1512ad54-2a3d-439f-9a31-899f837f176d',
      'panel' => 'one_main',
      'type' => 'entity_view',
      'subtype' => 'node',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'view_mode' => 'teaser',
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '1512ad54-2a3d-439f-9a31-899f837f176d',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-1c423751-51b0-4922-91e1-2bd81bf66aff"] = (object) array(
      'pid' => 'new-1c423751-51b0-4922-91e1-2bd81bf66aff',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'commons_groups_directory-panel_pane_2',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '1c423751-51b0-4922-91e1-2bd81bf66aff',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-440ab2f5-ec14-4def-b4d4-912cd02d306d"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-55153871-5118-4e5f-b169-465580bc9c37"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-5a43dfa0-ef2a-42c2-bfc0-424a387c8ef3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-92a62a1c-ab7e-4453-b777-7f6f515e1fd3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-93e15674-d765-4f06-9fea-2c1a4898d6f4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994"] = (object) array(
      'pid' => 'new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994',
      'panel' => 'one_main',
      'type' => 'views_panes',
      'subtype' => 'centralbibliotek_news-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => 'a65c5e66-fda8-4911-bbac-bd5e7aa1c994',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|content|new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42"] = (object) array(
      'pid' => 'new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42',
      'panel' => 'one_main',
      'type' => 'node_links',
      'subtype' => 'node_links',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_title' => 0,
        'override_title_text' => '',
        'build_mode' => 'full',
        'identifier' => '',
        'link' => 1,
        'context' => 'panelizer',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => 'cc7a3b75-fe68-47d8-a865-9e2fa8d34f42',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|panels|one_main|0"] = 'new-1512ad54-2a3d-439f-9a31-899f837f176d';
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|panels|one_main|1"] = 'new-cc7a3b75-fe68-47d8-a865-9e2fa8d34f42';
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|panels|one_main|2"] = 'new-a65c5e66-fda8-4911-bbac-bd5e7aa1c994';
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|panels|one_main|3"] = 'new-04035a6e-e80a-4153-862f-74c8d7116a66';
  $overrides["panelizer_defaults.node:centralbibliotek:default.display|panels|one_main|4"] = 'new-1c423751-51b0-4922-91e1-2bd81bf66aff';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-004f0bea-aa97-4691-919b-b32b36054b3a"] = (object) array(
      'pid' => 'new-004f0bea-aa97-4691-919b-b32b36054b3a',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_phone',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => '_none',
          'title_link' => '',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 1,
      'locks' => array(),
      'uuid' => '004f0bea-aa97-4691-919b-b32b36054b3a',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-03edb05d-4eff-4de7-8d36-d24d29761ddd"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-155a68cc-5c10-4eed-9bfd-42eb60e09043"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6"] = (object) array(
      'pid' => 'new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_document_file',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'file_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => 0,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 8,
      'locks' => array(),
      'uuid' => '1efcd75f-5c6b-4dea-afda-77c69b3f90a6',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-2032304d-ff51-4e20-82cd-90fb530a3f1b"] = (object) array(
      'pid' => 'new-2032304d-ff51-4e20-82cd-90fb530a3f1b',
      'panel' => 'two_66_33_second',
      'type' => 'views',
      'subtype' => 'cbib_sider',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'override_pager_settings' => 0,
        'use_pager' => 0,
        'nodes_per_page' => 0,
        'pager_id' => 0,
        'offset' => 0,
        'more_link' => 0,
        'feed_icons' => 0,
        'panel_args' => 0,
        'link_to_view' => 0,
        'args' => '',
        'url' => '',
        'display' => 'block',
        'context' => array(
          0 => '',
        ),
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 7,
      'locks' => array(),
      'uuid' => '2032304d-ff51-4e20-82cd-90fb530a3f1b',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-258c2017-ddba-4967-83e4-ee85a091a6ae"] = (object) array(
      'pid' => 'new-258c2017-ddba-4967-83e4-ee85a091a6ae',
      'panel' => 'two_66_33_second',
      'type' => 'views_panes',
      'subtype' => 'library_employees-panel_pane_3',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'context' => array(
          0 => 'panelizer',
        ),
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 9,
      'locks' => array(),
      'uuid' => '258c2017-ddba-4967-83e4-ee85a091a6ae',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-2bfab762-817b-4004-9786-2a71da083b5a"] = (object) array(
      'pid' => 'new-2bfab762-817b-4004-9786-2a71da083b5a',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_e_mail',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => '_none',
          'title_link' => '',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 6,
      'locks' => array(),
      'uuid' => '2bfab762-817b-4004-9786-2a71da083b5a',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-3667aa5b-3012-4677-b63f-081c5a6ba15a"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-3b4f691a-868e-4158-872a-5fffa14248a1"] = (object) array(
      'pid' => 'new-3b4f691a-868e-4158-872a-5fffa14248a1',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_address',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'title',
        'formatter' => 'addressfield_default',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'use_widget_handlers' => 1,
          'format_handlers' => array(
            'address' => 'address',
          ),
        ),
        'context' => 'panelizer',
        'override_title' => 1,
        'override_title_text' => '%node:title Centralbibliotek',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 0,
      'locks' => array(),
      'uuid' => '3b4f691a-868e-4158-872a-5fffa14248a1',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-5a2c3703-f378-4d71-937d-ed17a4fb4d92"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-6b9a6759-d00c-46a1-b9c3-be5bc958d682"] = (object) array(
      'pid' => 'new-6b9a6759-d00c-46a1-b9c3-be5bc958d682',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_agency',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'number_unformatted',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 4,
      'locks' => array(),
      'uuid' => '6b9a6759-d00c-46a1-b9c3-be5bc958d682',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-737818c6-2472-4650-b282-4f0320df1323"] = (object) array(
      'pid' => 'new-737818c6-2472-4650-b282-4f0320df1323',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_ean',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => '_none',
          'title_link' => '',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 2,
      'locks' => array(),
      'uuid' => '737818c6-2472-4650-b282-4f0320df1323',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-76050360-e15e-4f6a-8da5-d5c0039cac2f"] = (object) array(
      'pid' => 'new-76050360-e15e-4f6a-8da5-d5c0039cac2f',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_website',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'title_linked',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'title_style' => '_none',
          'title_link' => '',
          'title_class' => '',
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 5,
      'locks' => array(),
      'uuid' => '76050360-e15e-4f6a-8da5-d5c0039cac2f',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-9aa68120-2268-4422-926b-e0f9c7309744"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-9f0cf2f9-2599-447b-b535-fb0db025efe1"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-a0027921-e3a1-46c9-858d-9127ac2a41b7"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-a2c078af-b170-4b0e-b50a-8bbb80bea0a3"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-a50a123d-2373-4dff-a157-42b31d4db663"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-b5618767-6a4d-4d21-9f8c-5145527c23c8"] = (object) array(
      'pid' => 'new-b5618767-6a4d-4d21-9f8c-5145527c23c8',
      'panel' => 'two_66_33_second',
      'type' => 'entity_field',
      'subtype' => 'node:field_cvr',
      'shown' => TRUE,
      'access' => array(),
      'configuration' => array(
        'label' => 'inline',
        'formatter' => 'number_integer',
        'delta_limit' => 0,
        'delta_offset' => 0,
        'delta_reversed' => FALSE,
        'formatter_settings' => array(
          'thousand_separator' => ' ',
          'prefix_suffix' => 1,
        ),
        'context' => 'panelizer',
        'override_title' => 0,
        'override_title_text' => '',
      ),
      'cache' => array(),
      'style' => array(
        'settings' => NULL,
      ),
      'css' => array(),
      'extras' => array(),
      'position' => 3,
      'locks' => array(),
      'uuid' => 'b5618767-6a4d-4d21-9f8c-5145527c23c8',
    );
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|content|new-cdfed378-957f-4e85-848a-cc7ea4d3eed4"]["DELETED"] = TRUE;
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|0"] = 'new-3b4f691a-868e-4158-872a-5fffa14248a1';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|1"] = 'new-004f0bea-aa97-4691-919b-b32b36054b3a';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|2"] = 'new-737818c6-2472-4650-b282-4f0320df1323';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|3"] = 'new-b5618767-6a4d-4d21-9f8c-5145527c23c8';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|4"] = 'new-6b9a6759-d00c-46a1-b9c3-be5bc958d682';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|5"] = 'new-76050360-e15e-4f6a-8da5-d5c0039cac2f';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|6"] = 'new-2bfab762-817b-4004-9786-2a71da083b5a';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|7"] = 'new-2032304d-ff51-4e20-82cd-90fb530a3f1b';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|8"] = 'new-1efcd75f-5c6b-4dea-afda-77c69b3f90a6';
  $overrides["panelizer_defaults.node:centralbibliotek:default:teaser.display|panels|two_66_33_second|9"] = 'new-258c2017-ddba-4967-83e4-ee85a091a6ae';

 return $overrides;
}