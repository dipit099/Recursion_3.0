#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("input.txt", "r");

    if(fp==NULL){
        printf("Input file doesnt exist\n");
    }

    char array[100];
    printf("Reading word by word\n");
    while (  fscanf(fp, "%s", array ) != EOF )
    {
       printf("Word=%s\n",array);
        
    }
    

    
    fclose(fp);
    


   
}