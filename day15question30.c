#include <stdio.h>
// write a program to reverse a given number.
int main()
{
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;                 // get last digit
        reversed = reversed * 10 + remainder; // add digit to reversed number
        num = num / 10;                       // remove last digit
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
