// pointer and strings

#include <stdio.h>
int main()
{
    char str[] = "Favorite subject";

    // pointer
    char *p;
    p = str;

    for (int i = 0; p[i]; i++)
    {
        printf("Char index=%d ; Value=%c Address=%p\n", i, p[i], p + i);
    }
}

// STRING LENGTH USING POINTER ???