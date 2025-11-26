// Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main()
{
    char str[200];
    int freq[26] = {0};
    int i, index;
    char found = '\0';

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';

            if (freq[index] == 1)
            {
                found = str[i];
                break;
            }
            freq[index]++;
        }
    }

    if (found != '\0')
        printf("First repeating lowercase alphabet: %c", found);
    else
        printf("No repeating lowercase alphabet found.");

    return 0;
}
