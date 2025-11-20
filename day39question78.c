#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of Square matrix:");
    scanf("%d", &n);
    int arr[n][n];
    int sum = 0;
    printf("Enter  matrix elemnts:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    printf("sum of main daigonal elements = %d\n", sum);
    return 0;
}