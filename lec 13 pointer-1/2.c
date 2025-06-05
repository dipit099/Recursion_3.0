#include <stdio.h>

int main()
{
    float q;
    q = 200;
    printf("%f\n", q);
    printf("Address of q = %p\n", &q); // print -> in python
    float *p;                          // p -> q
    p = &q;                            // &q // address of q/// stored in p
    printf("Address stored in p = %p\n", (void *)p);

    // p er moddhe address jeta ase ..setar vitore jao and amke value ta deo

    printf("Value stored in p= %f", *p);
}