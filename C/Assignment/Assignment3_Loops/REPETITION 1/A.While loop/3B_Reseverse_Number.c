/*
b. Reverse the number
Input: 9362
Output: 2639

*/

#include<stdio.h>
int main()
{
    unsigned number,sum=0,temp=0;

    printf("enter the number: ");
    scanf("%d",&number);

    temp=number;
    
    while(temp!=0)
    {
        sum=temp%10+sum*10;
        temp= temp/10;
    }

    printf("\n%d",sum);
    return 0;
}
