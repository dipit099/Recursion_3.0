// 2D with malloc and free
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 3, cols = 2;
    int **ptr;

    ptr = (int **)malloc(rows * sizeof(int *));

    for (int i = 0; i < rows; i++)
    {
        ptr[i] = (int *)malloc(cols * sizeof(int));
    }

    // input
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }

    // output
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // free(MUST)
    for (int i = 0; i < rows; i++)
    {
        // ptr[i] = (int *)malloc(cols * sizeof(int));
        free(ptr[i]);
    }

    free(ptr);
}