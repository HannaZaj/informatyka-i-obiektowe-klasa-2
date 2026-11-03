//napisac program, który odczyta dane z pliku .txt
//w pliku znajdują się linie z liczbą całkowitą oraz trzema liczebnikami opisujące cyfry od zera do dziewięć
//np
//123 jeden dwa trzy
//ilość wierszy jest nie znana
//znajdź i wypisz te linie, które zawierają liczbę mającą w sobie cyfry odpowiadające liczebnikom
//123 jeden dwa trzy TAK
//1235 jeden cztery osiem NIE

#include <iostream>
#include <fstream>
using namespace std;

char stringLiczbToChar(string liczebnik){
    string liczebniki[]={"zero", "jeden", "dwa", "trzy", "cztery", "piec", "szesc", "siedem", "osiem", "dziewiec"};
    for (int i = 0 ; i<10; i++){
        if(liczebnik==liczebniki[i]){
            return i+'0';
        }
    }
  return ' ';
}

bool test1(string liczbaStr, string liczJeden, string liczDwa, string liczTrzy){
    char znak = stringLiczbToChar(liczJeden);
    for (int i = 0; i < liczbaStr.length(); i++)
        if(liczbaStr[i] == znak){
            char znak = stringLiczbToChar(liczDwa);
                for (int i = 0; i < liczbaStr.length(); i++)
                    if(liczbaStr[i] == znak){
                        char znak = stringLiczbToChar(liczTrzy);
                        for (int i = 0; i < liczbaStr.length(); i++)
                            if(liczbaStr[i] == znak){
                                return true;
                            }
                        
                        

                    }
                
            
        }
    return false;
    
    
    
}
bool test2(){

}
bool test3(){

}

int main(int argc, char const *argv[])
{
    fstream plik;
    plik.open("dane.txt",ios::in);
    if(!plik.good()){
        cout<< "problem z plikiem";
    }

    // odczyt sposób 1: cztery string
    string liczbaStr,liczJeden,liczDwa,liczTrzy;
    while (plik>>liczbaStr){
        plik>>liczJeden>>liczDwa>>liczTrzy;
        cout << liczbaStr << " " << liczJeden << " " << liczDwa << " " << liczTrzy;
        if(test1(liczbaStr,liczJeden,liczDwa,liczTrzy))
        cout << "OK" << endl;
        else
        cout << "nie OK" << endl;
    }

    plik.clear();
    plik.seekg(0);

    //odczyt sposób 2: int i trzy string
    int liczba;
    //string liczJeden,liczDwa,liczTrzy; - zdefiniowane wcześniej
    while (plik>>liczba)
    {
        plik>>liczJeden>>liczDwa>>liczTrzy;
        cout << liczba << " " << liczJeden << " " << liczDwa << " " << liczTrzy << endl;
    }

    plik.clear();
    plik.seekg(0);

    //odczyt sposób 3: do tablicy z 4 string
    string dane[4];
    while (!plik.eof()){
        for(int i = 0; i<4; i++){
            plik>>dane[i];
        }
        for(int i = 0; i<4; i++){
            cout << dane[i] << " ";
        }

        cout << endl;
    }
    
    


    return 0;
}
