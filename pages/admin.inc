<?php
  if ($auth->is_anonymous()) {
	include("loginpage.inc");
  } else { 
?>

<div class="page-header">
  <h1>Site administration</h1>
</div>

<?php
  }
?>