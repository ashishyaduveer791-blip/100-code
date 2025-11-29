#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

struct Person
{
    char name[50];
    enum Gender gender;
};

int main()
{
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0 = MALE, 1 = FEMALE, 2 = OTHER): ");
    scanf("%d", &p.gender);

       if (p.gender == MALE)
        printf("Male\n");
    else if (p.gender == FEMALE)
        printf("Female\n");
    else if (p.gender == OTHER)
        printf("Other\n");
    else
        printf("Invalid gender\n");

    return 0;
}
