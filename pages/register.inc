<h2>Register a new user</h2>
<?php
  if ((!$auth->is_anonymous()) && ($user->get_status() == "admin")) {
?>
<div class="row">
  <div class="span12">
	<?php
	  include ("forms/register.inc");
	?>
  </div>
</div>
<?php
	} else {
?>
<p>You need to be logged in to add a new user. Forgot to log in?</p>
<?php
	include("forms/login.inc");
	}
?>
