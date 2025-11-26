// Remove all vowels from a string.
#include <stdio.h>

int main()
{
    char str[200], newStr[200];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            continue;
        }

        newStr[j] = ch;
        j++;
    }

    newStr[j] = '\0';

    printf("String without vowels: %s", newStr);

    return 0;
}
