/*
3. Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/

#include<stdio.h>
int main()
{
    unsigned int number,sum=0,temp=0;
    unsigned int i=1;
    printf("enter the number: ");
    scanf("%u",&number);
    temp=number;
    while(temp!=1)
    {
    temp=temp/10;
    i=i*10;
    }
    temp=number;
    while(i!=0)
    {
        sum=(temp/i)+sum;
        printf(" %u ",temp/i);
        temp= temp%i;
        i=i/10;
        if(i!=0)
        printf("+");
        else
        printf(" = %u",sum);
    }
    printf("\n");
    return 0;
}
