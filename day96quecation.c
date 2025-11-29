#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    int emp_id;
    struct Date joining_date;
};

void printEmployee(struct Employee e)
{
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           e.name, e.emp_id,
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);
}

int main()
{
    struct Employee emp;

    printf("Enter name, ID, joining date (day month year): ");
    scanf("%s %d %d %d %d", emp.name, &emp.emp_id,
          &emp.joining_date.day,
          &emp.joining_date.month,
          &emp.joining_date.year);

    printEmployee(emp);

    return 0;
}
