// Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error: Could not open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        chars++;

        if (ch == '\n')
            lines++;

        if (!isspace(ch) && inWord == 0)
        {
            inWord = 1;
            words++;
        }
        else if (isspace(ch))
        {
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Total Characters: %d\n", chars);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
