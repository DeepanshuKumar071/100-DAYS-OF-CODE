// Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char words[10][20];
    int i = 0, j = 0, k = 0;

    printf("Enter full name: ");
    gets(name);

    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            words[k][j++] = name[i];
        }
        i++;
    }
    words[k][j] = '\0';

    for (i = 0; i < k; i++)
    {
        printf("%c. ", words[i][0]);
    }

    printf("%s", words[k]);

    return 0;
}
