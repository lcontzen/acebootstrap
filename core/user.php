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
	else {
	  $req = "SELECT * FROM Users WHERE Username LIKE '$username'";
	  $result = $data->request($req);
	  if (mysql_num_rows($result) == 0) {
		$this->email = utf8_decode ($email);
		$this->password = utf8_decode ($password);
		$this->username = utf8_decode ($username);
		$this->status = utf8_decode ($status);
		$req = "INSERT INTO Users (Email, Username, Password, Status)";
		$req .= " VALUES ('$this->email', '$this->username', '$this->password', '$this->status')";
		$data->request($req);
	  }
	  else
		throw new Exception("Mail address already present in db");
	}
  }

  public function get_mail_addr() { return $this->email; }
  public function get_username() { return $this->username; }
  
}

?>