// Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main()
{
    char date[20], day[3], year[5];

    printf("Enter date (dd/04/yyyy): ");
    gets(date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    printf("%s-Apr-%s", day, year);

    return 0;
}
