<?php
/**
 * @file
 * API for gp_global.
 */

function gp_global_get_front_project_nidlist() {
  $efq = new EntityFieldQuery();

  $efq->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'project')
    ->propertyCondition('status', 1)
    ->range(0, 20);

  $results = $efq->execute();
  $ret = isset($results['node']) ? array_keys($results['node']) : array();
  return $ret;
}
