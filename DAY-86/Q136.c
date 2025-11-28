// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case ADD:
        printf("Result = %d\n", a + b);
        break;

    case SUBTRACT:
        printf("Result = %d\n", a - b);
        break;

    case MULTIPLY:
        printf("Result = %d\n", a * b);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
