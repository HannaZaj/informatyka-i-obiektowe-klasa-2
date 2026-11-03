#include <iostream>
#include "tkonto.h"

bool przelew (Tkonto zKonta, Tkonto naKonto, float kwota){
    if (from.saldo >= kwota){

        from.licznikOperacji += 1;
        from.saldo -= kwota;
        to.saldo += kwota;

        return true;
    } else {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    Tkonto testowe;

    Tkonto *tomek = new Tkonto();
    Tkonto *marek = new Tkonto("ROR Marek", "PL 0565 4875 5487 5421 5454 5486", "Nowak", "Marek");
    Tkonto *ktos = new Tkonto("Ktos", "5545 6734", "ktoss", "ktosss")

    marek->setSaldo(1000);

    przelew(*marek, *ktos, 200);

    tomek ->info();
    delete(tomek);

    std::cout << "WITAM w moim BANKU u nas zawsze zyskujesz" << std::endl;
    return 0;
}
