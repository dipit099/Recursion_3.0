#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("input.txt", "r");

    if(fp==NULL){
        printf("Input file doesnt exist\n");
    }

    char array[100];
    printf("Reading line by line\n");
    while (  fgets(array, sizeof(array), fp) != NULL  )
    {
       printf("Line=%s",array);
        
    }
    

    
    fclose(fp);
    


   
}