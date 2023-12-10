/*

*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *f;
    int i=0;
    int tab=0,space=0,line=0;
    f = fopen("a.txt", "r");
    if (f == NULL)
    {
        printf("unable to open file");
    }
    else
    {
        printf("file opened successfully");
        char ch=fgetc(f);

        do
        {
            if(fgetc(f) == '\t')
            tab++;
            else if(fgetc(f) == 32)
            space++;
            else if(fgetc(f)=='\n')
            line++;
        }while (!EOF);
        
    }
    
    printf("\nlines %d\nspaces %d\ntabs %d\n",line,space,tab);


    fclose(f);

    return 0;
}