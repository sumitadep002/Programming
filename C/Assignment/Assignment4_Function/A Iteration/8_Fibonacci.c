//Write a function to return next term of Fibonacci series with each call to the function.
#include<stdio.h>
int fibonacci(int);


int main()
{
    printf("%d",fibonacci(3));
    printf("\n");
    return 0;
}

int fibonacci(int n)
{
    int a=1,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
