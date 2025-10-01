// Write a program to find the sum of digits of a number.
#include <stdio.h>

int main()
{
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
    {
        remainder = temp % 10; // extract last digit
        sum += remainder;      // add to sum
        temp = temp / 10;      // remove last digit
    }

    printf("Sum of digits of %d = %d\n", num, sum);

    return 0;
}
