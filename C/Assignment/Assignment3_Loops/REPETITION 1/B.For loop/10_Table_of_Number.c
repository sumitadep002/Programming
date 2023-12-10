//10. Write a program to print table of given number.

#include<stdio.h>
int main()
{
    int number;

    printf("enter the number: ");
    scanf("%d",&number);

    for(int i=1;i<=10;i++)
    {
        printf("%d x %4i = %4d\n",number,i,number*i);
    }

    return 0;
}
