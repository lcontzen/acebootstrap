<?php
require_once("core/config.php");
require_once("core/auth.php");
require_once("core/data.php");
require_once("core/user.php");

try {
  $auth = new Auth();
  $config = new Config();
  $action = isset ($_GET['action']) ? $_GET['action'] : "home";
  if ($auth->is_anonymous ()) {
	if ($action == "registernew" && isset ($_POST['email'])) {
	  extract ($_POST, EXTR_PREFIX_ALL, "reg");
	  $user = new User ($reg_email,
						$reg_passwd,
						$reg_username,
						'temp');
	  $action = "signin";
	}
  }
  else {
	$user = $auth->get_user();
	if ($action == 'logout') {
	  $auth->disconnect();
	  $action = 'home';
	}
  }
  
  include("pages/page.inc");
}
catch (Exception $e) {
  echo "Exception catched : " . $e->getMessage() . "<br />";
}
?>