#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("input.txt", "r");

    if(fp==NULL){
        printf("Input file doesnt exist\n");
    }

    char ch;
    printf("Reading char by char\n");
    while ( (ch = fgetc(fp)) != EOF )
    {
       printf("%c",ch);
        
    }
    

    
    fclose(fp);
    


   
}