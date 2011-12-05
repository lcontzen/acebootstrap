<?php
Class Config {
  private $siteName;
  private $siteUrl;
  private $siteTheme;

  public function __construct () {
	$ini = parse_ini_file(getcwd() . "/config.ini", true);
	$site = $ini['site'];
	$this->siteName = $site['name'];
	$this->siteUrl = $site['url'];
	$this->siteTheme = $site['theme'];
  }

  public function getSiteName() {
	return $this->siteName;
  }

  public function getSiteUrl() {
	return $this->siteUrl;
  }
  
  public function getSiteTheme() {
	return $this->siteTheme;
  }

}
?>
	