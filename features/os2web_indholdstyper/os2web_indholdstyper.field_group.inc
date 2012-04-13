<?php
/**
 * @file
 * os2web_indholdstyper.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_indholdstyper_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billeder|node|contentpage|form';
  $field_group->group_name = 'group_billeder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billeder',
    'weight' => '1',
    'children' => array(
      0 => 'field_lead_image',
      1 => 'field_mediafile',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_billeder|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billeder|node|spotbox|form';
  $field_group->group_name = 'group_billeder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spotbox';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '2',
    'children' => array(
      0 => 'field_lead_image',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_billeder|node|spotbox|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billede|node|news|form';
  $field_group->group_name = 'group_billede';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billede',
    'weight' => '1',
    'children' => array(
      0 => 'field_lead_image',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Billede',
    ),
  );
  $export['group_billede|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borgerdk|node|contentpage|form';
  $field_group->group_name = 'group_borgerdk';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Borger.dk',
    'weight' => '2',
    'children' => array(
      0 => 'field_borger_url',
      1 => 'field_local_coda',
      2 => 'field_local_intro',
      3 => 'field_local_title',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_borgerdk|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_esdh|node|contentpage|form';
  $field_group->group_name = 'group_esdh';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ESDH',
    'weight' => '2',
    'children' => array(
      0 => 'field_case',
      1 => 'field_doc',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_esdh|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_extras|node|contentpage|form';
  $field_group->group_name = 'group_extras';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi og emner',
    'weight' => '3',
    'children' => array(
      0 => 'field_termref_kle',
      1 => 'field_editortags',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Taksonomi og emner',
    ),
  );
  $export['group_extras|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|node|contentpage|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Generelt',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_resume_long',
      2 => 'field_site_structure',
      3 => 'title',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_general|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe3|node|contentpage|form';
  $field_group->group_name = 'group_gruppe3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '4',
    'children' => array(
      0 => 'path',
      1 => 'additional_settings',
      2 => 'revision_information',
      3 => 'revision',
      4 => 'author',
      5 => 'name',
      6 => 'date',
      7 => 'options',
      8 => 'promote',
      9 => 'link',
      10 => 'alias',
      11 => 'pathauto',
      12 => 'print',
      13 => 'label',
      14 => 'print_display',
      15 => 'print_display_urllist',
      16 => 'group_hidden',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_gruppe3|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|contentpage|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_gruppe3';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '33',
    'children' => array(
      0 => 'field_source_id',
      1 => 'log',
      2 => 'sticky',
      3 => 'print_display_comment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|galleri|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'galleri';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '5',
    'children' => array(
      0 => 'field_inherit_right_column',
      1 => 'field_lead_image',
      2 => 'field_parent_node',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|galleri|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|news|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_indstillinger';
  $field_group->data = array(
    'label' => 'Skjult',
    'weight' => '38',
    'children' => array(
      0 => 'field_additional_info',
      1 => 'field_related',
      2 => 'field_related_tema',
      3 => 'field_source_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_hidden|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_indstillinger|node|news|form';
  $field_group->group_name = 'group_indstillinger';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Indstillinger',
    'weight' => '3',
    'children' => array(
      0 => 'path',
      1 => 'group_hidden',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_indstillinger|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|spotbox|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'spotbox';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'field_url',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_links|node|spotbox|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_menu|node|contentpage|form';
  $field_group->group_name = 'group_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Menu',
    'weight' => '11',
    'children' => array(
      0 => 'menu',
      1 => 'enabled',
      2 => 'link_title',
      3 => 'description',
      4 => 'parent',
      5 => 'weight',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Menu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'husk-menuen',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_menu|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column_unique|node|contentpage|form';
  $field_group->group_name = 'group_right_column_unique';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = '';
  $export['group_right_column_unique|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right_column|node|contentpage|form';
  $field_group->group_name = 'group_right_column';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contentpage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Højrespalte Genbrug',
    'weight' => '10',
    'children' => array(
      0 => 'field_inherit_right_column',
      1 => 'field_parent_node',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => NULL,
    ),
  );
  $export['group_right_column|node|contentpage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taksonomi|node|news|form';
  $field_group->group_name = 'group_taksonomi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taksonomi',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'multistep',
    'format_settings' => array(
      'formatter' => '',
    ),
  );
  $export['group_taksonomi|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tekst|node|news|form';
  $field_group->group_name = 'group_tekst';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_resume_long',
      2 => 'field_site_structure',
      3 => 'title',
    ),
    'format_type' => 'multistep',
    'format_settings' => array(
      'label' => 'Tekst',
    ),
  );
  $export['group_tekst|node|news|form'] = $field_group;

  return $export;
}