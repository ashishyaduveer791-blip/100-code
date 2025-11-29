#include <stdio.h>

enum Status
{
    SUCCESS,
    FAILURE,
    PENDING
};

int main()
{
    enum Status s;

    // Take input as integer (0 = SUCCESS, 1 = FAILURE, 2 = PENDING)
    printf("Enter status (0 = SUCCESS, 1 = FAILURE, 2 = PENDING): ");
    scanf("%d", &s);

    if (s == SUCCESS)
        printf("Operation successful\n");
    else if (s == FAILURE)
        printf("Operation failed\n");
    else if (s == PENDING)
        printf("Operation pending\n");
    else
        printf("Invalid status\n");

    return 0;
}
