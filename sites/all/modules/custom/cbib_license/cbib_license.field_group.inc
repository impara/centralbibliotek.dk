<?php
/**
 * @file
 * cbib_license.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cbib_license_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_etc|node|license|form';
  $field_group->group_name = 'group_etc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Diverse',
    'weight' => '8',
    'children' => array(
      0 => 'field_license_abbreviated_title',
      1 => 'field_license_access_statistic',
      2 => 'field_license_newsletter',
      3 => 'field_license_payment',
      4 => 'field_license_periode',
      5 => 'field_license_pid',
      6 => 'field_license_proxy_start_url',
      7 => 'field_license_subscription',
      8 => 'field_license_update_frequency',
      9 => 'field_license_similar_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_etc|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|license|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '6',
    'children' => array(
      0 => 'field_faust_no',
      1 => 'field_language',
      2 => 'field_library_ref',
      3 => 'field_license_ambassador',
      4 => 'field_producer',
      5 => 'field_search_facility',
      6 => 'field_title_list_links',
      7 => 'field_titleliste',
      8 => 'field_license_target',
      9 => 'body',
      10 => 'field_license_search_example',
      11 => 'field_topics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-general field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_general|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_knowledge_center|node|license|form';
  $field_group->group_name = 'group_knowledge_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vidensbank',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-knowledge-center field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_knowledge_center|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_license_access|node|license|form';
  $field_group->group_name = 'group_license_access';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Licensadgange',
    'weight' => '7',
    'children' => array(
      0 => 'field_license_access_copy_lib',
      1 => 'field_license_access_copy_user',
      2 => 'field_license_access_ip',
      3 => 'field_license_access_note',
      4 => 'field_license_access_password',
      5 => 'field_license_access_print_lib',
      6 => 'field_license_access_print_user',
      7 => 'field_license_access_remote_user',
      8 => 'field_license_metadata',
      9 => 'field_license_data',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-license-access field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_license_access|node|license|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_license_documents|node|license|form';
  $field_group->group_name = 'group_license_documents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'license';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dokumenter',
    'weight' => '6',
    'children' => array(
      0 => 'field_license_documents',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dokumenter',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_license_documents|node|license|form'] = $field_group;

  return $export;
}
