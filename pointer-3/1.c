#include <stdio.h>

int main()
{
    char *names[] = {"Ayon", "Santu", "Shampa", "Sohan", "Sunny"};

    // Print addresses before swap
    printf("Before swap:\n");
    printf("names[0]: %s, address: %p\n", names[0], (void *)names[0]);
    printf("names[3]: %s, address: %p\n", names[3], (void *)names[3]);

    // Swap pointers
    char *temp = names[0];
    names[0] = names[3];
    names[3] = temp;

    // Print addresses after swap
    printf("\nAfter swap:\n");
    printf("names[0]: %s, address: %p\n", names[0], (void *)names[0]);
    printf("names[3]: %s, address: %p\n", names[3], (void *)names[3]);

    return 0;
}
