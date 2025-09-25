// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int num = 1, den = 2;

    for (int i = 1; i <= n; i++)
    {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Sum of series up to %d terms = %.4f\n", n, sum);

    return 0;
}
