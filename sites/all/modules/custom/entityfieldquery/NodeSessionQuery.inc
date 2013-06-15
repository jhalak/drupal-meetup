<?php
/**
 * User: jhalak
 */

class NodeSessionQuery extends EntityFieldQuery {
  public function __construct() {
    return $this->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'session')
      ->propertyCondition('status', 1)
      ->range(0, 10)
      ->addMetaData('account', user_load(1));
  }
}