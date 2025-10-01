#include <stdio.h>

int main()
{
    int n = 5; // Total number of rows

    for (int i = 1; i <= n; i++)
    { // Loop for each row
        // Print leading spaces
        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        // Print numbers
        for (int j = n - i + 1; j <= n; j++)
        {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
