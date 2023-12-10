/*
'r' read only reading possible not create file if not exist
'w' only writing possible create file if does not exit and will erase old content
'a' will allow to us to write inside file without losing previous data
'r+' reading + writing will overwrite a file if it does exists
'w+' R and W same as 'r+'
'a+' Reading + appending R and w it will append the new content without earsing previous data
*/
#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("TestFile.txt","a+");
    if(f!=NULL)
    {
        printf("\nfile opened successfully");
    }
    else
    {
    printf("\nfile did not open successfully");
    return 0;
    }
    char s[50];
    printf("\nenter the string : ");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    fputc(s[i],f);
    fclose(f);
    
    printf("\nfile closed successfully");


    return 0;
}