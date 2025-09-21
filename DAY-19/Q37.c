// Write a program to find the LCM of two numbers.
#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 * num2) / gcd(num1, num2);

    printf("LCM = %d\n", lcm);

    return 0;
}
