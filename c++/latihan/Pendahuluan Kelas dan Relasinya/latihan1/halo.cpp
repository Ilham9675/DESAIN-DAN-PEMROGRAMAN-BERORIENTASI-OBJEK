#include <iostream>
#include <string>

using namespace std;

class Halo{
    private:
        string kata;
    public:
        Halo(){
            kata = "Halo Dunia";
        }
        Halo(string nama){
            kata = nama;
        }
        void tulis(){
            cout << kata << endl;
        }
        ~Halo(){
        }
};