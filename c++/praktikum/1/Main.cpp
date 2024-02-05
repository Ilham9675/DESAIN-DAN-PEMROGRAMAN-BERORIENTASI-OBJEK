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
    
    
}