<?php
require_once("core/config.php");
require_once("core/auth.php");
require_once("core/data.php");
require_once("core/user.php");

try {
  $auth = new Auth();
  $config = new Config();
  $action = isset ($_GET['action']) ? $_GET['action'] : "home";
  if (!$auth->is_anonymous()) {
	$user = $auth->get_user();
	if ($action == 'logout') {
	  $auth->disconnect();
	  $action = 'home';
	}
	if ($action == 'registernew' && isset ($_POST['username'])) {
	  extract ($_POST, EXTR_PREFIX_ALL, "reg");
	  $hashed_passwd = sha1($reg_passwd);
	  $user->register_new_user($reg_username,
							   $hashed_passwd,
							   $reg_email,
							   $reg_status);
	  $action = "admin";
	}
  }
  include("pages/page.inc");
}
catch (Exception $e) {
  echo "Exception catched : " . $e->getMessage() . "<br />";
}
?>