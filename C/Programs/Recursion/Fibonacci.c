#include<stdio.h>
int fib(int n)
{
if(n==2)
return 1;
if(n==1)
return 0;
return fib(n-1)+fib(n-2);
}

void fib_print(int n)
{
for(int i=1;i<=n;i++)
printf("%d ",fib(i));
}

int main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
fib_print(n);
return 0;
}
