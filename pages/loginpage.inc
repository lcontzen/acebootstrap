<div class="page-header">
  <h1>Test</h1> 
</div>

<?php
   if($auth->is_anonymous()) {
?>
<form method="post" id="login_form" action="?action=signin">
  <fieldset>
	<div class="clearfix">
	  <label for="login">Login</label>
	  <div class="input">
		<input class="xlarge" id="login" name="username" size="30" type="text" placeholder="Login" />
	  </div>
	</div>

	<div class="clearfix">
	  <label for="passwd">Passwd</label>
	  <div class="input">
		<input class="xlarge" id="passwd" name="passwd" size="30" type="password" placeholder="Password" />
	  </div>
	</div>

	<div class="actions">
	  <input type="submit" class="btn primary"name="send" value="Login" />
	</div>
  </fieldset>
</form>
<?php
   } else {
?>
<p>ohai</p>
<?php
   }
?>
