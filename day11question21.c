#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main()
{
    int month, year;

    // Prompt the user to enter the month number
    printf("Enter the month number (1-12): ");
    if (scanf("%d", &month) != 1 || month < 1 || month > 12)
    {
        printf("Invalid input. Please enter a number between 1 and 12.\n");
        return 1;
    }

    // Prompt the user to enter the year (for leap year consideration)
    printf("Enter the year: ");
    if (scanf("%d", &year) != 1 || year < 1)
    {
        printf("Invalid input. Please enter a valid year.\n");
        return 1;
    }

    // Determine the month name and number of days using switch-case
    switch (month)
    {
    case 1:
        printf("Month: January, Days: 31\n");
        break;
    case 2:
        if (isLeapYear(year))
        {
            printf("Month: February, Days: 29 (Leap Year)\n");
        }
        else
        {
            printf("Month: February, Days: 28\n");
        }
        break;
    case 3:
        printf("Month: March, Days: 31\n");
        break;
    case 4:
        printf("Month: April, Days: 30\n");
        break;
    case 5:
        printf("Month: May, Days: 31\n");
        break;
    case 6:
        printf("Month: June, Days: 30\n");
        break;
    case 7:
        printf("Month: July, Days: 31\n");
        break;
    case 8:
        printf("Month: August, Days: 31\n");
        break;
    case 9:
        printf("Month: September, Days: 30\n");
        break;
    case 10:
        printf("Month: October, Days: 31\n");
        break;
    case 11:
        printf("Month: November, Days: 30\n");
        break;
    case 12:
        printf("Month: December, Days: 31\n");
        break;
    default:
        // This case will never occur due to input validation
        printf("Invalid month number.\n");
    }

    return 0;
}
