#include <iostream>
#include <string>

using namespace std;

class buku{
    private:
        string judul;
        string pengarang;
    public:
        buku(){

        }
        buku(string j,string p){
            judul = j;
            pengarang = p;
        }
        void setjudul(string j){
            judul = j;
        }
        void setpengarang(string p){
            pengarang = p;
        }
        string getjudul(){
            return judul;
        }
        string getpengarang(){
            return pengarang;
        }

        ~buku(){

        }
};