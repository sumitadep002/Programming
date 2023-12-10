/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

#include<stdio.h>
int main()
{
    int a,b;

    printf("enter first number :");
    scanf("%d",&a);

    printf("enter second number :");
    scanf("%d",&b);

    if(b == 0)
    printf("warning: division by zero [-Wdiv-by-zero]");
    else
    printf("\n%d/%d = %0.2f",a,b,(float)a/b);


    return 0;
}


// whenever i try to divide a number by 0 it shows >> warning: division by zero [-Wdiv-by-zero]
