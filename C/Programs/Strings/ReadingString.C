#include <stdio.h>

int main()
{
    FILE *f;
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
    char ch[50];
    while (fgets(ch,2,f)!=NULL)
    {
        printf("%s", ch);
    }
    fclose(f);
    return 0;
}