// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
        {
            printf("The number is Zero\n");
        }
        else
        {
            printf("%d is Positive\n", num);
        }
    }
    else
    {
        printf("%d is Negative\n", num);
    }

    return 0;
}
