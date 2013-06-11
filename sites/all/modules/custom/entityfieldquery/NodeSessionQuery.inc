<?php
/**
 * User: jhalak
 */

class NodeSessionQuery extends EntityFieldQuery {
  public function __construct() {
    return $this->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'session');
  }
}