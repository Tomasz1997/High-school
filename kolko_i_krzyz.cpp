#include <iostream>
#include <cstdlib>
using namespace std;

int nr_pola, wygrana, zawodnik, n;
char pole[10];

void gra(void)
{

	cout<<"  KOLKO I KRZYZYK"<<endl;
	cout<<"-------------------";
}
void zawod(int n)
{
	if(n == 1)
	{
		cout<<"Zawodnik nr_1"<<endl<<endl;
		cout<<"Podaj numer pola, w ktorym"<<endl<<"chcesz postawic kolko: ";
		cin>>nr_pola;
	}
	if(n == 2)
	{
		cout<<"Zawodnik nr_2"<<endl<<endl;
		cout<<"Podaj numer pola, w ktorym"<<endl<<"chcesz postawic krzyzyk: ";
		cin>>nr_pola;		
	}
}

int main()
{
	int wygrana = 0;
	char pole[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
	
	zawodnik = 1;
	
	while(wygrana == 0)
	{	
		
		if(zawodnik == 1)
		{
			gra();

			cout<<endl<<"     -----"<<endl;
			cout<<"     |"<<pole[0]<<pole[1]<<pole[2]<<"|"<<endl;
			cout<<"     |"<<pole[3]<<pole[4]<<pole[5]<<"|"<<endl;
			cout<<"     |"<<pole[6]<<pole[7]<<pole[8]<<"|"<<endl;
			cout<<"     -----"<<endl<<endl;
				
			zawod(1);

			nr_pola--;	
			
			if(nr_pola >= 0 && nr_pola <= 8)
			{
				if(wygrana == 0)
				{
					if(pole[nr_pola] != 'X' && pole[nr_pola] != 'O')
					{
						pole[nr_pola] = 'O';
						zawodnik = 2;
					}
					else
					{
						cout<<endl<<"To pole jest juz wykorzystane";
						cin.get();
						cin.get();
					}
					
				}				
			}
			else
			{
				cout<<endl<<"Musisz podac liczbe od 1 do 9";
				cin.get();
				cin.get();
			}
			
			if((pole[0] == 'O' && pole[3] == 'O' && pole[6] == 'O') || 
			   (pole[1] == 'O' && pole[4] == 'O' && pole[7] == 'O') || 
			   (pole[2] == 'O' && pole[5] == 'O' && pole[8] == 'O') ||
			   (pole[0] == 'O' && pole[4] == 'O' && pole[8] == 'O') ||
			   (pole[2] == 'O' && pole[4] == 'O' && pole[6] == 'O') ||
			   (pole[6] == 'O' && pole[7] == 'O' && pole[8] == 'O') ||
			   (pole[3] == 'O' && pole[4] == 'O' && pole[5] == 'O') ||
			   (pole[0] == 'O' && pole[1] == 'O' && pole[2] == 'O'))
			{
				wygrana = 1;
			}
			system("cls");
			
		}
		else
		{
			gra();
			
			cout<<endl<<"     -----"<<endl;
			cout<<"     |"<<pole[0]<<pole[1]<<pole[2]<<"|"<<endl;
			cout<<"     |"<<pole[3]<<pole[4]<<pole[5]<<"|"<<endl;
			cout<<"     |"<<pole[6]<<pole[7]<<pole[8]<<"|"<<endl;
			cout<<"     -----"<<endl<<endl;
			
			zawod(2);

			nr_pola--;

			if(nr_pola >= 0 && nr_pola <= 8)
			{
				if(wygrana == 0)
				{
					if(pole[nr_pola] != 'X' && pole[nr_pola] != 'O')
					{
						pole[nr_pola] = 'X';
						zawodnik = 1;
					}
					else
					{
						cout<<endl<<"To pole jest juz wykorzystane";
						cin.get();
						cin.get();
					}
				}
			}
			else
			{
				cout<<endl<<"Musisz podac liczbe od 1 do 9";
				cin.get();
				cin.get();
			}
			
			if((pole[0] == 'X' && pole[3] == 'X' && pole[6] == 'X') || 
			   (pole[1] == 'X' && pole[4] == 'X' && pole[7] == 'X') || 
			   (pole[2] == 'X' && pole[5] == 'X' && pole[8] == 'X') ||
			   (pole[0] == 'X' && pole[4] == 'X' && pole[8] == 'X') ||
			   (pole[2] == 'X' && pole[4] == 'X' && pole[6] == 'X') ||
			   (pole[6] == 'X' && pole[7] == 'X' && pole[8] == 'X') ||
			   (pole[3] == 'X' && pole[4] == 'X' && pole[5] == 'X') ||
			   (pole[0] == 'X' && pole[1] == 'X' && pole[2] == 'X'))
			{
				wygrana = 2;
			}	
			system("cls");
		}
		if((pole[0] == 'O' || pole[0] == 'X') && 
		   (pole[1] == 'O' || pole[1] == 'X') &&
		   (pole[2] == 'O' || pole[2] == 'X') &&
		   (pole[3] == 'O' || pole[3] == 'X') &&
		   (pole[4] == 'O' || pole[4] == 'X') &&
		   (pole[5] == 'O' || pole[5] == 'X') &&
		   (pole[6] == 'O' || pole[6] == 'X') &&
		   (pole[7] == 'O' || pole[7] == 'X') &&
		   (pole[8] == 'O' || pole[8] == 'X'))
		{
			   if(((pole[0] == 'X' && pole[3] == 'X' && pole[6] == 'X') || 
				   (pole[1] == 'X' && pole[4] == 'X' && pole[7] == 'X') || 
				   (pole[2] == 'X' && pole[5] == 'X' && pole[8] == 'X') ||
				   (pole[0] == 'X' && pole[4] == 'X' && pole[8] == 'X') ||
				   (pole[2] == 'X' && pole[4] == 'X' && pole[6] == 'X') ||
				   (pole[6] == 'X' && pole[7] == 'X' && pole[8] == 'X') ||
				   (pole[3] == 'X' && pole[4] == 'X' && pole[5] == 'X') ||
				  (pole[0] == 'X' && pole[1] == 'X' && pole[2] == 'X')) ||
				  ((pole[0] == 'O' && pole[3] == 'O' && pole[6] == 'O') || 
				   (pole[1] == 'O' && pole[4] == 'O' && pole[7] == 'O') || 
				   (pole[2] == 'O' && pole[5] == 'O' && pole[8] == 'O') ||
				   (pole[0] == 'O' && pole[4] == 'O' && pole[8] == 'O') ||
				   (pole[2] == 'O' && pole[4] == 'O' && pole[6] == 'O') ||
				   (pole[6] == 'O' && pole[7] == 'O' && pole[8] == 'O') ||
				   (pole[3] == 'O' && pole[4] == 'O' && pole[5] == 'O') ||
				   (pole[0] == 'O' && pole[1] == 'O' && pole[2] == 'O')))
				{
					if((pole[0] == 'O' && pole[3] == 'O' && pole[6] == 'O') || 
					   (pole[1] == 'O' && pole[4] == 'O' && pole[7] == 'O') || 
					   (pole[2] == 'O' && pole[5] == 'O' && pole[8] == 'O') ||
					   (pole[0] == 'O' && pole[4] == 'O' && pole[8] == 'O') ||
					   (pole[2] == 'O' && pole[4] == 'O' && pole[6] == 'O') ||
					   (pole[6] == 'O' && pole[7] == 'O' && pole[8] == 'O') ||
					   (pole[3] == 'O' && pole[4] == 'O' && pole[5] == 'O') ||
					   (pole[0] == 'O' && pole[1] == 'O' && pole[2] == 'O'))
					{
						wygrana = 1;
					}					
					if((pole[0] == 'X' && pole[3] == 'X' && pole[6] == 'X') || 
					   (pole[1] == 'X' && pole[4] == 'X' && pole[7] == 'X') || 
					   (pole[2] == 'X' && pole[5] == 'X' && pole[8] == 'X') ||
					   (pole[0] == 'X' && pole[4] == 'X' && pole[8] == 'X') ||
					   (pole[2] == 'X' && pole[4] == 'X' && pole[6] == 'X') ||
					   (pole[6] == 'X' && pole[7] == 'X' && pole[8] == 'X') ||
					   (pole[3] == 'X' && pole[4] == 'X' && pole[5] == 'X') ||
					   (pole[0] == 'X' && pole[1] == 'X' && pole[2] == 'X'))
					{
						wygrana = 2;
					}							
				}
				else
				{
					wygrana = 3;
				}	
				
		}
				
	}
	if(wygrana == 1)
	{
		cout<<"Zawodnik nr 1 wygral"<<endl;
	}
	if(wygrana == 2)
	{
		cout<<"Zawodnik nr 2 wygral"<<endl;
	}
	if(wygrana == 3)
	{
		cout<<"Remis nie ma zwyciezcy"<<endl;
	}
	cout<<endl<<"Koniec gry";
	cin.get();
	cin.get();
	return 0;	
}
