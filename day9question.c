#include <stdio.h>
#include <math.h> // For sqrt() function

// Function to calculate and categorize roots of a quadratic equation
void findRoots(float a, float b, float c)
{
    if (a == 0)
    {
        // Handle the case where the equation is not quadratic
        printf("This is not a quadratic equation (a = 0).\n");
        return;
    }

    float discriminant = b * b - 4 * a * c; // Calculate the discriminant
    float root1, root2;

    // Categorize based on the discriminant
    if (discriminant > 0)
    {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (discriminant == 0)
    {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("The roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        // Complex (imaginary) roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex and imaginary:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

int main()
{
    float a, b, c;

    // Input coefficients of the quadratic equation
    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    if (scanf("%f %f %f", &a, &b, &c) != 3)
    {
        printf("Invalid input. Please enter numeric values for a, b, and c.\n");
        return 1;
    }

    // Call the function to find and categorize roots
    findRoots(a, b, c);

    return 0;
}
