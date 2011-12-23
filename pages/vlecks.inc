<div class="page-header">
  <h1>Listes Vlecks</h1>
</div>
<div class="row">
  <div class="span7">
	<table>
	  <thead>
		<tr>
		  <th>Cercle</th>
		  <th>Dernière mise à jour</th>
		</tr>
	  </thead>
	  <tbody>
		<?php
   		  
   		  $dir = "data/listes/vlecks";
		  $lists = scandir($dir);
		  
		  // Ignore some files in the list displayed
		  $ignore = array(".", "..", ".gitignore");
		  foreach ($ignore as $i)
			unset($lists[array_search($i ,$lists)]);
		  $lists = array_values($lists);
		  unset($i);
		  
		  foreach($lists as &$item) {
			$tmp = preg_replace("/\\.[^.\\s]{3,4}$/", "", $item);
			$tmp = explode(" ", $tmp);
			echo "<tr>";
			echo "<td> <a href=\"" . $dir . "/" . $item . "\">" . str_replace("_", " ", $tmp[0]) . "</a></th>";
			echo "<td>" . $tmp[1] . "</th>";
			echo "</tr>";
		  }
		  unset($item);
		?>
	  </tbody>
	</table>
  </div>
  <div class="span9">
	<p></p>
  </div>
</div>
