#include "zespolona.h"
#include <iostream>

Zespolona::Zespolona(){
    nazwa = "BRAK";
    rzecz = 0.0;
    urojo = 0.0;
}

Zespolona::Zespolona(std::string nazwa, float rzecz, float urojo){
    this -> nazwa = nazwa;
    this -> rzecz = rzecz;
    this -> urojo = urojo;
}

std:: string Zespolona::toString(){
    std::string wynik = nazwa + " : z = " + std::to_string(rzecz)+ " + " + std::to_string(urojo) + "i"; 

    return wynik;
}

Zespolona Zespolona::operator + (const Zespolona &argP){
    Zespolona tmp(nazwa+"_"+argP.nazwa, rzecz+argP.rzecz, urojo+argP.urojo);
    return tmp;
};

Zespolona & Zespolona::operator++(){
    ++rzecz;
    return *this;
}

Zespolona &Zespolona::operator++(int){
    ++rzecz;
    return *this;
}

bool Zespolona::operator==(const Zespolona &argP){
    return (rzecz==argP.rzecz & urojo==argP.urojo);
}


//Poza klasą

Zespolona operator + (const float argL, const Zespolona & argP){
    Zespolona tmp(argP.nazwa +"_"+std::to_string(argL), argP.rzecz+argL,argP.urojo);
    return tmp;
}

std::ostream & operator << (std::ostream &str, const Zespolona &argP){
    str << argP.nazwa << " : z= " << std::to_string(argP.rzecz) << " + " + std::to_string(argP.urojo) << "i" ;
    return str;
}