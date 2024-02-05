#include <iostream>
#include <string>

using namespace std;

class Titik{
    private:
        int x,y;
    public:
        Titik(){
            x = 0;
            y = 0;
        }
        Titik(int xp,int yp){
            x = xp;
            y = yp;
        }

        void setx(int xp){
            x = xp;
        }

        void sety(int yp){
            y = yp;
        }

        int getx(){
            return x;
        }

        int gety(){
            return y;
        }

        ~Titik(){ 
        }
};