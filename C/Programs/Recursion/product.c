#include<stdio.h>
int prod(int n)
{
if(n<=1)
return 1;
return (n*prod(n-1));
}

int main()
{
int n;
printf("Enter Number: ");
scanf("%d",&n);
printf("Product of first %d numbers: %d\n",n,prod(n));
return 0;
}
