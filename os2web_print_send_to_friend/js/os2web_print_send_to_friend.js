function add_send_to_friend_button_lister(url, id) {	
  jQuery(document).ready(function() {
		jQuery(".throbber").hide();
		jQuery("#btn_send_to_friend").click(function(){
		  email = jQuery("#field_send_to_friend_email").val();
		  
		  //email validation
		  if (!checkEmail(email)){
		    jQuery("#field_send_to_friend_email").focus();
		    jQuery("#field_send_to_friend_email").addClass("error");
		  }
		  else {
		    jQuery(".throbber").show();
		    jQuery("#field_send_to_friend_email").removeClass("error");
		    
		    //sending to the friend
		    jQuery.get(url + "/dagsorden_punkt/" + id + "/send_to_friend/" + email, function(html) {
		      jQuery(".throbber").hide();
		      jQuery("#field_send_to_friend_email").val("");
		      parent.Lightbox.end()
		    });
      
		  }
		});
	});
}

function checkEmail(email) {
  var regex = /^([a-zA-Z0-9_\.\-\+])+\@(([a-zA-Z0-9\-])+\.)+([a-zA-Z0-9]{2,4})+$/;
  return regex.test(email);
}