// Write a program to swap two numbers using a third variable.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter number a ");
    scanf("%d", &a);
    printf("Enter number b");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("first number :%d\n", a);
    printf("second number : %d\n", b);
    return 0;
}