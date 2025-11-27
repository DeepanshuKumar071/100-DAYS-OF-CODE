// Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    enum Month m;

    for (m = JAN; m <= DEC; m++)
    {
        switch (m)
        {
        case JAN:
            printf("January has 31 days\n");
            break;
        case FEB:
            printf("February has 28/29 days\n");
            break;
        case MAR:
            printf("March has 31 days\n");
            break;
        case APR:
            printf("April has 30 days\n");
            break;
        case MAY:
            printf("May has 31 days\n");
            break;
        case JUN:
            printf("June has 30 days\n");
            break;
        case JUL:
            printf("July has 31 days\n");
            break;
        case AUG:
            printf("August has 31 days\n");
            break;
        case SEP:
            printf("September has 30 days\n");
            break;
        case OCT:
            printf("October has 31 days\n");
            break;
        case NOV:
            printf("November has 30 days\n");
            break;
        case DEC:
            printf("December has 31 days\n");
            break;
        }
    }

    return 0;
}
