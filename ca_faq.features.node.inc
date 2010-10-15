<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _ca_faq_node_info() {
  $items = array(
    'ca_faq' => array(
      'name' => t('Frequently Asked Questions'),
      'module' => 'features',
      'description' => t('Frequently Asked Questions can be very useful to end users looking for answers to questions about your company.  Simply add your question and answer here and then arrange the question as appropriate on the faq page.'),
      'has_title' => '1',
      'title_label' => t('Question Snippet'),
      'has_body' => '1',
      'body_label' => t('Answer'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
