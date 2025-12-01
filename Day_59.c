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
    {
        printf("0");
        return 0;
    }

    int currentSum = 0;

    for (int i = 0; i < k; i++)
    {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    for (int i = k; i < n; i++)
    {
        currentSum += arr[i];
        currentSum -= arr[i - k];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
