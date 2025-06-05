// Pointer to an array VS
// array of pointers

// integer

// int* arr[3] // arr is an array of 3pointers
// int (*arr)[3] // arr is a pointer that points to the starting of an array of 3int

// POINTER to an ARRAY
//   1 2 3
//  4 5 6
//  7 8 9
#include <stdio.h>
int main()
{
    int row = 2, col = 3;
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int (*ptr)[3]; // ptr -> 1st row / 2nd row ke point korbe... every row has 3int

    ptr = arr;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // arr[i][j]
            // printf("%d ", *(ptr + i * col + j));
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}