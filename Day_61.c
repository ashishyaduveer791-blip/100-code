#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (k > n)
        return 0;

    for (int i = 0; i <= n - k; i++)
    {
        int firstNeg = 0;

        for (int j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                firstNeg = arr[j];
                break;
            }
        }

        printf("%d", firstNeg);

        if (i != n - k)
            printf(" ");
    }

    return 0;
}
