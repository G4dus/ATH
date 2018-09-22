
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

cout << "enter H limit" << endl;
cin >> H_limit;

cout <<"start?";
_getch();
system ("cls");

while (true)
{


    int generatedNumber_1;
    int generatedNumber_2;

    srand( time(NULL));

    generatedNumber_1 =  (rand ()  % H_limit)  + 1;
    generatedNumber_2 =  (rand ()  % H_limit)  + 1;

    Canswer = generatedNumber_1 + generatedNumber_2;

    cout << generatedNumber_1 << " + "<< generatedNumber_2 << " = ";
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
        cout << "bad!";
        Sleep(250);
        system ("cls");
    }

}
    return 0;
}
