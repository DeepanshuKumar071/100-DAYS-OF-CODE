/*Write a program to print the following pattern:

*

***

*****
*******
***

*
*/
#include <stdio.h>

int main()
{
    int i, j, stars;
    int pattern[] = {1, 3, 5, 7, 3, 1};

    for (i = 0; i < 6; i++)
    {
        stars = pattern[i];
        for (j = 1; j <= stars; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }

    return 0;
}
