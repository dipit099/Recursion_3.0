#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
   
    // so that we can flush that enter character
    cin.ignore();

    
    string name;
    //cin >> name;  // single word
    getline(cin,name);  // full line of words

    cout << "Age=" << age << endl;
    cout << "Hello " << name <<"!!" << endl;
}

// unless "enter" char is found