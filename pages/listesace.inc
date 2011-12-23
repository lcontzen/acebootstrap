<div class="page-header">
  <h1>Listes ACE 2011-2012</h1>
</div>

<h3>Liste complète</h3>
<p><a class="btn" href="data/listes/ace/Listes ACE – 2011.docx"><b>Download</b></a></p>

<h3>Listes par Cercle</h3>
<div class="row">
  <?php
   	$dir = "data/listes/ace";
	$lists = scandir($dir);
	
	// Ignore some files in the list displayed
	$ignore = array(".", "..", "Listes ACE – 2011.docx", ".gitignore");
	foreach ($ignore as $i)
	  unset($lists[array_search($i ,$lists)]);
	$lists = array_values($lists);
	unset($i);

	for ($i = 0; $i < 3; $i++) {
		echo "<div class=\"span5\"> \n";
		echo "<ul> \n";
		for ($j = ($i *10); $j < ($i + 1)*10; $j++) {
		  $tmp = preg_replace("/\\.[^.\\s]{3,4}$/", "", $lists[$j]);
		  $tmp = str_replace("Liste", "Comité", $tmp);
		  echo "<li><a href=\"" . $dir . "/" . $lists[$j] . "\">" . $tmp . "</a></li> \n";
		}
		echo "</ul> \n";
		echo "</div> \n";
	  }
  ?>
</div>
