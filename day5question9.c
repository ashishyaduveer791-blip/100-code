#include <stdio.h>
#include <math.h> // For the pow() function used in compound interest calculation

// Function to calculate Simple Interest
double calculateSimpleInterest(double principal, double rate, double time)
{
    return (principal * rate * time) / 100.0;
}

// Function to calculate Compound Interest
double calculateCompoundInterest(double principal, double rate, double time)
{
    return principal * pow((1 + rate / 100.0), time) - principal;
}

int main()
{
    double principal, rate, time;

    // Input principal, rate, and time
    printf("Enter the principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal <= 0)
    {
        printf("Invalid input. Principal must be a positive number.\n");
        return 1;
    }

    printf("Enter the annual interest rate (in percentage): ");
    if (scanf("%lf", &rate) != 1 || rate <= 0)
    {
        printf("Invalid input. Rate must be a positive number.\n");
        return 1;
    }

    printf("Enter the time (in years): ");
    if (scanf("%lf", &time) != 1 || time <= 0)
    {
        printf("Invalid input. Time must be a positive number.\n");
        return 1;
    }

    // Calculate Simple Interest
    double simpleInterest = calculateSimpleInterest(principal, rate, time);

    // Calculate Compound Interest
    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    // Display the results
    printf("\nResults:\n");
    printf("Simple Interest: %.2lf\n", simpleInterest);
    printf("Compound Interest: %.2lf\n", compoundInterest);

    return 0;
}
