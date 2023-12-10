//Write a function to calculate factorial of a given number. 

#include<stdio.h>
int fact(int);
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d",&number);

    printf("%d\n",fact(number));
    return 0;
}

int fact(int n)
{
    int temp=1,factorial=1;
    while(temp<=n)
    {
        factorial=factorial*temp;
        temp++;
    }

    return factorial;
}
