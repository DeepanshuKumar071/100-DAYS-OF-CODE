// Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e1, e2;

    printf("Enter details of Employee 1:\n");
    printf("ID: ");
    scanf("%d", &e1.id);

    printf("Name: ");
    scanf("%s", e1.name);

    printf("Salary: ");
    scanf("%f", &e1.salary);

    printf("\nEnter details of Employee 2:\n");
    printf("ID: ");
    scanf("%d", &e2.id);

    printf("Name: ");
    scanf("%s", e2.name);

    printf("Salary: ");
    scanf("%f", &e2.salary);

    if (e1.id == e2.id &&
        strcmp(e1.name, e2.name) == 0 &&
        e1.salary == e2.salary)
    {
        printf("\nBoth employees are IDENTICAL.\n");
    }
    else
    {
        printf("\nEmployees are NOT identical.\n");
    }

    return 0;
}
