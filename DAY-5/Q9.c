// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float P, R, T, SI, CI, amount;

    printf("Enter your principal amount ");
    scanf("%f", &P);

    printf("Enter your rate");
    scanf("%f", &R);

    printf("Enter your time");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    amount = P * pow((1 + R / 100), T);
    CI = amount - P;

    printf("your simple interest is : %f\n", SI);
    printf("your compund interest is : %2f\n", CI);

    return 0;
}