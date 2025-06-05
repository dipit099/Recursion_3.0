#include<bits/stdc++.h>
using namespace std;


int calculateRectArea(int length, int breadth){
    int area= length*breadth;
    return area;
}

int main(){
    int length,breadth;
    cin >> length >> breadth ;

    int myArea=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea << endl;


}