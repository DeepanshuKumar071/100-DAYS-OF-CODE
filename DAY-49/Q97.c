// Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i = 0;

    printf("Enter your full name: ");
    gets(name);

    if (name[0] != ' ')
        printf("%c", name[0]);

    while (name[i] != '\0')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
        {
            printf("%c", name[i + 1]);
        }
        i++;
    }

    return 0;
}
