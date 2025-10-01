#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    { // Loop for rows
        // Print leading spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < rows - i; k++)
        {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
