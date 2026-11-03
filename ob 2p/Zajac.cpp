#include <iostream>
#include <string>
using namespace std;
/*klasa bazowa pojazd*/

class Pojazd{
    private:
        string nrVin;
    protected:
        string nrRejestracji;
    public:
        string kolor;
        Pojazd();
        Pojazd(string nrVin, string nrRejestracji, string kolor);
        string pobierzDane();
};

//implementacja metod klasy Pojazd

Pojazd::Pojazd(){
    nrVin = nrRejestracji = kolor = "BRAK DANYCH";
}
Pojazd::Pojazd(string _nrVin, string _nrRejestracji, string _kolor){
    nrVin = _nrVin; nrRejestracji = _nrRejestracji; kolor = _kolor;
}

string Pojazd::pobierzDane(){
    return "nrVin:" +nrVin +" rejestracja: " +nrRejestracji + " kolor: " + kolor;
}

/*klasa pochodna Bus z klasy Pojazd*/

class Bus: public Pojazd{
    public: 
    string nrLini;
    Bus(string nrVin, string nrRejestracji, string kolor, string nrLini);
    Bus();
    string pobierzDane();
};

//definicja metod klasy pochodnej Bus
//brak wywloania konstruktora klasy bazowej jest wywolany domyslnie konstruktor bezparametrowy
Bus::Bus(){
    nrLini="BRAK DANYCH";
}
Bus::Bus(string _nrVin, string _nrRejestracji, string _kolor, string _nrLini):Pojazd(_nrVin,_nrRejestracji,_kolor){
    nrLini = _nrLini;
}

string Bus::pobierzDane(){
    return Pojazd::pobierzDane()+" nrLini: "+nrLini;
}

/*klasa pochodna Traktor - dziedziczona po klasie Pojazd(protected)*/

class Traktor: protected Pojazd{
    public:
    string rodzajPrzewozu;
    Traktor(string nrVin, string nrRejestracji, string kolor, string rodzajPrzewozu);
    Traktor();
    string pobierzDane();
};

Traktor::Traktor(){
    rodzajPrzewozu="BRAK DANYCH";
}

Traktor::Traktor(string _nrVin, string _nrRejestracji, string _kolor, string _rodzajPrzewozu):Pojazd(_nrVin,_nrRejestracji,_kolor){
    rodzajPrzewozu=_rodzajPrzewozu;
}

string Traktor::pobierzDane(){
    return Pojazd::pobierzDane()+" rodzajPrzewozu: "+rodzajPrzewozu;
}


/*klasa pochodna SamochodOsobowy - dziedziczona po klasie Pojazd(private)*/

class SamochodOsobowy: private Pojazd{
    public:
    string iloscDrzwi;
    SamochodOsobowy(string nrVin, string nrRejestracji, string kolor, string iloscDrzwi);
    SamochodOsobowy();
    string pobierzDane();
};

SamochodOsobowy::SamochodOsobowy(){
    iloscDrzwi="BRAK DANYCH";
}

SamochodOsobowy::SamochodOsobowy(string _nrVin, string _nrRejestracji, string _kolor, string _iloscDrzwi):Pojazd(_nrVin,_nrRejestracji,_kolor){
    iloscDrzwi=_iloscDrzwi;
}

string SamochodOsobowy::pobierzDane(){
    return Pojazd::pobierzDane()+" iloscDrzwi: "+iloscDrzwi;
}

int main(int argc, char const *argv[]){

    Pojazd nieznany;
    cout << nieznany.pobierzDane() << endl;
    Bus ikarus("VIN242342", "SGL2345", "Czerwony", "6");
    cout << ikarus.pobierzDane() << endl;
    Traktor ursus;
    cout<< ursus.pobierzDane() << endl;
    SamochodOsobowy bmw;
    cout << bmw.pobierzDane() << endl;
    return 0;
}