<div class="page-header">
  <h1>Listes Vlecks</h1>
</div>

<?php
   $dir = "data/listes/vlecks";
  $lists = scandir($dir);
  
  // Ignore some files in the list displayed
  $ignore = array(".", "..", ".gitignore", "listesvlecks.zip");
  foreach ($ignore as $i)
	unset($lists[array_search($i ,$lists)]);
  $lists = array_values($lists);
  unset($i);
?>

<h3>Toutes les listes</h3>
<?php
  
  function create_zip($files = array(),$destination = '',$overwrite = true) {
	if(file_exists($destination) && !$overwrite) { return false; }
	$valid_files = array();
	if(is_array($files)) {
	  foreach($files as $file) {
		if(file_exists($file)) {
		  $valid_files[] = $file;
		}
	  }
	}
	if(count($valid_files)) {
	  $zip = new ZipArchive();
	  if($zip->open($destination,$overwrite ? ZIPARCHIVE::OVERWRITE : ZIPARCHIVE::CREATE) !== true) {
		return false;
	  }
	  foreach($valid_files as $file) {
		$new_filename = substr($file,strrpos($file,'/') + 1);
		$zip->addFile($file,$new_filename);
	  }
	  //debug
	  //echo 'The zip archive contains ',$zip->numFiles,' files with a status of ',$zip->status;
	  $zip->close();
	  return file_exists($destination);
	}
	else {
	  return false;
	}
  }
  
  $to_zip = array();
  foreach($lists as $i) {
	$to_zip[] = $dir . "/" . $i;
  }
  $result = create_zip($to_zip,'data/listes/vlecks/listesvlecks.zip');
  
  if ($result) {
?>
<p><a href="data/listes/vlecks/listesvlecks.zip"class="btn large"><b>Download</b></a></p>
<?php
  }
  else
	echo "<p>Le fichier n'a pas pu être généré<br /></p>";
?>
<h3>Listes par Cercle</h3>
<div class="row">
  <div class="span7">
	<table class="zebra-striped">
	  <thead>
		<tr>
		  <th>Cercle</th>
		  <th>Dernière mise à jour</th>
		</tr>
	  </thead>
	  <tbody>
		<?php
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
