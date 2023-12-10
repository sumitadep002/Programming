/*
6. Write a program to accept a number and print all factors excluding the number
Input: 24
Output: all factors: 1, 2, 3, 4, 6, 8, 12
*/
#include<stdio.h>
int main()
{
    int number,factor=1;

    printf("enter the number: ");
    scanf("%d",&number);

    while(number/factor>=2)
    {
        if(number%factor==0)
        printf(" %d ",factor);
        
        if(number/factor!=2 && number%factor==0)
        printf(",");
        factor++;
        
    }
    return 0;
}
