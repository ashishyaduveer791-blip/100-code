#include <stdio.h>

int main()
{
    int n = 5; // Number of rows for the top half (maximum stars row = 2*n-1)

    // Top half of the pattern
    for (int i = 1; i <= n; i++)
    {
        int stars = 2 * i - 1; // Odd number of stars
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for (int i = n - 1; i >= 1; i--)
    {
        int stars = 2 * i - 1;
        for (int j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
