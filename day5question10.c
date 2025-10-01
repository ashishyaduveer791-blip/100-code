#include <stdio.h>

// Function to convert seconds into hours, minutes, and seconds
void convertSeconds(int totalSeconds, int *hours, int *minutes, int *seconds)
{
    *hours = totalSeconds / 3600;          // Calculate hours
    *minutes = (totalSeconds % 3600) / 60; // Calculate remaining minutes
    *seconds = totalSeconds % 60;          // Calculate remaining seconds
}

int main()
{
    int totalSeconds, hours, minutes, seconds;

    // Prompt the user to enter time in seconds
    printf("Enter time in seconds: ");

    // Input validation to ensure the user enters a valid integer
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    // Call the function to perform the conversion
    convertSeconds(totalSeconds, &hours, &minutes, &seconds);

    // Display the result in hours:minutes:seconds format
    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0; // Exit the program successfully
}
