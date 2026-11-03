#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Samochod //clasa wzór na podstaweie którego tworzony jest obiekt
{
private: //sekcja prywatna dostępna tylko z wewnątrz klasy
    string nrVIN; //pole klasy (zmienna)
    void testVin(); //deklaracja metody (funkcji)
    protected: //sekcja chronina dostęp z wewnątrz klasy oraz z klas pochodnych
    
public:
    string kolor;
    bool urwacAntenke();
    Samochod(/* args */); //konstructor przygotowuje obiekt do użycia najszyciej inicjuje 
                        //jeśli nie napiszemy to dostajemy konstructor domyslny(pusty)
                        //można twożyć własne konstructory  (które różnią się listą parametrów)
 Samochod(string nrVIN);
  Samochod(string nrVIN, string kolor);
    ~Samochod(); //destructor sprząta obiekt i przygotowuje go do usunięcia, destructor jest jeden 
    //^^^ to są deklaracje
    string podajDane(){
        return "nrVIN" + nrVIN + "kolor" + kolor;
    }
    //^^^metoda wraz definicja
    // metody dostępowe 
    string getVIN();
    void setVIN(string Vin);
};

//definicja metod clasy
Samochod::Samochod(/* args */)
{
    nrVIN = "brak danych";
    kolor = "czarny"; 
    cout << "tworze samochod nrVin " << nrVIN << " w kolorze " <<kolor<< endl;
}
Samochod::Samochod(string _nrVIN)
{
    nrVIN = _nrVIN;
    kolor = "czarny";
    cout << "tworze samochod nrVin " << nrVIN << " w kolorze " <<kolor<< endl; 
}
Samochod::Samochod(string _nrVIN, string _kolor)
{
    nrVIN = _nrVIN;
    kolor = _kolor; 
    cout << "tworze samochod nrVin " << nrVIN << " w kolorze " <<kolor<< endl;
}

Samochod::~Samochod()
{
    cout <<"kasuje samochod nrVin " << nrVIN << "kasjue kolor" << kolor << endl;
}
string Samochod::getVIN(){
    return nrVIN;
}
void Samochod::setVIN(string _nrVin){
    nrVIN = _nrVin;
    testVin();
}
void Samochod::testVin(){
    cout <<"sprawdzam w bazie CEPIK nr Vin " << nrVIN <<endl;
}

int main(){

int liczba;
Samochod subaru;
subaru.kolor = "niebieski";
subaru.setVIN("1");

//Samochod komisSamochodowy[100];
//komisSamochodowy[0].urwacAntenke();

Samochod*wsk;
wsk = new Samochod("czarny","jp");

}