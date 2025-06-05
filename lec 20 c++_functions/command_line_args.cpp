#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]){

    cout << "Num of command line args=" << argc << endl;
    cout << "Printing command line args\n";
    for(int i=0; i<argc; i++){
        cout << argv[i] << endl;
    }


    //5-> argv[1]
    //10 -> argv[2]

    // u need to convert the string to Integer

    int a= atoi(argv[1]);
    int b=atoi(argv[2]);
    // int product=argv[1] * argv[2];  //error

    int product=a*b;

    cout << "PRODUCT=" << product << endl;



}

/*
g++ command_line_args.cpp -o demo
./demo 
*/