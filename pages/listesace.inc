<div class="page-header">
  <h1>Listes ACE 2011-2012</h1>
</div>

<h3>Liste complète</h3>
<a class="btn" href="data/listes/ace/Listes ACE – 2011.docx"><b>Download</b></a>

<h3>Listes par Cercle</h3>
<ul>
  <?php
   	$dir = "data/listes/ace";
	$lists = scandir($dir);
	
	// Ignore some files in the list displayed
	$ignore = array(".", "..", "Listes ACE – 2011.docx", ".gitignore");
	foreach ($ignore as $i)
	  unset($lists[array_search($i ,$lists)]);
	$lists = array_values($lists);
	unset($i);
	
	foreach($lists as &$item) {
		$tmp = preg_replace("/\\.[^.\\s]{3,4}$/", "", $item);
		$tmp = str_replace("Liste", "Comité", $tmp);
		echo "<li><a href=\"" . $dir . "/" . $item . "\">" . $tmp . "</a></li>";
	}
	unset($item);
  ?>
</ul>
