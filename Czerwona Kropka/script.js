window.onload = function() {
    
    var canvas = document.getElementById("canvas");
    var ctx = canvas.getContext("2d");
    var img = document.getElementById("kot");
    
    var x = 0;
    var y = 0;
    var punkt_x = Math.random()*10000%760+20;
    var punkt_y = Math.random()*10000%560+20;
    var grubosc = 56;
    var szybkosc  = 20;
   
   var wynik = 0;

   ctx.drawImage(img, x, y, grubosc, grubosc);
   
   function rysuj_punkt()
   {
   		ctx.beginPath();
		ctx.fillStyle = '#F93459';
		ctx.arc(punkt_x, punkt_y,20,0,Math.PI*2, true);
		ctx.closePath;
		ctx.fill();
   }
   function clean() {
   		ctx.clearRect(0,0,canvas.width,canvas.height);	
   }
   function strzalki(e)
   {
   		if(e.keyCode == 40 && canvas.height-grubosc >= y+szybkosc) y += szybkosc;
       	if(e.keyCode == 38 && y-szybkosc >= 0) y -= szybkosc;
       	if(e.keyCode == 37 && x-szybkosc >= 0) x -= szybkosc;
       	if(e.keyCode == 39 && canvas.width-grubosc >= x+szybkosc) x += szybkosc;
   }
   function losuj_punkt()
   {
   		if(Math.sqrt(((x+grubosc/2)-(punkt_x))*((x+grubosc/2)-(punkt_x)) + ((y+grubosc/2)-(punkt_y))*((y+grubosc/2)-(punkt_y))) < grubosc/2)
       {
       		punkt_x = Math.random()*10000%(800- grubosc)+grubosc/2;
    		punkt_y = Math.random()*10000%(600- grubosc)+grubosc/2;
    		wynik++;
    		grubosc += 1;
    		szybkosc = szybkosc*0.999;
    		$('#wynik').text(wynik);
       }
   }
   
   $('img').hide();
   $(window).bind("keydown", function(e){
       
       strzalki(e);

       clean();
       losuj_punkt();
       rysuj_punkt();
       ctx.drawImage(img, x, y, grubosc, grubosc);
   });
   rysuj_punkt();
    
};