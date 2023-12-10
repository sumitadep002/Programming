//5. Write a function to print a given character for a given number of times
#include<stdio.h>
void char_print(char ,int);
int main()
{
    char character;
    int number;
    printf("enter the character: ");
    scanf("%c",&character);
    printf("enter the number: ");
    scanf(" %d",&number);

    char_print(character,number);
    printf("\n");
    return 0;
}

void char_print(char c,int n)
{
    for(int i=1;i<=n;i++)
    printf("%c",c);
}
