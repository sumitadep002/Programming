/*
Write a program to display
a. Prime numbers between 1 to 100
*/

#include<stdio.h>
int  main()
{
    int is_prime=0;
    for(int i=2,count=0;i<=100;i++)
    {
        is_prime=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
           is_prime=1;
           break;
        }
            
    }
    if(!is_prime)
    printf("%d ",i);

    }
    return 0;
}
