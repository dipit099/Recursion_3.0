#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    //cin >> name;  // single word
    getline(cin,name);  // full line of words

    cout << "Hello " << name <<"!!" << endl;

    // try to find the length in C !!
    cout << "Length= " << name.length() << endl;
}