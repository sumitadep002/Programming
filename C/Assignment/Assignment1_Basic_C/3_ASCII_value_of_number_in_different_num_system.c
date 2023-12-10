/* Print the ASCII value of user entered character in decimal, hex, octal format and also print the 
character for user entered ASCII value.*/
#include<stdio.h>
int main()
{
    char character;
    int ASCII;

    printf("enter the character ");//
    scanf("%c",&character);
    
    ASCII = (int)character;
    
    if(ASCII >255)
    {
    printf("Enter Less than 256\n");
    return 0;
    }
    
    printf("\n ASCII of '%c' in Decimal %d\n",character,ASCII);
    printf("\n ASCII of '%c' in Octal %o\n",character,ASCII);
    printf("\n ASCII of '%c' in Hex %x\n",character,ASCII);
    
    s
    
    return 0;
}
