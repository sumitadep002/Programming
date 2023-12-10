#include <stdio.h>

int main()
{
    FILE *f;
    char ch[50];
    f = fopen("TestFile.txt", "a");
    printf("enter the string ");
    gets(ch);
    if (f != NULL)
    {
        printf("\nfile opened successfully\n");
    }
    else
    {
        printf("\nfile did not open successfully\n");
        return 0;
    }
    fputs(ch,f);
    fclose(f);
    return 0;
}