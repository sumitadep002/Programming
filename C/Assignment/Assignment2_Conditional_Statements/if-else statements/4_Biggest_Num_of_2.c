/*

Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.

*/


#include<stdio.h>
int main()
{
    int number1,number2;
    printf("enter number1: ");
    scanf("%d",&number1);

    printf("\nenter number2: ");
    scanf("%d",&number2);
    printf("Using if-else\n");
    if(number1!=number2)
    {

    if(number1>number2)
    printf("%d > %d\n",number1,number2);
    else
    printf("%d < %d\n",number1,number2);

    }
    else
    printf("\nboth are equal\n");

    printf("Using conditional operator: \n");

    number1==number2 ? printf("both are equal") : number1>number2?printf("%d > %d\n",number1,number2):printf("%d < %d\n",number1,number2);

    return 0;
}
