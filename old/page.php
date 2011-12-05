<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <title>Association des Cercles Etudiants</title>
    <meta name="description" content="">
    <meta name="author" content="">

    <!-- Le HTML5 shim, for IE6-8 support of HTML elements -->
    <!--[if lt IE 9]>
      <script src="http://html5shim.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->

    <!-- Le styles -->
	<!-- <link rel="stylesheet" href="http://twitter.github.com/bootstrap/1.4.0/bootstrap.min.css"> -->
    <link href="./bootstrap.css" rel="stylesheet">
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

<!-- <div class="topbar-wrapper" style="z-index: 5;"> -->
<!--     <div class="topbar" data-dropdown="dropdown" > -->
<!--       <div class="topbar-inner"> -->
<!--         <div class="container"> -->
<!--           <h3><a href="#">Association des Cercles Etudiants</a></h3> -->
<!--           <ul class="nav"> -->
<!--             <li class="active"><a href="#">Home</a></li> -->
<!--             <li><a href="#">Link</a></li> -->
<!--             <li><a href="#">Link</a></li> -->
<!--             <li><a href="#">Link</a></li> -->
<!--             <li class="dropdown"> -->
<!--               <a href="#" class="dropdown-toggle">Dropdown</a> -->
<!--               <ul class="dropdown-menu"> -->
<!--                 <li><a href="#">Secondary link</a></li> -->
<!--                 <li><a href="#">Something else here</a></li> -->
<!--                 <li class="divider"></li> -->
<!--                 <li><a href="#">Another link</a></li> -->
<!--               </ul> -->
<!--             </li> -->
<!--           </ul> -->
<!--           <form class="pull-left" action=""> -->
<!--             <input type="text" placeholder="Search" /> -->
<!--           </form> -->
<!--           <ul class="nav secondary-nav"> -->
<!--             <li class="dropdown"> -->
<!--               <a href="#" class="dropdown-toggle">Dropdown</a> -->
<!--               <ul class="dropdown-menu"> -->
<!--                 <li><a href="#">Secondary link</a></li> -->
<!--                 <li><a href="#">Something else here</a></li> -->
<!--                 <li class="divider"></li> -->
<!--                 <li><a href="#">Another link</a></li> -->
<!--               </ul> -->
<!--             </li> -->
<!--           </ul> -->
<!--         </div> -->
<!--       </div><\!-- /topbar-inner -\-> -->
<!--     </div><\!-- /topbar -\-> -->
<!--   </div><\!-- /topbar-wrapper -\-> -->

	
    <div class="topbar">
      <div class="fill">
        <div class="container">
          <a class="brand" href="#">Association des Cercles Etudiants</a>
          <ul class="nav">
            <li class="active"><a href="#">Accueil</a></li>
            <li><a href="comite.html">Comité</a></li>
            <li><a href="#">Photos</a></li>
            <li><a href="#contact">Contact</a></li>
          </ul>
		  <ul class="nav secondary-nav">
            <li class="dropdown">
              <a href="#" class="dropdown-toggle">Dropdown</a>
              <ul class="dropdown-menu">
                <li><a href="#">Secondary link</a></li>
                <li><a href="#">Something else here</a></li>
                <li class="divider"></li>
                <li><a href="#">Another link</a></li>
              </ul>
            </li>
          </ul>
        </div>
      </div>
    </div>

	<div class="container-fluid">
      <div class="sidebar">
        <div class="well">
          <h5>Documents</h5>
          <ul>
            <li><a href="#">Listes ACE</a></li>
            <li><a href="#">Listes Vlecks</a></li>
            <li><a href="#">Charte Horaire</a></li>
            <li><a href="#">Amendes Jefke</a></li>
            <li><a href="#">Facture Jefke</a></li>
            <li><a href="#">Statuts de lACE</a></li>
            <li><a href="#">Description des postes</a></li>
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
        </div>
      </div>
      <div class="content">

	<?php
	include_once ("comite.inc");
?>
		
      <footer>
        <p>&copy; Company 2011</p>
      </footer>
	  
    </div> <!-- /container -->
	
	
  </body>
</html>
