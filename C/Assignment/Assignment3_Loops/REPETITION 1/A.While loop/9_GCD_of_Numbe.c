/*
Write a program to accept two numbers and find its GCD (greatest common divisor) using
Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
6 % 3 = 0
GCD = 3
Input:
no1: 123
no2:36
Output:
123 % 36 = 15
36 % 15 = 6
15 % 6 = 3
GCD of 123 and 36 is 3
*/

#include<stdio.h>
int main()
{
    int num1,num2,x,y,r;
    printf("enter first number= ");
    scanf("%d",&x);
    printf("enter second number= ");
    scanf("%d",&y);
    num1= (x>y)?x:y;
    num2= (x<y)?x:y;

    while(num1%num2!=0)
    {
        printf("\n%d %% %d = %d",num1,num2,num1%num2);
        r=num1%num2;
        num1=num2;
        num2=r;
    }
    printf("\n%d %% %d = %d",num1,num2,num1%num2);
    printf("\nGCD is %d\n",num2);

    return 0;
}
