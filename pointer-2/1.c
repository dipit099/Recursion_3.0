#include <stdio.h>
int main()
{
    // printf("hello");
    char str[] = "Hello i am dipit"; 
    char *p;
    p = str;
    for (int i = 0; p[i]; i++)
    {
        printf("%c", p[i]);
    }
    printf("\n");
    // while loop
    while (*p)
    {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    printf("checking=%c", *p);
}