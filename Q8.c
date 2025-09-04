// Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
    int n, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
