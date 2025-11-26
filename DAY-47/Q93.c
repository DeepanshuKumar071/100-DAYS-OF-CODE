// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[200];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2))
    {
        printf("Not Anagrams");
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Strings are Anagrams");

    return 0;
}
