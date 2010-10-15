<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ca_faq_content_default_fields() {
  module_load_include('inc', 'ca_faq', 'ca_faq.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ca_faq_ctools_plugin_api() {
  module_load_include('inc', 'ca_faq', 'ca_faq.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function ca_faq_node_info() {
  module_load_include('inc', 'ca_faq', 'ca_faq.features.node');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_node_info', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function ca_faq_default_page_manager_pages() {
  module_load_include('inc', 'ca_faq', 'ca_faq.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_faq_user_default_permissions() {
  module_load_include('inc', 'ca_faq', 'ca_faq.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function ca_faq_strongarm() {
  module_load_include('inc', 'ca_faq', 'ca_faq.defaults');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function ca_faq_views_default_views() {
  module_load_include('inc', 'ca_faq', 'ca_faq.features.views');
  $args = func_get_args();
  return call_user_func_array('_ca_faq_views_default_views', $args);
}
