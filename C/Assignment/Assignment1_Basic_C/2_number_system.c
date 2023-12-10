/*Write a program to accept a number and print the number in character, decimal, octal and hex 
formats*/
#include<stdio.h>
int main()
{
    int number=0;
    
    printf("enter a decimal number: "); //ask for input from user 
    scanf("%d",&number);                          //take input
    
    if(number<=255)
    printf("\n%d in char \t%c",number,number);                          //print character using %c
    else
    printf("\n%d>=255",number);
    
    printf("\n%d in Hex \t%x",number,number); //print hex value using %x

    printf("\n%d in Octal \t%o",number,number);      //print octal using %o
    
    printf("\n%d in Decimal \t%d\n",number,number);    //print decimal number
    

    return 0;
}
