// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    int middle = n % (int)pow(10, digits);
    middle = middle / 10;

    swapped = last * (int)pow(10, digits) + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
