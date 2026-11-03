/*
Wskażnik wskazuje aktualny obirkt dsnej klasy moze służyć do odrużniania parametróe od pol klsdy jeśli mają taką samą nazwę
*/

#include <iostream>
#include <string>

using namespace std;

class samolot{
    private:
    string model;
    int wysokoscLotu;
    void komunitatTworzeniaSamolotu();
    static int maksymalnaWysokoscLotu;
    public:
    samolot(string model);
    samolot(string model, int wysokoscLotu);
    static getMaksymalnaWysokoscLotu();
    static setMaksymalnaWysokoscLotu(int maksymalnaWysokoscLotu;);
}; 
//definicja metod klasy samolotu
samolot :: samolot(string model){
    this -> model = model;
    this -> wysokoscLotu = 10000;
}
samolot::samolot(string model, int wysokoscLotu):model(model),wysokoscLotu(wysokoscLotu){

}
void samolot::komunikatTworzeniaSamolotu(){
    cout << "Tworzenie obiekt Samolot: " << endl;
    cout << "model: " << model << ", Wysokość lotu: " << wysokoscLotu<< " m npm" << endl;
}

samolot::getMaksymalnaWysokoscLotu(){
    return maksymalnaWysokoscLotu;
}

samolot::maksymalnaWysokoscLotu = 30000;

int main(int argc, char const *argv[])
{
    cout << "Start" << endl;
    samolot airbus (AIRBUS, 12000);

    cout << airbus.getMaksymalnaWysokoscLotu();
    return 0;
}

