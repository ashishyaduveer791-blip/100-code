// Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long num;
    int count[10] = {0}; // Array to store frequency of digits

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0)
    {
        num = -num;
    }

    // Count frequency of each digit
    while (num > 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    int maxCount = count[0], digit = 0;
    for (int i = 1; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            digit = i;
        }
    }

    printf("The digit that occurs the most is %d (appears %d times).\n", digit, maxCount);

    return 0;
}
