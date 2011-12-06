<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
	<title><?php echo $config->get_site_name(); ?></title>
    <!-- <title>Association des Cercles Etudiants</title> -->
    <meta name="description" content="">
    <meta name="author" content="">

    <!-- Le HTML5 shim, for IE6-8 support of HTML elements -->
    <!--[if lt IE 9]>
      <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->

    <!-- Le styles -->
	<!-- <link rel="stylesheet" href="http://twitter.github.com/bootstrap/1.4.0/bootstrap.min.css"> -->
	<link href="./themes/<?php echo $config->get_site_theme(); ?>/css/style.css" rel="stylesheet">
    <link href="assets/js/google-code-prettify/prettify.css" rel="stylesheet">
    <style type="text/css">
      body {
        padding-top: 60px;
      }
    </style>
	  <script src="http://code.jquery.com/jquery-1.5.2.min.js"></script>
      <script src="http://autobahn.tablesorter.com/jquery.tablesorter.min.js"></script>
      <script src="assets/js/google-code-prettify/prettify.js"></script>
      <script>$(function () { prettyPrint() })</script>
	  <script src="bootstrap-dropdown.js"></script>
    <!-- Le fav and touch icons -->
    <link rel="shortcut icon" href="images/favicon.ico">
    <link rel="apple-touch-icon" href="images/apple-touch-icon.png">
    <link rel="apple-touch-icon" sizes="72x72" href="images/apple-touch-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="114x114" href="images/apple-touch-icon-114x114.png">
  </head>

  <body>
	
    <div class="topbar">
      <div class="fill">
        <div class="container">
	<a class="brand" href="?action=home"><?php echo $config->get_site_name(); ?></a>
          <ul class="nav">
            <li><a href="?action=home">Accueil</a></li>
            <li><a href="?action=comite">Comité</a></li>
            <li><a href="?action=photos">Photos</a></li>
            <li><a href="?action=contact">Contact</a></li>
          </ul>
<!--		  <ul class="nav secondary-nav">
           <li class="dropdown">
              <a href="#" class="dropdown-toggle">Dropdown</a>
              <ul class="dropdown-menu">
                <li><a href="#">Secondary link</a></li>
                <li><a href="#">Something else here</a></li>
                <li class="divider"></li>
                <li><a href="#">Another link</a></li>
              </ul>
            </li>
	        <li><a href="?action=login">Login</a></li>
          </ul> -->
	      <form action="?action=signin" class="pull-right" method="post">
               <input class="input-small" type="text" name="username" placeholder="Username">
               <input class="input-small" type="password" name="passwd" placeholder="Password">
               <button class="btn" type="submit">Sign in</button>
          </form>
        </div>
      </div>
    </div>

	<div class="container-fluid">
      <div class="sidebar">
        <div class="well">
          <h5>Documents</h5>
          <ul>
            <li><a href="?action=listesace">Listes ACE</a></li>
            <li><a href="?action=vlecks">Listes Vlecks</a></li>
            <li><a href="?action=charte">Charte Horaire</a></li>
            <li><a href="?action=amendes">Amendes Jefke</a></li>
            <li><a href="?action=facturejefke">Facture Jefke</a></li>
            <li><a href="?action=statuts">Statuts de lACE</a></li>
            <li><a href="?action=postes">Description des postes</a></li>
          </ul>
          <h5>Agenda</h5>
          <ul>
            <li><a href="#">TDs</a></li>
            <li><a href="#">Bals</a></li>
            <li><a href="#">Autres</a></li>
          </ul>
          <h5>Divers</h5>
          <ul>
            <li><a href="#">Link</a></li>
            <li><a href="#">Link</a></li>
          </ul>
	      <h5><a href="?action=register">Register</a></h5>
        </div>
      </div>
      <div class="content">

	<?php
	include_once("pages/" . $action . ".inc");
?>
		
      <footer>
        <p>&copy; Company 2011</p>
      </footer>
	  
    </div> <!-- /container -->
	
	
  </body>
</html>
