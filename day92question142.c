#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student students[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("\n");
    }

    printf("--- Student Details ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name,
               students[i].roll_no,
               students[i].marks);
    }

    return 0;
}
