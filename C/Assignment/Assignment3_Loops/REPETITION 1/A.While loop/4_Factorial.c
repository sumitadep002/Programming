/*
4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120

*/

#include<stdio.h>
int main()
{
    int number,sum=0,temp=1,factorial=1;

    printf("enter the number: ");
    scanf("%d",&number);

    printf("\n");

    while(temp<=number)
    {
        printf(" %d ",temp);
        factorial=factorial*temp;
        temp++;
        if(temp<=number)
        printf(" * ");
    }

    printf(" = %d\n",factorial);
    return 0;
}
