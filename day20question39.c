#include <stdio.h>

int main()
{
    int num, digit, product = 1;
    int hasOdd = 0; // to check if odd digits exist

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp != 0)
    {
        digit = temp % 10; // extract last digit
        if (digit % 2 != 0)
        { // check if odd
            product *= digit;
            hasOdd = 1;
        }
        temp = temp / 10; // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %d\n", num, product);
    else
        printf("No odd digits in %d.\n", num);

    return 0;
}
