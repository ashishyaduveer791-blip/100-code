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
        return 1; // Exit the program with an error code
    }

    // Check if the number is even or odd using if-else
    if (number % 2 == 0)
    {
        printf("The number %d is even.\n", number);
    }
    else
    {
        printf("The number %d is odd.\n", number);
    }

    return 0; // Exit the program successfully
}
