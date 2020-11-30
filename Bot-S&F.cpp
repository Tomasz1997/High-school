#include <iostream>
#include <conio.h>
#include <process.h>
#include <Windows.h>
#include <time.h>

using namespace std;

class Gra
{
	private:
		POINT P_karczma;
		POINT P_uruchom_Misje;
		POINT P_misja3;
		POINT P_przyjmij_Misje;
		POINT P_postac;
		POINT P_arena;
		POINT P_wybierz;
		POINT P_walcz;
		POINT P_atakuj;
		POINT P_inteligencja;
		POINT P_wytrzymalosc;
		POINT P_szczescie;
		POINT P_sila;
		POINT P_zrecznosc;
	public:
		void Karczma();	
		void Postac();
		void Arena(string bufor);
		Gra();
};
Gra::Gra()
{
	P_karczma.x = 232;
	P_karczma.y = 147;
	
	P_uruchom_Misje.x = 696;
	P_uruchom_Misje.y = 497;
	
	P_misja3.x = 518;
	P_misja3.y = 588;
	
	P_przyjmij_Misje.x = 972;
	P_przyjmij_Misje.y = 534;
	
	P_postac.x = 245;
	P_postac.y = 499;
	
	P_arena.x = 241;
	P_arena.y = 607;
	
	P_wybierz.x = 382;
	P_wybierz.y = 689;
	
	P_walcz.x = 862;
	P_walcz.y = 513;
	
	P_atakuj.x = 1064;
	P_atakuj.y = 167;
	
	P_inteligencja.x = 523;
	P_inteligencja.y = 589;
	
	P_wytrzymalosc.x = 522;
	P_wytrzymalosc.y = 615;
	
	P_szczescie.x = 522;
	P_szczescie.y = 642;
	
	P_sila.x = 517;
	P_sila.y = 534;
	
	P_zrecznosc.x = 519;
	P_zrecznosc.y = 559;
}

void Gra::Karczma()
{
	SetCursorPos(P_karczma.x, P_karczma.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_uruchom_Misje.x, P_uruchom_Misje.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_misja3.x, P_misja3.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_przyjmij_Misje.x, P_przyjmij_Misje.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
}

void Gra::Arena(string bufor)
{
	SetCursorPos(P_arena.x, P_arena.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_wybierz.x, P_wybierz.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	for(int i=0; i < bufor.size(); i++)
   	{
   		keybd_event(VkKeyScan(bufor[i]), 0, 0, 0);
		keybd_event(VkKeyScan(bufor[i]), 0, KEYEVENTF_KEYUP, 0);
	}
   	
   	keybd_event(VK_RETURN, 0, 0, 0); //wciœnij klawisz (ENTER)
	keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0); //puœæ klawisz (ENTER)
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_atakuj.x, P_atakuj.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	SetCursorPos(P_walcz.x, P_walcz.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
}

void Gra::Postac()
{
	SetCursorPos(P_postac.x, P_postac.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_inteligencja.x, P_inteligencja.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
   	
   	Sleep(2000);
   	
   	SetCursorPos(P_wytrzymalosc.x, P_wytrzymalosc.y);
   	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);
}

int main()
{
	Gra ShakesFidget;
	clock_t start = clock();
	
	Sleep(5000);
	
	while(true)
	{
		ShakesFidget.Karczma();
		
		Sleep(3000);
		
		ShakesFidget.Postac();

		Sleep(3000);
	}
}

