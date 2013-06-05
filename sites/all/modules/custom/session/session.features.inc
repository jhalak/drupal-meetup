<?php
/**
 * @file
 * session.features.inc
 */

/**
 * Implements hook_views_api().
 */
function session_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function session_node_info() {
  $items = array(
    'session' => array(
      'name' => t('Session'),
      'base' => 'node_content',
      'description' => t('Session content type'),
      'has_title' => '1',
      'title_label' => t('Session title'),
      'help' => '',
    ),
  );
  return $items;
}
