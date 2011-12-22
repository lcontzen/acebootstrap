<div class="page-header">
  <h1>Contact</h1>
</div>

<?php
   function spamcheck($field)
  {
	//filter_var() sanitizes the e-mail
	//address using FILTER_SANITIZE_EMAIL
	$field=filter_var($field, FILTER_SANITIZE_EMAIL);
	
	//filter_var() validates the e-mail
	//address using FILTER_VALIDATE_EMAIL
	if(filter_var($field, FILTER_VALIDATE_EMAIL))
	  {
		return TRUE;
	  }
	else
	  {
		return FALSE;
	  }
  }
   
   if (isset($_REQUEST['email']))
	 {//if "email" is filled out, proceed
	   
	   //check if the email address is invalid
	   $mailcheck = spamcheck($_REQUEST['email']);
	   if ($mailcheck==FALSE)
		 {
		   echo "Invalid input";
		 }
	   else
		 {//send email
		   $email = $_REQUEST['email'] ;
		   $subject = $_REQUEST['subject'] ;
		   $message = $_REQUEST['message'] ;
		   mail("lcontzen@gmail.com", "Subject: $subject",
				$message, "From: $email" );
		   echo "Mail envoyé!";
		 }
	 }
   else
	 {//if "email" is not filled out, display the form
	   echo "<form method='post' action='?action=contact'>
  Email: <input name='email' type='text' /><br />
  Subject: <input name='subject' type='text' /><br />
  Message:<br />
  <textarea name='message' rows='15' cols='200'>
  </textarea><br />
  <input type='submit' />
  </form>";
	 }
?>
