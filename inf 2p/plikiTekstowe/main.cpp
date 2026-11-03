#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "obsługa plików w c++ za pomocą strumienia fstream" << endl;
    fstream plik;
    plik.open("dane.txt",ios::in);

    if (plik.is_open()){
        // przykłady sposobów odczytu z pliku tekstowego

        char znak;
        int liczba;
        string slowo;

        //odczyt pojedyncych wartosci + petla ig?

        plik >> znak;
        cout << znak << endl;

        for (int i = 0; i < 4; i++)
        {
            plik >> znak;
            cout << znak << endl;
        }

        plik >> slowo;
        cout << slowo << endl;
   
        for (int i = 0; i < 2; i++)
         {
            plik >> slowo;
            cout << slowo << endl;
            }

        // plik >> liczba;
        // cout << liczba << endl;

        //odczyt reszty plikow or smth kekekekekekekekekekekekekekekekekekekekekekkekekekek
        for (int i = 0; i < 10; i++)
        {
            plik >> slowo;
            cout << slowo << endl;
        }
       
        plik.seekg(0);
        
        while (!plik.eof())
        {
            plik>>liczba;
            cout<<liczba<<" ";
            for (int i = 0; i < 3; i++)
            {
                plik>>slowo;
                cout<<slowo<<" ";
            }
        }

         plik.seekg(0);
         //czytanie zalych lini kekekek
         string liniapliku;
         while (plik.getline(plik,liniapliku))
         {
            cout << liniapliku << endl;
         }

         plik.clear();
         plik;seekg(0);
         
        while (plik>>liczba){
            cout << liczba;
            for (int i = 0; i < 3; i++)
            {
               if( plik>>slowo;){
                cout<<slowo;
               }
               else{
                break;
               }
            }
            
        }

        
        

        plik.close();
     }

    return 0;
}
