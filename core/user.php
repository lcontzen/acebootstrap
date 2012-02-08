<?php
require_once ("core/data.php");

class User {
  private $id;
  private $email;
  private $password;
  private $username;
  private $status;
  
  public function __construct($username, $password, $email, $status) {
	$data = Data::create();
	if(!isset($password)) {
	  $req = "SELECT * FROM Users WHERE Username LIKE '$username'";
	  $result = $data->request($req);
	  if (mysql_num_rows($result) == 0)
		throw new Exception("User $username not found in User::__construct first if");
	  $line = mysql_fetch_array($result);
	  $this->email = $line['Email'];
	  $this->password = $line['Password'];
	  $this->username = $line['Username'];
	  $this->status = $line['Status'];
	}
  }
  
  public function get_mail_addr() { return $this->email; }
  public function get_username() { return $this->username; }
  public function get_status() {return $this->status; }

  public function register_new_user($username, $password, $email, $status) {
	$data = Data::create();
	$req = "SELECT * FROM Users WHERE Username LIKE '$username'";
	$result = $data->request($req);
	if (mysql_num_rows($result) == 0) {
	  $new_email = utf8_decode ($email);
	  $new_password = utf8_decode ($password);
	  $new_username = utf8_decode ($username);
	  $new_status = utf8_decode ($status);
	  $req = "INSERT INTO Users (Email, Username, Password, Status)";
	  $req .= " VALUES ('$new_email', '$new_username', '$new_password', '$new_status')";
	  $data->request($req);
	}
	else
	  throw new Exception("Mail address already present in db");
  }
  
}

?>