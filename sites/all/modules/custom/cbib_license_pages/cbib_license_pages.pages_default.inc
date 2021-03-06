<?php
/**
 * @file
 * cbib_license_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cbib_license_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Licens: Forside',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Is Node ID equal to cbib_license_pages_front_nid?',
            'php' => 'if (isset($contexts[\'argument_entity_id:node_1\']->data->nid) && $contexts[\'argument_entity_id:node_1\']->data->nid == variable_get(\'cbib_license_pages_front_nid\')) {
  return TRUE;
}

return FALSE;',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c7b76f7e-3bdf-4853-9197-e495df4f36b9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67a94508-4f7a-4c6d-9470-dd70cdbc96b1';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67a94508-4f7a-4c6d-9470-dd70cdbc96b1';
    $display->content['new-67a94508-4f7a-4c6d-9470-dd70cdbc96b1'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-67a94508-4f7a-4c6d-9470-dd70cdbc96b1';
    $pane = new stdClass();
    $pane->pid = 'new-f5bbdb44-fccb-4f3c-a31b-f72d80fabd40';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f5bbdb44-fccb-4f3c-a31b-f72d80fabd40';
    $display->content['new-f5bbdb44-fccb-4f3c-a31b-f72d80fabd40'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-f5bbdb44-fccb-4f3c-a31b-f72d80fabd40';
    $pane = new stdClass();
    $pane->pid = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_news-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_topics_tid' => '23',
        'field_topics_tid_1' => 'all',
      ),
      'override_title' => 1,
      'override_title_text' => 'Driftsnyheder',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $display->content['new-ea23f7be-8a92-476e-b3a3-d339142e56e3'] = $pane;
    $display->panels['two_33_66_second'][1] = 'new-ea23f7be-8a92-476e-b3a3-d339142e56e3';
    $pane = new stdClass();
    $pane->pid = 'new-8567ca5b-9641-4b81-b9f4-079402a9464a';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_group_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => 'full_node',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8567ca5b-9641-4b81-b9f4-079402a9464a';
    $display->content['new-8567ca5b-9641-4b81-b9f4-079402a9464a'] = $pane;
    $display->panels['two_33_66_second'][2] = 'new-8567ca5b-9641-4b81-b9f4-079402a9464a';
    $pane = new stdClass();
    $pane->pid = 'new-e627add5-b6cb-4c15-8ff7-40caca347d88';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'title_linked',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'title_style' => 'h1',
        'title_link' => '',
        'title_class' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e627add5-b6cb-4c15-8ff7-40caca347d88';
    $display->content['new-e627add5-b6cb-4c15-8ff7-40caca347d88'] = $pane;
    $display->panels['two_33_66_second'][3] = 'new-e627add5-b6cb-4c15-8ff7-40caca347d88';
    $pane = new stdClass();
    $pane->pid = 'new-55cd68c0-3a53-4a0d-af36-35da29489356';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '55cd68c0-3a53-4a0d-af36-35da29489356';
    $display->content['new-55cd68c0-3a53-4a0d-af36-35da29489356'] = $pane;
    $display->panels['two_33_66_second'][4] = 'new-55cd68c0-3a53-4a0d-af36-35da29489356';
    $pane = new stdClass();
    $pane->pid = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bb5618ef-915c-4faa-ba77-bbb198184e22';
    $display->content['new-bb5618ef-915c-4faa-ba77-bbb198184e22'] = $pane;
    $display->panels['two_33_66_second'][5] = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
    $pane = new stdClass();
    $pane->pid = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_document_file';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $display->content['new-4217fe9c-2561-438d-847c-4a289f5b4bf0'] = $pane;
    $display->panels['two_33_66_second'][6] = 'new-4217fe9c-2561-438d-847c-4a289f5b4bf0';
    $pane = new stdClass();
    $pane->pid = 'new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'commons_bw_group';
    $pane->subtype = 'commons_bw_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $display->content['new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a'] = $pane;
    $display->panels['two_33_66_second'][7] = 'new-00393ec2-6b71-4caf-b7cd-1d3a7d08b01a';
    $pane = new stdClass();
    $pane->pid = 'new-77381d67-6d7f-4c46-9af1-932309cca488';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '77381d67-6d7f-4c46-9af1-932309cca488';
    $display->content['new-77381d67-6d7f-4c46-9af1-932309cca488'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-77381d67-6d7f-4c46-9af1-932309cca488';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-bb5618ef-915c-4faa-ba77-bbb198184e22';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function cbib_license_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'biblioteker';
  $page->task = 'page';
  $page->admin_title = 'Biblioteker';
  $page->admin_description = 'List of libraries';
  $page->path = 'biblioteker';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_biblioteker_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'biblioteker';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
      'three_25_50_25_top' => NULL,
      'three_25_50_25_first' => NULL,
      'three_25_50_25_second' => NULL,
      'three_25_50_25_third' => NULL,
      'three_25_50_25_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Biblioteker';
  $display->uuid = '2306af59-3795-475d-9047-aa533b674364';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9b62590-3c6d-4a51-bd6a-35028eec3fbb';
    $pane->panel = 'three_25_50_25_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9b62590-3c6d-4a51-bd6a-35028eec3fbb';
    $display->content['new-a9b62590-3c6d-4a51-bd6a-35028eec3fbb'] = $pane;
    $display->panels['three_25_50_25_first'][0] = 'new-a9b62590-3c6d-4a51-bd6a-35028eec3fbb';
    $pane = new stdClass();
    $pane->pid = 'new-594cc0e0-7fb5-4fd6-921c-743ac63c8d28';
    $pane->panel = 'three_25_50_25_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'biblioteker-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Biblioteker',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '594cc0e0-7fb5-4fd6-921c-743ac63c8d28';
    $display->content['new-594cc0e0-7fb5-4fd6-921c-743ac63c8d28'] = $pane;
    $display->panels['three_25_50_25_second'][0] = 'new-594cc0e0-7fb5-4fd6-921c-743ac63c8d28';
    $pane = new stdClass();
    $pane->pid = 'new-f13d3f24-7d8c-4b22-b3a1-8f67d2276d4c';
    $pane->panel = 'three_25_50_25_third';
    $pane->type = 'views_panes';
    $pane->subtype = 'license_contacts-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f13d3f24-7d8c-4b22-b3a1-8f67d2276d4c';
    $display->content['new-f13d3f24-7d8c-4b22-b3a1-8f67d2276d4c'] = $pane;
    $display->panels['three_25_50_25_third'][0] = 'new-f13d3f24-7d8c-4b22-b3a1-8f67d2276d4c';
    $pane = new stdClass();
    $pane->pid = 'new-a1e6381a-790d-47de-a400-c37404cb5fa6';
    $pane->panel = 'three_25_50_25_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1e6381a-790d-47de-a400-c37404cb5fa6';
    $display->content['new-a1e6381a-790d-47de-a400-c37404cb5fa6'] = $pane;
    $display->panels['three_25_50_25_top'][0] = 'new-a1e6381a-790d-47de-a400-c37404cb5fa6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-594cc0e0-7fb5-4fd6-921c-743ac63c8d28';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['biblioteker'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'licens_alle_licenser';
  $page->task = 'page';
  $page->admin_title = 'Licens: Alle licenser';
  $page->admin_description = '';
  $page->path = 'licens/alle';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_licens_alle_licenser_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'licens_alle_licenser';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Alle sider',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'cb_3col_special';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '306b40a8-935b-4989-9018-edb001ded7a1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4512c135-7653-4c08-8555-bff26340af73';
    $pane->panel = 'cb3_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4512c135-7653-4c08-8555-bff26340af73';
    $display->content['new-4512c135-7653-4c08-8555-bff26340af73'] = $pane;
    $display->panels['cb3_first'][0] = 'new-4512c135-7653-4c08-8555-bff26340af73';
    $pane = new stdClass();
    $pane->pid = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $pane->panel = 'cb3_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Alle licenser',
      'body' => '<p>Beskrivelse af hvad man kan under den enkelte licens.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $display->content['new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7'] = $pane;
    $display->panels['cb3_second'][0] = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
    $pane = new stdClass();
    $pane->pid = 'new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
    $pane->panel = 'cb3_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
    $display->content['new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572'] = $pane;
    $display->panels['cb3_top'][0] = 'new-58cf3235-ab11-4a3e-8eca-6a4c2ca3d572';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4444e8ca-5ea5-4127-af93-b9b6832fc8f7';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['licens_alle_licenser'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'licens_formidling_og_pr';
  $page->task = 'page';
  $page->admin_title = 'Licens: Formidling og PR';
  $page->admin_description = '';
  $page->path = 'licens/formidling-og-pr';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_licens_formidling_og_pr_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'licens_formidling_og_pr';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Formidling og PR',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '066a4980-4a51-40d8-937d-baa2f5b1ebc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-605bb746-e142-4c61-a872-ebee25f5019f';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '605bb746-e142-4c61-a872-ebee25f5019f';
    $display->content['new-605bb746-e142-4c61-a872-ebee25f5019f'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-605bb746-e142-4c61-a872-ebee25f5019f';
    $pane = new stdClass();
    $pane->pid = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Formidling og PR',
      'body' => '<p>På denne side finder du materialer om generel formidling, PR og markedsføring af licenserne.</p>

<p>Materialer der knytter sig til specifikke licenser kan findes under de enkelte licenser.</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $display->content['new-606be5d3-2d49-49d3-98cb-adeca977f2cb'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
    $pane = new stdClass();
    $pane->pid = 'new-8aae556c-3495-4dd9-9fd7-3c66304f14f5';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'formidling_og_pr_dokumenter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8aae556c-3495-4dd9-9fd7-3c66304f14f5';
    $display->content['new-8aae556c-3495-4dd9-9fd7-3c66304f14f5'] = $pane;
    $display->panels['two_33_66_second'][1] = 'new-8aae556c-3495-4dd9-9fd7-3c66304f14f5';
    $pane = new stdClass();
    $pane->pid = 'new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
    $display->content['new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-2f4c6053-bae2-4034-bd2e-828e9dd39bd9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-606be5d3-2d49-49d3-98cb-adeca977f2cb';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['licens_formidling_og_pr'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'license_ambassadors';
  $page->task = 'page';
  $page->admin_title = 'License ambassadors';
  $page->admin_description = '';
  $page->path = 'licens/ambassadoerliste';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_license_ambassadors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'license_ambassadors';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'cb3_top' => NULL,
      'cb3_first' => NULL,
      'cb3_second' => NULL,
      'cb3_third' => NULL,
      'cb3_bottom' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87d8c197-2061-4e54-b955-10fa41bcfcde';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '0',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $display->content['new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-2be5ba3a-4590-4d63-b0e3-86d9d646d15a';
    $pane = new stdClass();
    $pane->pid = 'new-dfc59a03-21d9-45f2-a168-39b1b3f76001';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'ambassad_rliste-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Ambassadørliste',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dfc59a03-21d9-45f2-a168-39b1b3f76001';
    $display->content['new-dfc59a03-21d9-45f2-a168-39b1b3f76001'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-dfc59a03-21d9-45f2-a168-39b1b3f76001';
    $pane = new stdClass();
    $pane->pid = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
    $display->content['new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-17c3963f-a00b-4ae2-98a7-de74c82cbe3b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['license_ambassadors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_license_news';
  $page->task = 'page';
  $page->admin_title = 'Licens nyheder';
  $page->admin_description = 'displaying all license-news';
  $page->path = 'licens/nyheder';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_license_news_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'page_license_news';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Licens nyheder',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_33_66';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_33_66_top' => NULL,
      'two_33_66_first' => NULL,
      'two_33_66_second' => NULL,
      'two_33_66_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a1d6cbb9-ee05-41e1-8d9c-993e72f20739';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c165ac5a-c750-409c-a35a-69d40ae592a0';
    $pane->panel = 'two_33_66_first';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c165ac5a-c750-409c-a35a-69d40ae592a0';
    $display->content['new-c165ac5a-c750-409c-a35a-69d40ae592a0'] = $pane;
    $display->panels['two_33_66_first'][0] = 'new-c165ac5a-c750-409c-a35a-69d40ae592a0';
    $pane = new stdClass();
    $pane->pid = 'new-c22a100c-d97e-47ee-9f6b-9bf3385b80a0';
    $pane->panel = 'two_33_66_second';
    $pane->type = 'views_panes';
    $pane->subtype = 'centralbibliotek_license-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c22a100c-d97e-47ee-9f6b-9bf3385b80a0';
    $display->content['new-c22a100c-d97e-47ee-9f6b-9bf3385b80a0'] = $pane;
    $display->panels['two_33_66_second'][0] = 'new-c22a100c-d97e-47ee-9f6b-9bf3385b80a0';
    $pane = new stdClass();
    $pane->pid = 'new-63cfa452-7905-4781-8a4a-3851ddad50d9';
    $pane->panel = 'two_33_66_top';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-license-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63cfa452-7905-4781-8a4a-3851ddad50d9';
    $display->content['new-63cfa452-7905-4781-8a4a-3851ddad50d9'] = $pane;
    $display->panels['two_33_66_top'][0] = 'new-63cfa452-7905-4781-8a4a-3851ddad50d9';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_license_news'] = $page;

  return $pages;

}
