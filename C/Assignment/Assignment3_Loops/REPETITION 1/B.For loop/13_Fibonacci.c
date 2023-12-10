/*. Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);

    int a=-1,b=1,c=0;
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf(" %d ",c);
    }

    return 0;
}
