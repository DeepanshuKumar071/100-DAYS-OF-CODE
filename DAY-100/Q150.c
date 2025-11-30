// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

void updateEmployee(struct Employee *e)
{
    e->id = 101;
    e->salary = 55000.50;
}

int main()
{
    struct Employee emp = {1, "Amit", 30000.0};
    struct Employee *ptr = &emp;

    updateEmployee(ptr);

    printf("---- Employee Details ----\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
