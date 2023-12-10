//11. Write a program to find factorial of given number

#include<stdio.h>
int main()
{
    int number,factorial=1;

    printf("enter the number: ");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    factorial=factorial*i;

    printf("\n%d\n",factorial);

    return 0;
}
