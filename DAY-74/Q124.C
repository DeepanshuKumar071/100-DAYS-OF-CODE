// Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main()
{
    char src[100], dest[100];
    FILE *fsrc, *fdest;
    char ch;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fsrc = fopen(src, "r");
    if (fsrc == NULL)
    {
        printf("Error: Cannot open source file!\n");
        return 1;
    }

    fdest = fopen(dest, "w");
    if (fdest == NULL)
    {
        printf("Error: Cannot open/create destination file!\n");
        fclose(fsrc);
        return 1;
    }

    while ((ch = fgetc(fsrc)) != EOF)
    {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);

    printf("File copied successfully!\n");

    return 0;
}
