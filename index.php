<?php
require_once("core/config.php");
require_once("core/data.php");
require_once("core/user.php");

try {
  $config = new Config();
  $action = isset ($_GET['action']) ? $_GET['action'] : "home";
  include("pages/page.inc");
}
catch (Exception $e) {
  echo "Exception catched : " . $e->getMessage() . "<br />";
}
?>