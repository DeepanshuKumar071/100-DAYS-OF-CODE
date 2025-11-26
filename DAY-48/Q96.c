// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *str, int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);

    while (1)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }

        if (str[i] == '\0')
            break;
        i++;
    }

    printf("Output: %s\n", str);

    return 0;
}
