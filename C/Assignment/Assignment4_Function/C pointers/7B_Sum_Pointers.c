/*
Write a function to calculate sum and product into a single function. 
b. Without using global variables
*/
#include<stdio.h>


//will accept the addresses of the sum and product variable to store the results
void sum_product(int,int,int*,int*);
int main()
{
    int sum=0,product=0;
    
    sum_product(5,10,&sum,&product);
    printf("5+10 = %d and 5*10 = %d",sum,product);
    return 0;
}
void sum_product(int a,int b,int *sum,int *product)
{
    *sum=a+b;
    *product=a*b;
}
