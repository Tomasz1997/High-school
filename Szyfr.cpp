#include <iostream>
using namespace std;

string tekst;
int klucz;

string szyfruj(string tekst, int klucz)
{
	string wynik = "";
	int znak;
	
	for(int i = 0; i < tekst.length(); i++)
	{
		znak = tekst[i] + (klucz);
	   
		wynik = wynik + char(znak);
	   
	}
	
	return wynik;
}


int main()
{
	cout<<"  SZYFR CEZARA"<<endl;
	cout<<"----------------"<<endl<<endl;
	
	cout<<"Podaj tekst ktory mam ci zaszyfrowac: ";
	cin>>tekst;
	cout<<endl;

	cout<<"Podaj klucz wedlug ktorego mam ci zaszyfrowac(liczba calkowita): ";
	cin>>klucz;
	cout<<endl;
	
	
	 for (int i = 0; i<tekst.length();i++)
	 {
	  tekst[i] = toupper(tekst[i]);
	 }
	
	szyfruj(tekst, klucz);
	
	 cout<<"Zaszyfrowany tekst: "<<szyfruj(tekst, klucz)<<endl;
	 cout<<"Odszyfrowany szyfr: "<<szyfruj(tekst, -klucz)<<endl;
	 
	 cin.get();
	 if(cin.get())
	 {
	 	return 0;
	 }	
}
