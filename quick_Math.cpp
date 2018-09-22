
#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <windows.h>

using namespace std;


int main()
{

int H_limit, Yanswer, Canswer;              //gorny limit losowanej liczby z zakresu / twoja odpowiedz / wynik obliczenia programu

char dodawanie =  '+' ;
char odejmowanie =  '-';
char mnozenie = '*';
char dzielenie = '/';

int losowanie;
char losoweDzialanie;

cout << dodawanie;
cout << "enter H limit" << endl;            // wprowadzenie gornego limitu
cin >> H_limit;

cout <<"start?";
_getch();
system ("cls");

while (true)
{
 
 losowanie = rand ()  % 3;

switch(losowanie )
{
case 0:
    //jakiś kod
    break;
    
case wartosc_2:
    //jakiś kod
    break;

}


    int generatedNumber_1;              // pierwsza liczba np licznik
    int generatedNumber_2;              // druga liczba np mianownik

    srand( time(NULL));

    generatedNumber_1 =  (rand ()  % H_limit)  + 1;
    generatedNumber_2 =  (rand ()  % H_limit)  + 1;

    if (losoweDzialanie == '+')
    Canswer = (generatedNumber_1 )  + (generatedNumber_2);

    if (losoweDzialanie == '-')
    Canswer = (generatedNumber_1 )  - (generatedNumber_2);

    if (losoweDzialanie == '*')
    Canswer = (generatedNumber_1 )  * (generatedNumber_2);

    if (losoweDzialanie == '/')
    Canswer = (generatedNumber_1 )  / (generatedNumber_2);


    cout << generatedNumber_1 << losoweDzialanie << generatedNumber_2 << " = ";
    cin >> Yanswer;

    if(Canswer == Yanswer)
    {
        system ("cls");
        cout<<"good!"<< endl;
        Sleep(250);
        system ("cls");
    }else
    {
        system ("cls");
        cout << "bad!"<<endl<< Canswer<< endl;
        Sleep(1000);
        system ("cls");
    }

}
    return 0;
}
