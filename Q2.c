// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int A, B;
    printf("enter the value of A");
    scanf("%d", &A);
    printf("enter the value of B");
    scanf("%d", &B);
    int sum, diff, product, quotient;
    sum = A + B;
    diff = A - B;
    product = A * B;
    quotient = A / B;

    printf("sum:%d\n", sum);
    printf("diff:%d\n", diff);
    printf("product:%d\n", product);
    printf("quotient:%d\n", quotient);

    return 0;
}