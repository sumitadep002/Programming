#include <stdio.h>

int main()
{
    FILE *f;
    char ch;
    f = fopen("TestFile.txt", "r");
    if (f != NULL)
    {
        printf("\nfile opened successfully\n");
    }
    else
    {
        printf("\nfile did not open successfully\n");
        return 0;
    }

    ch = fgetc(f);
    while (!feof)
    {
        printf("%c", ch);
        ch = fgetc(f);
    }
    fclose(f);
    return 0;
}