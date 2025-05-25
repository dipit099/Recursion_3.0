// array of pointers to strings
#include <stdio.h>
int main()
{
    char *names[] = {
        "dhaka",
        "ctg",
        "rangpur", // names[2] : 1002
        "sylhet"}; // names[3] : 1010

    printf("%p=%s %p=%s \n", &names[2], names[2], &names[3], names[3]);
    // swap ...rangpur and ctg
    // int a=3; b=4;   int temp=a; a=b; b=temp;
    char *temp;
    temp = names[2];     // temp r moddhe ki address? 1002
    names[2] = names[3]; // names[2] --> 1010
    names[3] = temp;     // names[3] ---> 1002
    printf("%p=%s %p=%s \n", &names[2], names[2], &names[3], names[3]);
}