<?php
require_once ("core/data.php");

class User {
  private $id;
  private $email;
  private $password;
  private $username;
  private $status;

  public function __construct($email, $password, $username, $status) {
	$data = Data::create();
	if(!isset($password)) {
	  $req = "SELECT * FROM Users WHERE Email LIKE '$email'";
	  $result = $data->request($req);
	  if (mysql_num_rows($result) == 0)
		throw new Exception("User $email not found");
	  $line = mysql_fetch_array($result);
	  $this->email = $line['Email'];
	  $this->password = $line['Password'];
	  $this->username = $line['Username'];
	  $this->status = $line['Status'];
	}
	else {
	  $req = "SELECT * FROM Users WHERE Email LIKE '$email'";
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

  public function get_mail_addr() {
	return $this->email;
  }
}

?>