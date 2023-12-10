/*
Write a function to indicate whether given number is prime or not. Write another function to 
print prime numbers in the given range. 
*/
#include<stdio.h>
int prime(int);
void prime_range(int,int);
int main()
{
    int n=0,range_lower=0,range_upper=0;
    printf("enter the number= ");
    scanf("%d",&n);
    if(prime(n)==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);

    printf("\nenter the range from: ");
    scanf("%d",&range_lower);
    printf("to: ");
    scanf("%d",&range_upper);

    prime_range(range_lower,range_upper);
    printf("\n");
    return 0;
}
int prime(int number)
{
	if(number == 1)
	return 0;
    if(number==2)
    return 1;
    else
    {
    for(int i=2;i<number;i++)
    {
        if(number%i==0)
        return 0;
    }
    return 1;
    }
}
void prime_range(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        if(prime(i)!=0)
        printf(" %d ",i);
    }
}
