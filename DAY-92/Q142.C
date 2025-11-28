// Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[5];
    int i;

    // Input
    for (i = 0; i < 5; i++)
    {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n\n", s[i].marks);
    }

    return 0;
}
