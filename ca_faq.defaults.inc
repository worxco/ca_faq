<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _ca_faq_content_default_fields() {
  $fields = array();

  // Exported field: field_ca_faq_question
  $fields[] = array(
    'field_name' => 'field_ca_faq_question',
    'type_name' => 'ca_faq',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ca_faq_question][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Question',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Question'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _ca_faq_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_default_page_manager_pages().
 */
function _ca_faq_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'add_faq';
  $page->task = 'page';
  $page->admin_title = 'Add FAQ';
  $page->admin_description = '';
  $page->path = 'faq/add_faq';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'create ca_faq content',
        ),
        'context' => 'logged-in-user',
      ),
      '1' => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            '0' => 3,
          ),
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'or',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Create FAQ',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_add_faq_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'add_faq';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_faq',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['add_faq'] = $page;

  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'faq_admin';
  $page->task = 'page';
  $page->admin_title = 'FAQ Administration';
  $page->admin_description = '';
  $page->path = 'faq/admin/manage';
  $page->access = array(
    'plugins' => array(
      '0' => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'administer nodes',
        ),
        'context' => 'logged-in-user',
      ),
      '1' => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            '0' => 4,
          ),
        ),
        'context' => 'logged-in-user',
      ),
    ),
    'logic' => 'or',
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Manage',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '10',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_faq_admin_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'faq_admin';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'views_bulk_menu',
    'context_admin_vbo_views_bulk_node_type' => 'ca_faq',
    'context_admin_vbo_views_bulk_published' => 'both',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['faq_admin'] = $page;

 return $pages;

}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _ca_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_faq content
  $permissions[] = array(
    'name' => 'create ca_faq content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete any ca_faq content
  $permissions[] = array(
    'name' => 'delete any ca_faq content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: delete own ca_faq content
  $permissions[] = array(
    'name' => 'delete own ca_faq content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit any ca_faq content
  $permissions[] = array(
    'name' => 'edit any ca_faq content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: edit own ca_faq content
  $permissions[] = array(
    'name' => 'edit own ca_faq content',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  // Exported permission: sort faq questions
  $permissions[] = array(
    'name' => 'sort faq questions',
    'roles' => array(
      '0' => 'administrative user',
      '1' => 'webmaster',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _ca_faq_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_faq';
  $strongarm->value = '0';

  $export['comment_ca_faq'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_faq';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '-1',
    'comment_settings' => '1',
    'menu' => '-2',
    'path' => '0',
  );

  $export['content_extra_weights_ca_faq'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_faq';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_ca_faq'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_faq_pattern';
  $strongarm->value = 'faq/[title-raw]';

  $export['pathauto_node_ca_faq_pattern'] = $strongarm;
  return $export;
}
