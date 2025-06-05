#include <stdio.h>
union car1
{
    char ownerName[100];
    char carName[50];
    char color[20];
    // i will use any 1 of them
};

typedef union car1 carDataType;
int main()
{

    carDataType c11, c12;

    printf("Size of car11 = %d bytes", sizeof(c11));
}