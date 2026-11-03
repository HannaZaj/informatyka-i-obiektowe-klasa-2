#include "tkonto.h"
//definicja pól statycznych
float Tkonto::saldoMax = 0;
float Tkonto::saldoSiePomaga = 0;
//definicja konstruktorów
Tkonto::Tkonto(){
    nazwaKonta = "Brak danych";
    nrKonta = "Brak danych";
    imie = "Brak danych";
    nazwisko = "Brak danych";
    saldo = 0;
    licznikOperacji = 0;
};
Tkonto::Tkonto(std::string nazwaKonta, std::string nrKonta, std::string nazwisko, std::string imie){
    this->nazwaKonta = nazwaKonta;
    this->nrKonta = nrKonta;
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->saldo = 0;
    this->licznikOperacji = 0;
};
//definicja metod dostępowych
void Tkonto::setSaldo(float saldo){
    this->saldo = saldo;
};
float Tkonto::getSaldoMax(){
    return saldoMax;
};
float Tkonto::getSaldoSiePomaga(){
    return saldoSiePomaga;
};
//definicja metody info()
void Tkonto::info(){
    std::cout << "\n" << "***********************" << std::endl;
    std::cout << "*" << nazwaKonta << std::endl;
    std::cout << "*" << nrKonta << std::endl;
    std::cout << "*" << nazwisko << "," << imie<< std::endl;
    std::cout << "*" << saldo << "," << licznikOperacji;
    std::cout << "\n" << "***********************" << std::endl;
};

TKonto::~TKonto(){
    std::cout << "\n Usuwanie sie konta o nazwie" << nazwaKonta;
    std::cout << "\n Przelewanie balansu do SiePomaga";

    saldoSiePomaga += saldo;
    saldo = 0;
}
