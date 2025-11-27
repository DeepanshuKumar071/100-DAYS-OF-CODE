// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL)
    {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL)
    {
        printf("Error: Cannot create output.txt!\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF)
    {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion completed! Check output.txt\n");

    return 0;
}
