#include <stdio.h>

int main()
{

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int i, j;

    printf("Original 2x3 Matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose 3x2 Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}