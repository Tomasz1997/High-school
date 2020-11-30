#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

	string nuty;
	int muza, tme, czas;
	int zagadka, przedzial;
	char x;

void title(void)
{
	system("title Kompozytor");
}
void header(void)
{
	cout<<"  KOMPOZYTOR"<<endl;
	cout<<"--------------"<<endl<<endl;
}
void mario(void)
{
Beep (330,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (330,100);Sleep(300);
    Beep (392,100);Sleep(700);
    Beep (196,100);Sleep(700);
    Beep (262,300);Sleep(300);
    Beep (196,300);Sleep(300);
    Beep (164,300);Sleep(300);
    Beep (220,300);Sleep(100);
    Beep (246,100);Sleep(300);
    Beep (233,200);
    Beep (220,100);Sleep(300);
    Beep (196,100);Sleep(150);
    Beep (330,100);Sleep(150);
    Beep (392,100);Sleep(150);
    Beep (440,100);Sleep(300);
    Beep (349,100);Sleep(100);
    Beep (392,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (247,100);Sleep(500);
    Beep (262,300);Sleep(300);
    Beep (196,300);Sleep(300);
    Beep (164,300);Sleep(300);
    Beep (220,300);Sleep(100);
    Beep (246,100);Sleep(300);
    Beep (233,200);
    Beep (220,100);Sleep(300);
    Beep (196,100);Sleep(150);
    Beep (330,100);Sleep(150);
    Beep (392,100);Sleep(150);
    Beep (440,100);Sleep(300);
    Beep (349,100);Sleep(100);
    Beep (392,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (247,100);Sleep(900);
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (207,100);Sleep(100);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(500);
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (523,100);Sleep(300);
    Beep (523,100);Sleep(100);
    Beep (523,100);Sleep(1100);
    Beep (392,100);Sleep(100);
    Beep (370,100);Sleep(100);
    Beep (349,100);Sleep(100);
    Beep (311,100);Sleep(300);
    Beep (330,100);Sleep(300);
    Beep (207,100);Sleep(100);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (220,100);Sleep(100);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(500);
    Beep (311,300);Sleep(300);
    Beep (296,300);Sleep(300);
    Beep (262,300);Sleep(1300);
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(300);
    Beep (330,200);Sleep(50);
    Beep (262,200);Sleep(50);
    Beep (220,200);Sleep(50);
    Beep (196,100);Sleep(700);
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(100);
    Beep (330,100);Sleep(700);
    Beep (440,100);Sleep(300);
    Beep (392,100);Sleep(500);
    Beep (262,100);Sleep(100);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(300);
    Beep (262,100);Sleep(100);
    Beep (294,100);Sleep(300);
    Beep (330,200);Sleep(50);
    Beep (262,200);Sleep(50);
    Beep (220,200);Sleep(50);
    Beep (196,100);Sleep(700);
}

void star_wars(void)
{
	Beep(3000,500);
	Sleep(50);
	Beep(2500,500);
	Sleep(50);
	Beep(2750,500);
	Sleep(50);
	
	Beep(2700,500);
	Sleep(50);
	
	Beep(2800,250);
	Beep(3200,500);
	Sleep(50);
	
	Beep(2500,500);
	Sleep(50);
	
	Beep(3500,250);
	Beep(3000,500);
}
void twoja(void)
{
		
		cout<<"Podaj standardowa dlugosc nuty: ";
		cin>>tme;
		cout<<endl;
		cout<<"Podaj nuty: ";
		cin>>nuty;
		cout<<endl;
		for(int i = 0; i <= nuty.length(); i++)
		{
			if(nuty[i] == 'c')
			{
				if(nuty[i] == 'c' && nuty[i+1] == '#')
				{
					if(nuty[i-1] > 1)
					{
						czas = nuty[i-1]*tme;
						Beep(283.6, czas);
					}
					else
					{
					
						Beep(283.6, tme);
					}	
				}
				if(nuty[i] == 'c' && nuty[i+1] != '#')
				{
					if(nuty[i-1] > 1)
					{
						czas = nuty[i-1]*tme;
						Beep(261.6, czas);
					}
					else
					{
						Beep(261.6, tme);
					}
				}	
			}
			if(nuty[i] == 'D')
			{
				if(nuty[i] == 'D' && nuty[i+1] == '#')
				{
					Beep(310.6, tme);	
				}
				if(nuty[i] == 'D' && nuty[i+1] != '#')
				{
					Beep(293.7, tme);
				}	
			}
			if(nuty[i] == 'E')
			{
				Beep(329.6, tme);	
			}
			if(nuty[i] == 'F')
			{
				Beep(349.2, tme);	
			}
			if(nuty[i] == 'G')
			{
				Beep(391.9, tme);	
			}
			if(nuty[i] == 'A')
			{
				Beep(440.0, tme);	
			}
			if(nuty[i] == 'H')
			{
				Beep(493.9, tme);	
			}
			if(nuty[i] == 'C')
			{
				Beep(523.2, tme);	
			}
			if(nuty[i] == '-')
			{
				Sleep(tme/2);
			}
		}
}

void losowa(void)
{
			srand(time(NULL));
			przedzial = 8 + 1;
			zagadka = rand()%przedzial;
			
}

int main()
{
	x = 'N';
	while(x == 'N')
	{
		title();
		header();
		cout<<"1. Super Mario"<<endl;
		cout<<"2. Star Wars"<<endl;
		cout<<"3. Twoja muza"<<endl;
		cout<<"3. Pseldolosowa muza"<<endl;
		cout<<"Co chcesz posluchac lub co zagrac: ";
		cin>>muza;
		cout<<endl;
		if(muza == 1)
		{
			mario();
		}
		if(muza == 2)
		{
			star_wars();
		}
		if(muza == 3)
		{
			twoja();
		}
		if(muza == 4)
		{
			losowa();
		}
		cout<<endl<<"N+enter nowy wybor , inny klawisz+enter koniec: ";
		cin>>x;
		system("cls");
	}
}

























