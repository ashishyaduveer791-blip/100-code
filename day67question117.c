#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter size of first array:");
    scanf("%d", &m);
    int a[m];
    printf("Enter %d sorted elements:\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
        /* code */
    }
    printf("Enter size of second array:");
    scanf("%d", &n);
    int b[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int total = m + n;
    int c[total];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    for (int i = 0; i < total; i++)
    {
        for (int j = i + 1; j < total; j++)
        {
            if (c[i] > c[j])
            {
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("Merged sorted array:\n");
    for (int i = 0; i < total; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
