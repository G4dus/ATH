// QucikMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

void lossAndCalculate(int H_limit, int &Yanswer, int &Canswer);
void displayMenu();

bool dodaw;
bool odej;
bool mnoz;
bool dziel;

int main()
{
	srand(time(NULL));

	int H_limit, Yanswer, Canswer;

	cout << "Wprowadz maksymalna liczbe" << endl;        
	cin >> H_limit;
	system("cls");

	displayMenu();
	lossAndCalculate(H_limit, Yanswer, Canswer);
	

	return 0;
}

void displayMenu()
{
	cout << "Chcesz dodawac? Kliknij [T] jesli chcesz enter by pominac" << endl;
	char c = _getch();

	dodaw = false;
	if(c == 't')
	{
		dodaw = true;
	}
	
	if (c == 'T')
	{
		dodaw = true;
	}

	cout << "Chcesz odejmowac? Kliknij [T] jesli chcesz enter by pominac " << endl;
	 c = _getch();

	odej = false;
	if (c == 't')
	{
		odej = true;
	}

	if (c == 'T')
	{
		odej = true;
	}

	cout << "Chcesz mnozyc? Kliknij [T] jesli chcesz enter by pominac" << endl;
	 c = _getch();

	mnoz = false;
	if (c == 't')
	{
		mnoz = true;
	}

	if (c == 'T')
	{
		mnoz = true;
	}

	cout << "Chcesz dzielic? Kliknij [T] jesli chcesz enter by pominac" << endl;
	c = _getch();

	dziel = false;
	if (c == 't')
	{
		dziel = true;
	}

	if (c == 'T')
	{
		dziel = true;
	}

	system("cls");
}

void lossAndCalculate(int H_limit, int &Yanswer, int &Canswer)
{
	int losowanie;
	do
	{
		char losoweDzialanie;

		do
		{
			losowanie = rand() % 4;

			switch (losowanie)
			{
			case 0:
				losoweDzialanie = '+';
				break;

			case 1:
				losoweDzialanie = '-';
				break;

			case 2:
				losoweDzialanie = '*';
				break;

			case 3:
				losoweDzialanie = '//';
				break;

			}
		} while (((losoweDzialanie == '-') && (odej == false)) || (((losoweDzialanie == '+') && (dodaw == false))) ||
			(((losoweDzialanie == '*') && (mnoz == false))) || (((losoweDzialanie == '//') && (dziel == false))));
				
		// powyzej warunki wyliczajace dzialanie dostepne z funkcji menu 

		int generatedNumber_1;            
		int generatedNumber_2;            

		generatedNumber_1 = (rand() % H_limit) + 1;
		generatedNumber_2 = (rand() % H_limit) + 1;

		if (losoweDzialanie == '+')
			Canswer = (generatedNumber_1)+(generatedNumber_2);

		if (losoweDzialanie == '-')
			Canswer = (generatedNumber_1)-(generatedNumber_2);

		if (losoweDzialanie == '*')
			Canswer = (generatedNumber_1)  * (generatedNumber_2);

		if (losoweDzialanie == '/')
			Canswer = (generatedNumber_1) / (generatedNumber_2);


		cout << generatedNumber_1 << losoweDzialanie << generatedNumber_2 << " = ";
		cin >> Yanswer;

		if (Canswer == Yanswer)
		{
			system("cls");
			cout << "good!" << endl;
			Sleep(250);
			system("cls");
		}
		else
		{
			system("cls");
			cout << "bad!" << endl << Canswer << endl;
			Sleep(1000);
			system("cls");
		}

	} while (true);//(kbhit() != 27);

}
