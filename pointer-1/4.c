#include <stdio.h>
int main()
{

    int q = 100;
    int *p = &q;
    printf("Address of q = %p\n", &q);

    printf("Address pointed by p = %p\n", p);

    p = p + 1; // p++
    printf("Address pointed by p = %p\n", p);


}