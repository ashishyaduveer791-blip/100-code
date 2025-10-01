#include <stdio.h>
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
int main()
{
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int numerator = 2 * i + 1;   // 1, 3, 5, 7 ...
        int denominator = 2 * i + 2; // 1, 4, 6, 8 ... actually second term onward
        if (i == 0)
        {
            sum += 1; // First term is 1
        }
        else
        {
            sum += (double)numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms: %.2lf\n", n, sum);

    return 0;
}
