// Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    for (int i = 0; i < n; i++)
        str[i] = tolower(str[i]);

    if (n > 0 && isalpha(str[0]))
        str[0] = toupper(str[0]);

    printf("Sentence case: %s\n", str);

    return 0;
}
