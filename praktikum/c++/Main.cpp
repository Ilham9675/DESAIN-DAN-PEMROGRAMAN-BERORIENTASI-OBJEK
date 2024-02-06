#include <bits/stdc++.h>
#include "Human.cpp"

using namespace std;

int main(){
    Human rain;
    rain.set_name("Rain");
    rain.set_gender('L');

    Human techi("techi",'P');

    int i,n = 0;
    string name;
    char gender;

    list<Human> llist;
    cin >> n;
    for(i = 0;i < n;i++){
        Human temp;
        cin >> name >> gender;
        temp.set_name(name);
        temp.set_gender(gender);

        llist.push_back(temp);

    }
    
    cout << '\n' << "Automatic output : " << '\n';
    cout << "the first human's name is " << rain.get_name() << '\n';
    cout << "the first human's gender id " << rain.get_gender() << '\n';
    cout << "the second human's name is " << techi.get_name() << '\n';
    cout << "the second human's gender id " << techi.get_gender() << '\n';


    cout << "Iteration Output " << '\n';

    i = 0;
    for(list<Human>::iterator it = llist.begin();it != llist.end();it++,i++){
        cout << (i+1) << ". " << it->get_name() << " | " << it->get_gender() << '\n';
    }

    return 0;
}