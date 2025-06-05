#include <stdio.h>
int main()
{
    int num = 5;
    int result = ~num;
    int andNumber = num & result;
    int orNumber = num | result;

    int xorNumber = num ^ result;

    printf("Original num=%d\n", num);
    printf("Final num=%d\n", result);

    // MUST try to print in binary form
    printf("Original Number=");
    for (int i = sizeof(num) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");

    printf("Final Number=   ");
    for (int i = sizeof(result) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (result >> i) & 1);
    }
    printf("\n");

    printf("andNumber=   ");
    for (int i = sizeof(andNumber) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (andNumber >> i) & 1);
    }
    printf("\n");
    printf("OrNumber=   ");
    for (int i = sizeof(orNumber) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (orNumber >> i) & 1);
    }
  printf("\n");

     printf("XOrNumber=   ");
    for (int i = sizeof(xorNumber) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (xorNumber >> i) & 1);
    }
}