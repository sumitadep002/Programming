//Write a function to print given number of terms of Fibonacci series. 
#include<stdio.h>
void fibonacci(int);


int main()
{
    fibonacci(5);
    printf("\n");
    return 0;
}

void fibonacci(int n)
{
    int a=1,b=0,c=0;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf(" %d ",c);
    }
}
