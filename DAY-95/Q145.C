// Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

struct Student getTopper(struct Student s[], int n)
{
    int i, maxIndex = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    return s[maxIndex];
}

int main()
{
    struct Student s[5];
    struct Student topper;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter details of student %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    topper = getTopper(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Roll: %d\n", topper.roll);
    printf("Name: %s\n", topper.name);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
