// swapping of variables
#include <stdio.h>
void swap(int *a, int *b) // pass by value
{
    printf("Before swap=%d %d \n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap=%d %d \n", *a, *b);
}
int main()
{
    int a = 4, b = 5;
    swap(&a, &b);
    printf("In main func, after swap=%d %d \n", a, b);
}