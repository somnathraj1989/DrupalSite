<?php
/**
 * @file
 * permission.administer_workbench_access.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer workbench access',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'workbench_access',
);
