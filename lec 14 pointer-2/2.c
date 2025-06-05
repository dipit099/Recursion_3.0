// length of string using pointer
#include <stdio.h>
int main()
{
    char arr[] = "Bangladesh";
    char *ptr;
    char *str;
    ptr = arr;
    str = arr;

    // str updateeeeeee....end of string
    while (*str)
    {
        printf("%c\n", *str);
        str++;
    }
    int length = str - ptr;

    printf("Address of ptr=%p and str=%p and Length = %d", ptr, str, length);
}
