/* Write a program to accept three integer numbers and find its average.*/

#include<stdio.h>
int main()
{
    int a,b,c;  //declaration
    printf("enter a : "); //ask for input for first number
    scanf("%d",&a);

    printf("\nenter b : "); //ask for input for second number
    scanf("%d",&b);

    printf("\nenter c : "); //ask for input for third number
    scanf("%d",&c);

    printf("\n(%d + %d + %d)/3 = %d",a,b,c,(a+b+c)/3); //print average
    return 0;
}
