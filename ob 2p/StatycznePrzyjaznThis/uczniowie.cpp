#include <iostream>
#include <string>

using namespace std;

class uczen{
    private:
    string imie;
    int wiek;
    int klasa;
    int id;
    static int liczbaUczniow;
    public:
    uczen(string imie, int wiek);
    uczen(string imie, int wiek, int klasa);
};

uczen::uczen(string imie, int wiek){
    this -> imie = imie;
    this -> wiek = wiek;
}

uczen::uczen(string imie, int wiek, int klasa):imie(imie),wiek(wiek),klasa(klasa){
    liczbaUczniow = liczbaUczniow + 1;
    this -> id = liczbaUczniow;
}


int main(int argc, char const *argv[])
{
    
    return 0;
}
