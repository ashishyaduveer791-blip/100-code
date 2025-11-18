#include <stdio.h>

int main()
{
    int rows, cols;
    int i, j;

    // Step 1: Get matrix size
    printf("Enter rows and columns (both matrices same size): ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], C[rows][cols];

    // Step 2: Read first matrix
    printf("\nEnter first matrix %dx%d:\n", rows, cols);
    for (i = 0; i < rows; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Step 3: Read second matrix
    printf("\nEnter second matrix %dx%d:\n", rows, cols);
    for (i = 0; i < rows; i++)
    {
        printf("Row %d: ", i + 1);
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Step 4: Add them
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Step 5: Show result
    printf("\nMatrix A + Matrix B = \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}