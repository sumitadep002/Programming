// Write a function to calculate power. 
#include<stdio.h>
int power(int ,int);
int main()
{
    int base,index;
    printf("enter the base: ");
    scanf("%d",&base);
    printf("enter the index: ");
    scanf("%d",&index);

    printf("%d\n",power(base,index));

    return 0;
}

int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
