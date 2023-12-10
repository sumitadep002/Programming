//Write a function to calculate factorial of a given number using recursion
#include<stdio.h>
unsigned long int factorial( int);
int main()
{
    int user_input;
    printf("enter the number ");
    scanf("%u",&user_input);
    printf("\n%u! is %lu\n",user_input,factorial(user_input));
    return 0;
}
unsigned long int factorial( int n)
{
    if(n<=1)
    return 1;
    return (n+factorial(n-1));
}
