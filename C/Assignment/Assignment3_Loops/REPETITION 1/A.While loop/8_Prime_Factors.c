/*
Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5
*/

#include<stdio.h>
int main()
{
    int number,temp,i=2;
    printf("enter the number= ");
    scanf("%d",&number);
    temp=number;
    while (i<temp)
    {
        if(temp%i==0)
        {
            printf(" %d *",i);
            temp=temp/i;
            
            
        }
        else
        i++;
        
    }
    printf(" %d = %d\n",i,number);
}
