$( document ).ready(function() {
    function silnia (n) {
    	if ((n == 0) || (n == 1)) return 1;
    	return n*silnia(n-1);
    }
    function podmien (litera) {
        if(litera == 10) litera = 'A';
        else if(litera == 11) litera = 'B';
        else if(litera == 12) litera = 'C';
        else if(litera == 13) litera = 'D';
        else if(litera == 14) litera = 'E';
        else if(litera == 15) litera = 'F';
        return litera;
    }
    function podmien2 (litera) {
        if(litera == 'A') litera = 10;
        else if(litera == 'B') litera = 11;
        else if(litera == 'C') litera = 12;
        else if(litera == 'D') litera = 13;
        else if(litera == 'E') litera = 14;
        else if(litera == 'F') litera = 15;
        return litera;
    }
    $('.przycisk').click(function() {
    	if ($(this).attr('id') == 'CL')
    		          $('#input').val('');
        else if($(this).attr('id') == '=')
    	              $('#input').val(eval($('#input').val()));
    	else if($(this).attr('id') == 'sqrt') 
    		$('#input').val(Math.sqrt(eval($('#input').val())));
    	else if ($(this).attr('id') == '!') 
    		$('#input').val(silnia(eval($('#input').val())));
    	else $('#input').val($('#input').val()+$(this).attr('id'));
    });
	$('.przelicz').click(function() {
    	var system_zrodlowy = $('select[name="zrodlowy"]').val();
    	var system_docelowy = $('select[name="docelowy"]').val();
    	var liczba_do_zamiany = $('#input').val();
		$('#input').val('');	    	

    	if(system_zrodlowy == system_docelowy) 
    	{
    		$('#input').val(liczba_do_zamiany);
            system_docelowy = 10;
    	}
    	else if(system_zrodlowy != 10)
    	{

    		var liczba1, liczba2, suma;
    		for (var i = liczba_do_zamiany.length - 1, j=0; i >= 0; i--, j++) 
            {
    			liczba1 = Math.pow(system_zrodlowy, j);
                liczba2 = podmien2(liczba_do_zamiany[i]);
                
                if(suma === undefined) 
                    suma = parseInt(liczba1 * liczba2);
                else suma +=  parseInt(liczba1 * liczba2);
            };
            
            liczba_do_zamiany = suma;
            
            if(system_docelowy == 10)
            {
                $('#input').val(liczba_do_zamiany);
            }
    	}
    	if(system_docelowy != 10)
    	{
    		var wynik;
    		while(liczba_do_zamiany > 0) 
            {
            	
                wynik = parseInt(liczba_do_zamiany)%parseInt(system_docelowy);
                liczba_do_zamiany = parseInt(liczba_do_zamiany)/parseInt(system_docelowy);
                
                $('#input').val(podmien(wynik) + $('#input').val()); 
            }
    	}
    });
});