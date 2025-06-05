#include<stdio.h>
int main(){
    //lets open a file
    FILE *fp = fopen("output.txt", "a");

   //w== overwrite; a= dont overwrite, just write

    //lets write

    fputs("Lets use fputs here\n",fp);


    //formatted txt print koro

    //fprintf %d %s 

    int age=25;
    float gpa=4.5;

    fprintf(fp,"Storing the age and result of a student %d %f\n",age,gpa);


    
    fclose(fp);
    


   
}