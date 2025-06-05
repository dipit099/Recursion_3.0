#include<bits/stdc++.h>
using namespace std;

int main(){

    double value = 124375.74345645435345345437;
  // float value = 124375.74345645435345345437; //else round up= 124376


    cout << "Value=" << value << endl;
   cout << "Fixed value=" << fixed << value << endl;

   cout << "Fixed value with setprecision=" << fixed << setprecision(8) << value << endl;
}