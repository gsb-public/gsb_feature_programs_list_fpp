<?php
/**
 * @file
 * gsb_feature_programs_list_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_programs_list_fpp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_filters|fieldable_panels_pane|programs_list|form';
  $field_group->group_name = 'group_filters';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'programs_list';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filters',
    'weight' => '3',
    'children' => array(
      0 => 'field_tag',
      1 => 'field_program_category_unlimited',
      2 => 'field_key_program_topics',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-filters field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_filters|fieldable_panels_pane|programs_list|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Filters');

  return $field_groups;
}
