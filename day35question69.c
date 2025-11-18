// #include <stdio.h>
// int main()
// {
//     int arr[100], n;
//     int largest, secondLargest;
//     printf("Enter number of elements:");
//     scanf("%d", &n);
//     if (n < 2)
//     {
//         prrintf("Array must have at least two elements.\n");
//         return 0;
//         /* code */
//     }
//     printf("Enter %d elements:\n", n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//         /* code */
//     }
//     if (arr[0] > arr[1])
//     {
//         largest = arr[0];
//         secondLargest = arr[1];
//         /* code */
//     }
//     else
//     {
//         largest = arr[1];
//         secondLargest = arr[0];
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > secondLargest && arr[i] != largest)
//         {
//             secondLargest = arr[i];
//         }
//     }
//     printf("Second largest element: %d\n", secondLargest);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int arr[100], n;
    int largest, secondLargest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Need at least 2 elements
    if (n < 2)
    {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    // Find second largest
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element: %d\n", secondLargest);

    return 0;
}
