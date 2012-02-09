<div class="page-header">
  <h1>Contact</h1>
</div>
<div class="row">
  <div class="span11">
	<h3>Formulaire de contact</h3>
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
			  echo "Adresse mail non valide";
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
		  include("forms/contact.inc");
		}
	?>
  </div>
  <div class="span5">
	<h3>Téléphone</h3>
	<p>02/650.25.14 </p>
	<h3>Adresse postale</h3>
	<p>Association des Cercles Etudiants ASBL<br />
	  Av. Paul Héger, 22 CP 166/09  <br />
	  1000 Bruxelles </p>
	<h3>Numéro de compte</h3>
	<p>BE61 001-0810667-17</p>
  </div>
</div>
