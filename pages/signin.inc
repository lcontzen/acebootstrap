<?php
if(!$auth->is_anonymous()) {
  echo "<h1>Welcome back " . $user->get_username() . "</h1>";
}
?>