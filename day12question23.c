#include <stdio.h>

// Function to calculate the library fine
void calculateFine(int lateDays)
{
    int fine = 0;

    if (lateDays <= 0)
    {
        printf("No fine. Book returned on time.\n");
        return;
    }

    if (lateDays <= 5)
    {
        fine = lateDays * 2; // ₹2/day for the first 5 days
    }
    else if (lateDays <= 10)
    {
        fine = (5 * 2) + ((lateDays - 5) * 4); // ₹4/day for the next 5 days
    }
    else if (lateDays <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6); // ₹6/day for the next 20 days
    }
    else
    {
        printf("Membership cancelled due to more than 30 days late.\n");
        return;
    }

    printf("The fine for %d late days is: ₹%d\n", lateDays, fine);
}

int main()
{
    int lateDays;

    // Prompt the user to enter the number of late days
    printf("Enter the number of late days: ");
    if (scanf("%d", &lateDays) != 1 || lateDays < 0)
    {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate and display the fine
    calculateFine(lateDays);

    return 0;
}
