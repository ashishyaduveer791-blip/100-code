#include <stdio.h>
#include <string.h>

int main()
{
    char month[10];

    printf("Enter month (e.g., JAN, FEB, MAR): ");
    scanf("%s", month);

    if (strcmp(month, "JAN") == 0)
        printf("31 days\n");
    else if (strcmp(month, "FEB") == 0)
        printf("28 or 29 days\n");
    else if (strcmp(month, "MAR") == 0)
        printf("31 days\n");
    else if (strcmp(month, "APR") == 0)
        printf("30 days\n");
    else if (strcmp(month, "MAY") == 0)
        printf("31 days\n");
    else if (strcmp(month, "JUN") == 0)
        printf("30 days\n");
    else if (strcmp(month, "JUL") == 0)
        printf("31 days\n");
    else if (strcmp(month, "AUG") == 0)
        printf("31 days\n");
    else if (strcmp(month, "SEP") == 0)
        printf("30 days\n");
    else if (strcmp(month, "OCT") == 0)
        printf("31 days\n");
    else if (strcmp(month, "NOV") == 0)
        printf("30 days\n");
    else if (strcmp(month, "DEC") == 0)
        printf("31 days\n");
    else
        printf("Invalid month\n");

    return 0;
}
