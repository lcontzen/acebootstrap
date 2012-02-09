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
	<link href="./themes/<?php echo $config->get_site_theme(); ?>/css/style.css" rel="stylesheet">
    <link href="./themes/<?php echo $config->get_site_theme(); ?>/css/prettify.css" rel="stylesheet">
    <style type="text/css">
	  body {
		  padding-top: 60px;
	  }
	</style>
	<script type="text/javascript" src="./themes/<?php echo $config->get_site_theme(); ?>/js/jquery-1.5.2.min.js"></script>
    <!-- <script src="http://autobahn.tablesorter.com/jquery.tablesorter.min.js"></script> -->
    <script type="text/javascript" src="./themes/<?php echo $config->get_site_theme(); ?>/js/prettify.js"></script>
    <script>$(function () { prettyPrint() })</script>
	<script type="text/javascript" src="./themes/<?php echo $config->get_site_theme(); ?>/js/bootstrap-dropdown.js"></script>
	<script type="text/javascript" src="./themes/<?php echo $config->get_site_theme(); ?>/js/application.js"></script>
  </head>
  
  <body>
	
    <div class="topbar-wrapper" style="z-index: 5;">
	  <div class="topbar" data-dropdown="dropdown">
		<div class="topbar-inner">
          <div class="container">
			<a class="brand" href="?action=home"><?php echo $config->get_site_name(); ?></a>
			<ul class="nav">
              <li><a href="?action=home">Accueil</a></li>
              <li><a href="?action=comite">Comité</a></li>
              <li><a href="?action=photos">Photos</a></li>
              <li><a href="?action=contact">Contact</a></li>
			</ul>
			<?php
			  if ((!$auth->is_anonymous()) && ($user->get_status() == "admin")) {
			?>
			<ul class="nav secondary-nav">
			  <li class="dropdown">
				<a href="#" class="dropdown-toggle"><?php echo $user->get_username(); ?></a>
				<ul class="dropdown-menu">
                  <li><a href="?action=admin">Admin</a></li>
                  <li><a href="#">Todo</a></li>
                  <li class="divider"></li>
                  <li><a href="?action=logout">Logout</a></li>
				</ul>
              </li>
			</ul>
			<?php
			  }
			?>
          </div>
		</div>
      </div> 
	</div>
	
	<div class="container-fluid">
	  <div class="sidebar">
		<div class="well">
		  <b>Documents</b>
		  <ul>
			<li><a href="?action=listesace">Listes ACE</a></li>
			<li><a href="?action=vlecks">Listes Vlecks</a></li>
			<!-- <li><a href="?action=charte">Charte Horaire</a></li> -->
			<!-- <li><a href="?action=amendes">Amendes Jefke</a></li> -->
			<!-- <li><a href="?action=facturejefke">Facture Jefke</a></li> -->
			<!-- <li><a href="?action=statuts">Statuts de lACE</a></li> -->
			<!-- <li><a href="?action=postes">Description des postes</a></li> -->
			<li><a href="?action=heresie">Hérésie</a></li>
		  </ul>
		  <b>Agenda</b>
		  <ul>
			<li><a href="?action=tds">TDs</a></li>
			<li><a href="?action=bals">Bals</a></li>
		  </ul>
		  <b>Activités</b>
		  <ul>
			<!-- <li><a href="?action=saintv">Saint V</a></li> -->
			<li><a href="?action=quetesociale">Quête Sociale</a></li>
			<li><a href="?action=ntv">Nuit Théodore Verhaegen</a></li>
		  </ul> 
		  <b>Divers</b>
		  <ul>
			<li><a href="?action=links">Liens</a></li>
			<?php
			  if ($auth->is_anonymous()) {
			?>
			<li><a href="?action=loginpage">Login</a></li>
			<?php
			  } else {
			?>
			<li><a href="?action=logout">Logout</a></li>
			<?php
			  }
			?>
		  </ul>
		</div>
	  </div> 
	  <div class="content">
		<div class="row">		  
		  <div class="span16">
			<?php
			  include_once("pages/" . $action . ".inc");
			?>
			
			<footer>
			  <p>&copy; Association des Cercles Etudiants 2011-2012 | Contact : webmaster@ace-ulb.org |  HTML5 Valid : <a href="http://validator.w3.org/check?uri=http%3A%2F%2Face-ulb.org%2Fnew%2F"><img src="data/images/valid_html5.png" alt="Valid html5" /></a></p>
			</footer>
		  </div>
		</div>

	  </div> <!-- /container -->
	  
	</div>
  </body>
</html>
