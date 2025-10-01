#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // start from the greater of the two
    max = (a > b) ? a : b;

    // keep increasing max until it is divisible by both
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM of %d and %d = %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}
