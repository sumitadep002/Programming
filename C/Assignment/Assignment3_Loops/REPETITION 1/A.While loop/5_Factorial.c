/*
4. Write a program to find factorial of given number.
Input: 5
Output: 5 * 4 * 3 * 2 * 1 = 120

*/

#include<stdio.h>
int main()
{
    int number,sum=0,temp=0,factorial=1;

    printf("enter the number: ");
    scanf("%d",&number);

    temp=number;
    printf("\n");
    while(temp!=0)
    {
        printf(" %d ",temp);
        factorial=factorial*temp;
        temp=temp-1;
        if(temp!=0)
        printf(" * ");
    }

    printf(" = %d\n",factorial);
    return 0;
}
