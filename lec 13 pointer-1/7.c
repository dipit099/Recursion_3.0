// pointer with arrays
#include <stdio.h>
int main()
{
    int arr[5] = {11, 12, 13, 14, 15};

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    // pointer use kore print korba arr element gula ke
    int *p;
    p = arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Index=%d ; Value=%d ; Address=%p\n", i, *p, p);
    //     p++;
    // }

    for (int i = 0; i < 5; i++)
    {
        // printf("###Index=%d ; Value=%d ; Address=%p\n", i, *p, p);

        // p++;

        printf("Index=%d ; Value=%d ; Address=%p\n", i, *(p + i), p+i);
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("###Index=%d ; Value=%d ; Address=%p\n", i, *p, p);

        // p++;

        // printf("Index=%d ; Value=%d ; Address=%p\n", i, *(p+i), p);
        printf("Index=%d ; Value=%d ; Address=%p\n", i, p[i],  p+i);
    }
}