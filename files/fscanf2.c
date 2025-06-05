#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("input2.txt", "r");

    if(fp==NULL){
        printf("Input file doesnt exist\n");
    }

   int marks;
   int total=0;
    printf("Reading int by int\n");
    //scanf("%d",&marks);
    while (  fscanf(fp, "%d", &marks ) != EOF )
    {
       printf("Mark=%d\n",marks);
       total+= marks;
        
    }
    printf("total marks=%d",total);
    

    
    fclose(fp);
    


   
}