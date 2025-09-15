// Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n, sum;
    sum = 0;
    printf("Enter Number:");
    scanf("%d", &n);
    for (int i = 1; i <= 2 * n; i += 2)
    {
        sum += i;
    }
    printf("Sum : %d", sum);
    return 0;
}