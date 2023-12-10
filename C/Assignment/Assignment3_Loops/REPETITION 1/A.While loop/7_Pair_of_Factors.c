/*
Write a program to accept a number and print unique pairs of numbers such that multiplication of
the pair is given number:

Input: 24
Output:
1 * 24 = 24
2 * 12 = 24
3 * 8 = 24
4 * 6 = 24
*/

#include<stdio.h>
int main()
{
    int number,i=1;
    printf("enter the number: ");
    scanf("%d",&number);

    int temp=number;
    while( i < temp )
    {
        temp=number/i;
        if((i*temp % number) == 0) //to check the divisiblity of the temp
        printf("\n%d * %d = %d",i,temp,number);
        else
        {
           i++;
           continue;
        }
        i++;
    }
    printf("\n");

    return 0;
}
