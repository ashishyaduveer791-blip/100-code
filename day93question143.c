#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student students[3];
    int i, maxIndex = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter name, roll, marks of student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    for (i = 1; i < 3; i++)
    {
        if (students[i].marks > students[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTopper: %s (Marks: %d)\n",
           students[maxIndex].name,
           students[maxIndex].marks);

    return 0;
}
