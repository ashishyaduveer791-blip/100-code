#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50], middleName[60];
    char surname[25];

    printf("Enter first name: ");
    scanf("%s", firstName);

    printf("Enter middle name: ");
    scanf("%s", middleName);

    printf("Enter surname: ");
    scanf("%s", surname);

    printf("%c,%c,%s\n", firstName[0], middleName[0], surname);

    return 0;
}
