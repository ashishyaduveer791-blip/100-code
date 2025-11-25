#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of array (at least 5): ");
    scanf("%d", &n);

    int arr[n];
    int check[n + 1];

    for (int i = 0; i <= n; i++)
    {
        check[i] = 0;
    }

    printf("Enter %d elements (numbers between 0 to %d):\n", n, n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        check[arr[i]] = 1;
        }

    int missing = -1;
    for (int i = 0; i <= n; i++)
    {
        if (check[i] == 0)
        {
            missing = i;
            break;
        }
    }

    printf("Missing number is: %d\n", missing);

    return 0;
}
