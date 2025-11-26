// Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longest[50];
    int maxLen = 0, len = 0, i = 0, start = 0, wordStart = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            if (len == 0)
                wordStart = i;
            len++;
        }
        else
        {
            if (len > maxLen)
            {
                maxLen = len;
                start = wordStart;
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    strncpy(longest, str + start, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);

    return 0;
}
