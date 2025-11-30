// Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{

    struct Employee *e = (struct Employee *)malloc(sizeof(struct Employee));

    if (e == NULL)
    {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e->id);

    printf("Enter Name: ");
    scanf("%s", e->name);

    printf("Enter Salary: ");
    scanf("%f", &e->salary);

    printf("\n---- Employee Details ----\n");
    printf("ID: %d\n", e->id);
    printf("Name: %s\n", e->name);
    printf("Salary: %.2f\n", e->salary);

    free(e);

    return 0;
}
