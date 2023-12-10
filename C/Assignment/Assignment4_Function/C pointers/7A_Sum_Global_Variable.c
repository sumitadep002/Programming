/*
Write a function to calculate sum and product into a single function. 
a. Using global variables (for result) 
*/
#include<stdio.h>
int sum=0,product=0;
void sum_product(int,int);
int main()
{
    
    sum_product(5,10);
    printf("sum of 5 and 10 is %d",sum);
    printf("\nproduct of 5 and 10 is %d",product);
    return 0;
}
void sum_product(int a,int b)
{
    sum=a+b;
    product=a*b;
}
