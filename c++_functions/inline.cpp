#include<bits/stdc++.h>
using namespace std;


inline int calculateRectArea(int length, int breadth){
    int area= length*breadth;
    return area;
}

int main(){
    int length,breadth;
    cin >> length >> breadth ;

    int myArea1=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea1 << endl;


    int myArea2=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea2 << endl;


    int myArea3=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea3 << endl;


    int myArea4=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea4 << endl;


    int myArea5=calculateRectArea(length,breadth);

    cout << "MyArea= " << myArea5 << endl;


}