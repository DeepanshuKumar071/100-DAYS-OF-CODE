// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    float marks;
};

void display(struct Student st)
{
    printf("Roll: %d\n", st.roll);
    printf("Name: %s\n", st.name);
    printf("Marks: %.2f\n", st.marks);
}

int main()
{
    struct Student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    display(s);

    return 0;
}
