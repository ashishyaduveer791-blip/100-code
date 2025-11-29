#include <stdio.h>

enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    enum Days d;

    printf("Days of the Week:\n\n");

    for (d = SUNDAY; d <= SATURDAY; d++)
    {
        switch (d)
        {
        case SUNDAY:
            printf("%d - SUNDAY\n", d);
            break;
        case MONDAY:
            printf("%d - MONDAY\n", d);
            break;
        case TUESDAY:
            printf("%d - TUESDAY\n", d);
            break;
        case WEDNESDAY:
            printf("%d - WEDNESDAY\n", d);
            break;
        case THURSDAY:
            printf("%d - THURSDAY\n", d);
            break;
        case FRIDAY:
            printf("%d - FRIDAY\n", d);
            break;
        case SATURDAY:
            printf("%d - SATURDAY\n", d);
            break;
        }
    }

    return 0;
}
