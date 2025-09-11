// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main()
{
    float cp, sp, profit, loss, percent;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        profit = sp - cp;
        percent = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percent);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        percent = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percent);
    }
    else
    {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
