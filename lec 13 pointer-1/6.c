// pointer with arrays
#include <stdio.h>
int main()
{
    int arr[5] = {11, 12, 13, 14, 15};

    // p will point to first element
    int *p;
    //p = &arr[0]; 
    p = arr;

    printf("Value in p = %d", *p);

    p = p + 4;

    printf("Value in p = %d", *p);
}