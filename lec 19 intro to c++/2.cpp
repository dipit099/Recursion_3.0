#include <bits/stdc++.h>
using namespace std;

int main()
{

    // array input
    // 5 ta integer input
    //  int a,b,c,d,e;
    //  cin >> a >> b >> c >> d >> e;

    // 1 2 3 4 5 6 7 8
    // array indexing always starts from "0"
    // array[0]  //1st element
    // array[1]   //2nd element
    // array [9]  // 10th element

    int array[10];
    cout << "Enter 10 integers" << endl;

    // for loop
    for (int i = 0; i < 10; i++) // 0 to 9
    {
        cout << "Please enter " << i + 1 << " th element" << endl;
        cin >> array[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "Here is your " << i + 1 << " th element " << array[i] << endl;
    }
}