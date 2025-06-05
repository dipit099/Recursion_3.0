#include<stdio.h>
int main(){
    
    int num1=16;
    int num2=16;

    if( (num1 ^ num2) == 0){
        printf("They are same numbers\n");
    }
    else{
        printf("No they are not same\n");
    }

}