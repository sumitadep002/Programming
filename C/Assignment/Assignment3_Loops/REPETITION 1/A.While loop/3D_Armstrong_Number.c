/*
d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/

#include<stdio.h>
int main()
{
    int number,sum=0,temp=0;

    printf("enter the number: ");
    scanf("%d",&number);

    temp=number;
    int i=0;
    while(temp!=0)
    {
        i=temp%10;
        sum=i*i*i+sum;

        printf("(%d * %d * %d)",i,i,i);
        temp= temp/10;
        if(temp!=0)
        printf(" + ");
        else
        printf(" = %d",sum);
    }

    if(sum==number)
    printf(" is a armstrong number\n");
    else
    printf(" is not a armstrong number\n");
    return 0;
}
