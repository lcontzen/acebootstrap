<form method="post" action="?action=contact">
  <fieldset>
	<div class="clearfix">
	  <label for="name">Nom</label>
	  <div class="input">
        <input class="xlarge" id="name" name="name" size="30" type="text" />
      </div>
	</div>
	
	<div class="clearfix">
	  <label for="email">Adresse mail</label>
	  <div class="input">
        <input class="xlarge" id="email" name="email" size="30" type="text" />
      </div>
	</div>
	
	<div class="clearfix">
	  <label for="subject">Sujet</label>
	  <div class="input">
        <input class="xlarge" id="subject" name="subject" size="30" type="text" />
      </div>
	</div>
	
	<div class="clearfix">
      <label for="textarea">Message</label>
      <div class="input">
        <textarea class="xxlarge" id="textarea" name="textarea" rows="5"></textarea>
      </div>
    </div>
	
	<div class="actions">
      <input type="submit" class="btn primary" value="Envoyer">&nbsp;<button type="reset" class="btn">Annuler</button>
    </div>
  </fieldset>
</form>
