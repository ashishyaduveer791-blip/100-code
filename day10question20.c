#include <stdio.h>

int main()
{
    int day;

    // Prompt the user to enter a number between 1 and 7
    printf("Enter a number (1-7) to display the day of the week: ");

    // Validate input
    if (scanf("%d", &day) != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit with error code
    }

    // Use switch-case to determine the day of the week
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
    default:
        // Handle invalid input
        printf("Invalid number! Please enter a number between 1 and 7.\n");
    }

    return 0; // Exit successfully
}
