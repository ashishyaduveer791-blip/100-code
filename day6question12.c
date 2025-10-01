#include <stdio.h>

int main()
{
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");

    // Input validation to ensure the user enters an integer
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit with an error code
    }

    // Check if the number is positive, negative, or zero using nested if-else
    if (number >= 0)
    {
        if (number == 0)
        {
            printf("The number is zero.\n");
        }
        else
        {
            printf("The number is positive.\n");
        }
    }
    else
    {
        printf("The number is negative.\n");
    }

    return 0; // Exit successfully
}
