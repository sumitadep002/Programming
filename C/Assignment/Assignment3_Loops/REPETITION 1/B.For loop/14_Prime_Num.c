/*
14. Write a program to accept a number and check whether it is Prime no
*/
#include<stdio.h>
int  main()
{
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    int count=0,i=1;
    while(i<=number)
    {
        if(number%i==0)
        {
            count++;
            if(count>2)
            {
                printf("%d is not a prime number",number);
                break;
            }

        }
        i++;
    }
    if(count==2)
    printf("\n %d is a prime number\n",number);
    return 0;
}
