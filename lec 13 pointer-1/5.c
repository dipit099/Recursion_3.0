#include <stdio.h>
int main()
{

    /// CHARACTERRRRRRRRRRRR

    char r = 'A';
    char *s = &r;
    printf("for char, Address of r = %p\n", &r);

    printf("for char,Address pointed by s = %p\n", s);

    s = s + 1; // s++
    printf("for char,Address pointed by s = %p\n", s);

    printf("for char,Value stored = %d\n", *s);
}