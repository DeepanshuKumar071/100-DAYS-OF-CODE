// Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int A, B;
    printf("enter the value of A");
    scanf("%d", &A);
    printf("enter the value of B");
    scanf("%d", &B);
    int sum;
    sum = A + B;
    printf("sum:%d", sum);
    return 0;
}