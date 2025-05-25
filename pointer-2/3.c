// array of pointers
#include <stdio.h>
int main()
{
    // 3tta pointerrrrrr
    int *ptr[3]; /// ARRAY of POINTERS
    // 3ta int ke point korte parbe...
    int a = 5, b = 10, c = 15;
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    printf("%d %d %d", *(ptr[0]), *(ptr[1]), *(ptr[2]));
}