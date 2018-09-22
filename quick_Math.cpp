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


int main()
{

	int H_limit, Yanswer, Canswer;          

	char dodawanie = '+';
	char odejmowanie = '-';
	char mnozenie = '*';
	char dzielenie = '/';

	int losowanie;
	char losoweDzialanie;

	cout << dodawanie;
	cout << "enter H limit" << endl;            // wprowadzenie gornego limitu
	cin >> H_limit;

	system("cls");
	cout << "start?";
	_getch();
	system("cls");

	do
	{

		losowanie = rand() % 4;

		switch (losowanie)
		{
		case 0:
			losoweDzialanie = dodawanie;
			break;

		case 1:
			losoweDzialanie = odejmowanie;
			break;

		case 2:
			losoweDzialanie = mnozenie;
			break;
		
		case 3:
			losoweDzialanie = dzielenie;
			break;

		} 


		int generatedNumber_1;              // pierwsza liczba np licznik
		int generatedNumber_2;              // druga liczba np mianownik

		srand(time(NULL));

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


	return 0;
}
