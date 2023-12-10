//Write a program to accept number and check whether the number is +ve, -ve and zero

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number: ");
    scanf("%d",&number);

    if(number!=0)
    {
        if(number>0)
        printf("number %d is positive\n",number);

        else
        printf("number %d is negative\n",number);
    }
    else 
    printf("number %d is zero\n",number);

    return 0;
}
