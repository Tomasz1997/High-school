#include <iostream>
#include <windows.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <stddef.h>
#include <string>
 
using namespace std;
 
void usuwanie_pliku(char sciezka[MAX_PATH])
{
	cout<<sciezka;
	if(remove(sciezka) == 0) cout<<" Good+"<<endl;
	else cout<<" FakeX"<<endl;
}
void usuwanie_folderu(char adres[MAX_PATH])
{
	cout<<adres;
	if(RemoveDirectoryA(adres) == 1) cout<<" Good+"<<endl;
	else cout<<" FakeX"<<endl;
}

void lista()
{
	  DIR *dp;
  struct dirent *ep;
 
  dp = opendir ("./");
  if (dp != NULL)  
  {
    while (ep = readdir (dp))
	{
		string plik = ep->d_name;
		size_t szukaj = plik.find(".");
		size_t szukaj2 = plik.find(".cpp");	
		size_t szukaj3 = plik.find(".exe");
		if(szukaj <= 255 && szukaj2 > 255 && szukaj3 > 255) usuwanie_pliku(ep->d_name);
		if(szukaj > 255) usuwanie_folderu(ep->d_name);
	}
	 
    (void) closedir (dp);
  } 
  else
  {
    perror (" Search~");
  }
}

int main()
{
    lista();
    cin.get();
    cin.get();
    return 0;
}
