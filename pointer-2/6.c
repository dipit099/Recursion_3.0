// 2d ARRAY
#include <stdio.h>
int main()
{
    // int arr[2][3] = {{1,2,3},{4,5,6}};
    const int row = 2;
    const int col = 3;
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    // 1 2 3
    // 4 5 6
    // using array
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // using pointers
    int *ptr;
    ptr = &arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // arr[i][j]
            printf("%d ", *(ptr + i * col + j));
        }
        printf("\n");
    }
}