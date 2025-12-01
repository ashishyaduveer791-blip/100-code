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
        int maxVal = arr[i];

        for (int j = i + 1; j < i + k; j++)
        {
            if (arr[j] > maxVal)
            {
                maxVal = arr[j];
            }
        }

        printf("%d", maxVal);

        if (i != n - k)
            printf(" ");
    }

    return 0;
}
