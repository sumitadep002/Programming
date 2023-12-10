/*
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
*/

#include<stdio.h>
int main()
{
    int number,sum=0,temp=0;

    printf("enter the number: ");
    scanf("%d",&number);

    temp=number;
    
    while(temp!=0)
    {
        sum=temp%10+sum*10;
        temp= temp/10;
    }
    if(sum==number)
    printf("\n%d is a pelindrome number",number);
    else
    printf("\n%d is not a pelindrome number",number);
    return 0;
}