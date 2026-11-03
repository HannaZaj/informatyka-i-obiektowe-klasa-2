//Zapisz program, który w pliku bin.txy zawierającym 100 liczb binatrych kazda w osobnej lini odnajdzie i poda ilosc:
//liczb parzystych
//liczb, które mająwięcej liczb 1 niż 0 w zapisie binarnym
//liczb ymetrycznuch w zapisie binarnym
//liczb symetrycznych w zapisie dziesiętnym
//liczb, których suma cyfr jest  większe niż 20

#include <iostream>
#include <fstream>

using namespace  std;

bool czyParzysta(string liczbaBin){
    //sprawdzićczy najmłotszy bit jest 0 czy 1 , length() , liczbaBin[]

    if(liczbaBin[liczbaBin.length() -1]== 0){
        return true;
    }
    else{
        return false;
    }
}
bool czyWiecejJedynek(string liczbaBin){
    //sprawdż każdy bit w licznbaBin[i] w pętli i => 0 -> length()-1 w zależności od wartości inkrementować licznik jeden/zero zwrócić wynik poruwnania jeden>zero
    int jeden;
    int zero;
    for (int i = 0; i < liczbaBin.length()-1; i++){
        if(liczbaBin[i] == 1){
            jeden++;
        }
        else{
            zero++;
        }
    } 
    if(jeden>zero){
        return true;
    }
    else{
        return false;
    }
}
bool czySymetryczne(string liczbaBin){
    //w pętli i=> 0 -> length()/2 czy liczbaBin[i] == liczbaBin[. . . length()-1-i]
    for (int i = 0; i < liczbaBin.length()/2; i++){}
    {
        /* code */
    }
    
}
// long binToDec(string liczbaBin){
//     //konwersja liczby binarnej na dziesiętną
// }

int main(int argc, char const *argv[])
{
    fstream plik;
    plik.open("bin.txt", ios::in);
    if(!plik.good()){
        cout << "Problen z plikiem";
        return 0;
    }


    int parzyste = 0;
    int wiecejJedynek = 0;
    int symetryczneBin;

    for (int i = 0; i < 100; i++)
    {
        string liczbaBin;
        plik >> liczbaBin;
        cout << liczbaBin << endl;
        // if (czyParzysta(liczbaBin))
        // parzyste++;
        // if (czyWiecejJedynek(liczbaBin))
        // wiecejJedynek++;
        // if(czySymetryczne(liczbaBin))
        // symetryczneBin++;
    }
    

    return 0;
}
