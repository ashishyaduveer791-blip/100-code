// rite a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int swapFirstLast(int num)
{
    int digits = (int)log10(num);      // Number of digits - 1
    int first = num / pow(10, digits); // First digit
    int last = num % 10;               // Last digit

    // Remove first and last digits
    int middle = num % (int)pow(10, digits);
    middle = middle / 10;

    // Form new number after swapping
    int swapped = last * pow(10, digits) + middle * 10 + first;

    return swapped;
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = swapFirstLast(number);
    printf("Number after swapping first and last digits: %d\n", result);

    return 0;
}
