#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    char c =getchar();          //definiowanie i przypisanie znaku         
    c=toupper(c);               //powieksznienie malej litery
    cout << c << endl;      

    return 0;
}
