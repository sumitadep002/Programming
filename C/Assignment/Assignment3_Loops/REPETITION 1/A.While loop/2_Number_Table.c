/*
Write a program to print table of given number.
Input: 9
Output:
9 x 1 = 9
9 x 2 = 18
9 x 3 = 27
9 x 4 = 36
9 x 5 = 45
9 x 5 = 54
9 x 7 = 63
9 x 8 = 72
9 x 9 = 81
9 x 10 = 90

*/

#include<stdio.h>
int main()
{
    int number,i=1;

    printf("enter the number: ");
    scanf("%d",&number);

    while(i<=10)
    {
        printf("%3d x %3i = %3d\n",number,i,number*i);
        i++;
    }

    return 0;
}
