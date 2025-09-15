// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, product;
    product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("No even numbers in this range.\n");
        return 0;
    }
    for (int i = 2; i <= n; i += 2)
    {
        product *= i;
    }
    printf("Product = %d \n", product);
    return 0;
}
