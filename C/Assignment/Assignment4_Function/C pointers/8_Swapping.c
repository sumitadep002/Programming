//. Write a function to swap two numbers
#include<stdio.h>

//this function will swap the content of the variable by their address
void swap(int *,int *);
int main()
{
    int a,b;
    printf("enter the a: ");
    scanf("%d",&a);
    printf("enter the b: ");
    scanf("%d",&b);

    swap(&a,&b);

    printf("a=%d , b=%d",a,b);
    return 0;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
