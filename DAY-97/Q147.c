// Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct Employee e, e2;
    FILE *fp;

    fp = fopen("employee.bin", "wb");
    if (fp == NULL)
    {
        printf("File creation error!");
        return 1;
    }

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Name: ");
    scanf("%s", e.name);

    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    printf("\nEmployee data saved to file.\n\n");

    fp = fopen("employee.bin", "rb");
    if (fp == NULL)
    {
        printf("File open error!");
        return 1;
    }

    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("---- Employee Data Read From File ----\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
