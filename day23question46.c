// Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main()
{
    int rows = 5; // Number of rows and columns

    for (int i = 1; i <= rows; i++)
    { // Loop for rows
        for (int j = 1; j <= rows; j++)
        { // Loop for columns
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
