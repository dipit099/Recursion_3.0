#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter no of gamers : ");
    scanf("%d", &n);
    // input

    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("No memory allocation");
        exit(0);
    }
    printf("Before assigning\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }
    printf("After assigning\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);
    printf("Free memory done\n");
}