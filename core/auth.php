<?php
require_once("core/user.php");

class Auth {
  private $user;
  private $anonymous;
  
  public function __construct() {
	session_start();
  		if (isset ($_SESSION['email']) && isset ($_SESSION['passwd'])) {
			session_start ();
			$data = Data::create ();
			extract ($_SESSION, EXTR_PREFIX_ALL, "auth");
			$req = "SELECT Email,Password FROM Users WHERE (Email = '$auth_email' AND Password = '$auth_passwd')";
			$result = $data->request ($req);
			if (mysql_num_rows ($result) == 0) {
				session_destroy ();
				throw new Exception (get_class ($this) . " : Bad email or password !");
			}
			$line = mysql_fetch_array ($result);
			$_SESSION['email'] = $line['Email'];
			$_SESSION['passwd'] = $line['Password'];
			$this->user = new User ($line['Email']);
			$this->anonymous = false;
		}
		
		else if (isset ($_GET['action']) && $_GET['action'] == "signin") {
			$data = Data::create ();
			extract ($_POST, EXTR_PREFIX_ALL, "auth");
			$req = "SELECT Email,Password FROM Users WHERE (Email = '$auth_email' AND Password = '$auth_passwd')";
			$result = $data->request ($req);
			if (mysql_num_rows ($result) == 0) {
				session_destroy ();
				throw new Exception (get_class ($this) . " : Bad email or password !");
			}
			$line = mysql_fetch_array ($result);
			$_SESSION['email'] = $line['Email'];
			$_SESSION['passwd'] = $line['Password'];
			$this->user = new User ($line['Email']);
			$this->anonymous = false;
		}
		else {
			$this->anonymous = true;
		}
	}

	public function disconnect () {
		session_destroy ();
		$this->anonymous = true;
	}

	public function is_anonymous () { return $this->anonymous; }
	public function get_user () { return $this->user; }
}

?>