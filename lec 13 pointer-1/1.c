#include <stdio.h>

int main()
{
    int q;
    q = 200;
    printf("%d\n", q);
    printf("Address of q = %p\n", &q); // print -> in python
    int *p;                            // p -> q
    p = &q; // &q // address of q/// stored in p
    printf("1Address stored in p = %p\n", (void *)p); //typecast

    printf("2Address stored in p = %p\n",p);

    // p er moddhe address jeta ase ..setar vitore jao and amke value ta deo

    printf("Value stored in p= %d", *p);
}