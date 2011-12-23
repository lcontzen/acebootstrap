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
<p><a href="data/listes/vlecks/listesvlecks.zip"class="btn"><b>Download</b></a></p>
<?php
  }
  else
	echo "<p>Le fichier n'a pas pu être généré<br /></p>";
?>
<h3>Listes par Cercle</h3>
<div class="row">
  <?php
	for ($i = 0; $i < 3; $i++) {
		echo "<div class=\"span5\"> \n";
		echo "<ul> \n";
		for ($j = ($i *9); $j < ($i + 1)*9; $j++) {
		  if ($lists[$j] != null) {
			$tmp = preg_replace("/\\.[^.\\s]{3,4}$/", "", $lists[$j]);
			$tmp = explode(" ", $tmp);
			$tmp = str_replace("_", " ", $tmp);
			echo "<li><a href=\"" . $dir . "/" . $lists[$j] . "\">" . $tmp[0] . "</a></li> \n";
		  }
		}
		echo "</ul> \n";
		echo "</div> \n";
	  }
  ?>
</div>
