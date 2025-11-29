#include <stdio.h>
#include <string.h>

// Define structure properly
struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function to return topper student
struct Student getTopper(struct Student s[], int n)
{
    int i, topIndex = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[topIndex].marks)
        {
            topIndex = i;
        }
    }
    return s[topIndex];
}

int main()
{
    int n = 3; // You forgot to declare n
    struct Student students[n];

    // Pre-filled names
    strcpy(students[0].name, "Ashish");
    strcpy(students[1].name, "Rohan");
    strcpy(students[2].name, "Neha");

    printf("Enter Roll Numbers and Marks of 3 Students:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Student %d Roll Number: ", i);
        scanf("%d", &students[i].roll);

        printf("Student %d Marks: ", i);
        scanf("%d", &students[i].marks);
    }

    struct Student topper = getTopper(students, n);

    printf("\nTop Student Details\n");
    printf("Name  : %s\n", topper.name);
    printf("Roll  : %d\n", topper.roll);
    printf("Marks : %d\n", topper.marks);

    return 0;
}
