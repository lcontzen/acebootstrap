<div class="page-header">
  <h1>Login</h1> 
</div>

<?php
   if($auth->is_anonymous()) {
	 include ("loginform.inc");
   } else {
?>
<p>ohai</p>
<?php
   }
?>
