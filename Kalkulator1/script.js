$( document ).ready(function() {
    $('div#przycisk').click(function() {
		
		if ( $(this).html() == 'Usuń') 
			$('#input').val('');
		
		else if ( $(this).html() == '=') 
			$('#input').val(eval($('#input').val()));
		
		else $('#input').val($('#input').val() + $(this).html());
	});
});