// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    int result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
        break;
    case '/':
        if (num2 != 0)
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        else
            printf("Error: Division by zero!\n");
        break;
    case '%':
        if (num2 != 0)
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        else
            printf("Error: Modulo by zero!\n");
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}
