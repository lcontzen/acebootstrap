<?php
require_once("core/config.php");

class Data {
  private static $instance;
  private $connection;
  
  private function __construct() {
	$config = new Config();
	$this->connection = mysql_connect($config->get_mysql_srv_addr() . ":" . $config->get_mysql_srv_port(), $config->get_mysql_srv_user(), $config->get_mysql_srv_pass());
	if ($this->connection == false)
	  throw new Exception("MySql connection failed! log : " . mysql_error(), mysql_errno());
	if (mysql_select_db($config->get_mysql_db_name(), $this->connection) == false)
	  throw new Exception("MySql db selection failed! log : " . mysql_error($this->connection), mysql_errno($this->connection));
  }
  
  public static function create() {
	if(!isset(self::$instance)) {
	  $c = __CLASS__;
	  self::$instance = new $c;
	}
	return self::$instance;
  }
  
  public function request ($req) {
	$result = mysql_query ($req, $this->connection);
	if ($result == false && mysql_errno ($this->connection) != 1062)
	  throw new Exception ("Mysql request failed! : " . mysql_error ($this->connection), mysql_errno ($this->connection));
	return $result;
  }
  
  public function __destruct () {
	if (mysql_close ($this->connection) == false)
	  throw new Exception ("Mysql disconnection failed! : " . mysql_error ($this->connection), mysql_errno ($this->connection));
  }
}	
?>