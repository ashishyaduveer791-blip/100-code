#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter student name, roll, marks: ");
    scanf("%s %d %d", s1.name, &s1.roll_no, &s1.marks);

    printStudent(s1);

    return 0;
}
