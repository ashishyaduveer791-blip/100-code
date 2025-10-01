// Merge two arrays.
#include <stdio.h>

int main()
{
    int n1, n2;

    // Input sizes of two arrays
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], merged[n1 + n2];

    // Input elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // Input elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays
    for (int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
