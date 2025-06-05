#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("input.txt", "r");

    if(fp==NULL){
        printf("Input file doesnt exist\n");
    }
    else{
        //closing the file
    fclose(fp);
    }


   
}