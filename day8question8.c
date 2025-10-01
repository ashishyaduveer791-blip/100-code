#include <stdio.h>

// Function to calculate the sum of the first n natural numbers
unsigned long long sum_of_natural_numbers(int n)
{
    // Formula: Sum = n * (n + 1) / 2
    return (unsigned long long)n * (n + 1) / 2;
}

int main()
{
    int n;

    // Prompt the user for input
    printf("Enter a positive integer (n): ");

    // Validate the input
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum
    unsigned long long sum = sum_of_natural_numbers(n);

    // Display the result
    printf("The sum of the first %d natural numbers is: %llu\n", n, sum);

    return 0;
}
