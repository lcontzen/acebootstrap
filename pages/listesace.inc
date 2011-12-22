<div class="page-header">
  <h1>Listes ACE 2011-2012</h1>
</div>

<h3>Liste complète</h3>
<ul>
  <li><a href="data/listes/ace/Listes ACE – 2011.docx">Liste complète</a></li>
</ul>

<h3>Listes par Cercle</h3>
   <ul>
<?php
   $dir = "data/listes/ace";
$lists = scandir($dir);
foreach($lists as &$item) {
  if($item != '.' && $item != '..') {
	 $tmp = preg_replace("/\\.[^.\\s]{3,4}$/", "", $item);
	 echo "<li><a href=\"" . $dir . "/" . $item . "\">" . $tmp . "</a></li>";
  }
}
unset($item);
?>
  </ul>