/*
1. Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
******
*/

#include<stdio.h>
int main()
{
    char character,i=0;
    int number;

    printf("enter the character you want to be printed: ");
    scanf("%c",&character);
    printf("enter the number: ");
    scanf("%d",&number);
    while(i<number)
    {
        printf("%c",character);
        i++;
    }

    return 0;
}
