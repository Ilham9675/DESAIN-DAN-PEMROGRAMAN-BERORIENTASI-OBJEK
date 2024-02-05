#include "buku.cpp"

using namespace std;

int main(){

    buku b1;
    b1.setjudul("J1ME");
    b1.setpengarang("orang_1");

    cout << b1.getjudul() << endl;
    cout << b1.getpengarang() << endl;

    buku b2("J2ME","orang_2");
    cout << b2.getjudul() << endl;
    cout << b2.getpengarang() << endl;


    return 0;
}