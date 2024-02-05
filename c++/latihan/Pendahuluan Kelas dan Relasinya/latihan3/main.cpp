#include "titik.cpp"

int main(){

    Titik t1;
    Titik t2(11,9);

    t1.setx(18);
    t1.sety(28);

    cout << "t1 : nilai X : " << t1.getx() << endl;
    cout << "t1 : nilai Y : " << t1.gety() << endl;

    cout << "t2 : nilai X : " << t2.getx() << endl;
    cout << "t2 : nilai Y : " << t2.gety() << endl;

    return 0;
}