// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main()
{
    int num, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    int temp = num;

    // store binary digits in array
    while (temp > 0)
    {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    printf("Binary of %d: ", num);
    // print in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
