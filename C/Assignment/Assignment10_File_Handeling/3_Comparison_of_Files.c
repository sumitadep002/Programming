/*
Write a program that compares two files and return 0 if they are equal and 1 if they are not
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int NotEqual=0;
    FILE *fp1,*fp2;
    char ch1,ch2;
    fp1=fopen("a.txt","r");
    if(fp1==NULL)
    {
        printf("\nsorry file did not open");
    }
    fp2=fopen("file2.txt","r");
    if(fp2==NULL)
    {
        printf("\nsorry file did not open");
    }
    ch1=fgetc(fp1);
    ch2=fgetc(fp2);
    do{
        if(ch1!=ch2)
        {
            printf("\nboth the file contain different information");
            NotEqual=1;
            break;
        }
    }while(fgetc(fp1)!=EOF);

    if(NotEqual==0)
    printf("\nboth the file contain same information");

    fclose(fp1);
    fclose(fp2);
    
    return 0;
}