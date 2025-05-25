// multiple indirection

#include <stdio.h>
int main()
{
    int **nptr, *ptr, var;
    var = 10;
    ptr = &var;
    nptr = &ptr;

    // print the value of var from nptr
    printf("Address stored in nptr = %p\n", nptr);
    printf("Address of ptr = %p\n", &ptr);
    printf("Address stored in ptr = %p\n", ptr);
    printf("Address of var = %p\n", &var);

    printf("Value of var=%d\n", *(*nptr));
}