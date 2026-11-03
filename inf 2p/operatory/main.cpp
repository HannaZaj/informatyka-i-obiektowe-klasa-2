#include <iostream>
#include "zespolona.h"

using namespace std;


int main(int argc, char const *argv[])
{

    Zespolona obwodA;
    Zespolona obwodB("obwodB",12,5);

    cout << obwodA.toString() << endl;
    cout << obwodB.toString() << endl;

    Zespolona wynik = obwodA + obwodB;

    cout << wynik.toString() << endl;

    Zespolona wynik2 = 12.1 + obwodB;
    cout << wynik2.toString() << endl;
    wynik2++;

    cout << "Wypisanie za pomocą <<" << endl;
    cout << wynik2 << endl;

    if(wynik2 == obwodB){
        cout << "Wynik 2 jest równy obwodB" << endl;
    }
    else{
        cout << "Wynik2 jest inny od obwobB" << endl;
    }



    // cout << endl << endl;

    // int liczba1 , liczba2;

    // liczba1 = 10;
    // liczba2 = 20;

    // int wynikl = liczba1 + liczba2;
    // cout << wynikl << endl;
    // if (liczba1 > liczba2)
    // cout << "liczba jest większa od liczby2" << endl;


    return 0;
}
