//program wyszukujący najdłuższy podciąg liczb parzystych
#include <iostream>
#include <time.h>
using namespace std;

bool parzysta (int a){
    if (a %2 ==0 && a !=0)
        return true;
    else
        return false;
}

int main(int argc, char const *argv[])
{
    cout << "najdłuższy podciąg liczb" << endl;

    const int ROZMIAR  = 10;
    int ciag[ROZMIAR];
      srand(time(NULL));
      for (int i = 0; i <ROZMIAR; i++){
        ciag[i]=rand()%20;
        cout << ciag[i] << " ";
      }
      cout << endl;

      int pociagu = 0;
      int kciagu = 0;
      int dciagu = 0;

      for(int p = 0; p<ROZMIAR; p++){
        if(parzysta(ciag[p])){
            for(int k = p + 1; k<ROZMIAR; k++){
                if(!parzysta(ciag[k])){
                    int d = k-p;
                    if( d > dciagu){
                        dciagu = p;
                        kciagu = k-1;
                        dciagu = d;
                    }
                    p = k;
                    break;
                }
            }
        }
      }

      cout << "Początek: " << pociagu+1 << " Koniec: " << kciagu << " Długość: " << dciagu;



    return 0;
}
