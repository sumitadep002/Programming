//these are binary modes: fwrite() and fread()
#include <stdio.h>
struct  book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct book b1;
    /*printf("ente the id of the book ");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    printf("ente the name of the book ");
    gets(b1.title);
    printf("ente the price of the book ");
    scanf("%f",&b1.price);*/
    FILE *f;
    char ch;
    f = fopen("TestFile.txt", "rb");
    if (f != NULL)
    {
        printf("\nfile opened successfully\n");
    }
    else
    {
        printf("\nfile did not open successfully\n");
        return 0;
    }
    //fwrite(&b1,sizeof(b1),1,f);
    char s[50];
    fread(&b1,sizeof(b1),1,f);
    printf(" %d %s %f",b1.bookid,b1.title,b1.price);

    
    return 0;
}