#include<stdio.h>
int main(){
    
    int num=16;
   // scanf("%d",&num);

    if( (num & (num-1)) == 0){
        printf("%d is a power of 2",num);
    }
    else{
        printf("%d is not a power of 2",num);
    }
}