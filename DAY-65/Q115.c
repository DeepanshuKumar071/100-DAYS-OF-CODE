// Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT)
    {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0};

    for (int i = 0; i < lenS; i++)
        count[s[i] - 'a']++;

    for (int i = 0; i < lenT; i++)
        count[t[i] - 'a']--;

    int isAnagram = 1;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}
