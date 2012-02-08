<h2>Register a new user</h2>
<?php
  if ((!$auth->is_anonymous()) && ($user->get_status() == "admin")) {
?>
<div class="row">
  <div class="span12">
    <form action="?action=registernew" method="post">
      <fieldset>
        <div class="clearfix">
          <label for="xlInput"><b>Email Address</b></label>
          <div class="input">
            <input class="xlarge" id="xlInput" name="email" size="30" type="text" />
          </div>
        </div><!-- /clearfix -->
        <div class="clearfix">
          <label for="xlInput"><b>Username</b></label>
          <div class="input">
            <input class="xlarge" id="xlInput" name="username" size="30" type="text" />
          </div>
        </div><!-- /clearfix -->
        <div class="clearfix">
          <label for="xlInput"><b>Password</b></label>
          <div class="input">
            <input class="xlarge" id="xlInput" name="passwd" size="30" type="password" />
          </div>
        </div><!-- /clearfix -->
		<div class="clearfix">
          <label for="xlInput"><b>Status</b></label>
          <div class="input">
            <input class="xlarge" id="xlInput" name="status" size="30" type="text" />
          </div>
        </div><!-- /clearfix -->
        <div class="actions">
          <input type="submit" class="btn primary" value="Submit">&nbsp;<button type="reset" class="btn">Cancel</button>
        </div>
      </fieldset>
    </form>
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
