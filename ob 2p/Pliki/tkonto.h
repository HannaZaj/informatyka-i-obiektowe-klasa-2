#include <string>

class Tkonto{
    private:
        std::string nrKonta;
        std::string nazwiso;
        std::string imie;
        float saldo;
        int licznikOperacji;
        static float saldoMax;
        static float saldoSiePomaga;
    public:
        std::string nazwaKonta;
        //konstruktory
        Tkonto();
        Tkonto(std::string nazwaKonta, std::string nrKonta, std::string nazwisko, std::string imie);
        //metody dostępowe (dodamy gdy będą potrzebne)
        void setSaldo(float saldo);
        float getSaldoMax();
        float getSaldoSiePomaga();
        //metoda info()
        void info();
        friend bool przelew (Tkonto zKonta, Tkonto naKonto, float kwota);

};